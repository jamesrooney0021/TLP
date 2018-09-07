// Fill out your copyright notice in the Description page of Project Settings.

#include "BoardingMenuWidget.h"
#include "../Utilities/TLPUtilities.h"
#include "../Utilities/PlayerSaveGamePreferences.h"
#include "../TLPGameInstance.h"
#include "Kismet/GameplayStatics.h"


UBoardingMenuWidget::UBoardingMenuWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {
	static ConstructorHelpers::FObjectFinder<USoundBase> Soundf(TEXT("'/Game/Widgets/Sound/MenuMusic/BoardingScreen_Cue.BoardingScreen_Cue'"));
	BoardingMusic = Soundf.Object;
}



void UBoardingMenuWidget::SavePlayerAuthenticationData(const bool IsLoggedIn, const FString & PlayerName, const FString AccessToken, const FString & EmailAddress){
	bool result = UPlayerSaveGamePreferences::SavePlayerPreferences(IsLoggedIn, PlayerName, AccessToken, EmailAddress);
	if (result) {
		//Since user is logged in, take him to main inventory screen...
		UGameplayStatics::OpenLevel(GetWorld(), TEXT("/Game/Maps/UMGMaps/GameInventory"));
	}
	else {

	}
}

void UBoardingMenuWidget::ConnectedToGameSparks(bool ConnectionStatus)
{
	ConnectedToGameSparksService = ConnectionStatus;
	if (ConnectedToGameSparksService) {
		ProgressMessageText->SetText(FText::FromString(TEXT("Connected to game service.")));
		CircularThrobber->SetVisibility(ESlateVisibility::Hidden);

		if (UPlayerSaveGamePreferences::IsPlayerLoggedIn()) {
			//Since user is logged in, take him to main inventory screen...
			UGameplayStatics::OpenLevel(GetWorld(), TEXT("/Game/Maps/UMGMaps/GameInventory"));
		}
		else {
			//User is not logged in, hide the throbber.
		}
	}
	else {
		ProgressMessageText->SetText(FText::FromString(TEXT("Failed to connect to game service, try later.")));
		CircularThrobber->SetVisibility(ESlateVisibility::Hidden);
	}
}


bool UBoardingMenuWidget::Initialize() {
	bool success = Super::Initialize();

	if (ensure(BoardingMusic != nullptr)) {
		UGameplayStatics::PlaySound2D(GetWorld(), BoardingMusic);
	}

	if (!success) {
		return false;
	}

	if (!ensure(LoginButton != nullptr)) {
		return false;
	}
	LoginButton->OnClicked.AddDynamic(this, &UBoardingMenuWidget::LoginClickImplementation);

	if (!ensure(RegisterButton != nullptr)) {
		return false;
	}
	RegisterButton->OnClicked.AddDynamic(this, &UBoardingMenuWidget::RegisterClickImplementation);

	if (!ensure(OpenLoginScreenButton != nullptr)) {
		return false;
	}
	OpenLoginScreenButton->OnClicked.AddDynamic(this, &UBoardingMenuWidget::OpenLoginScreen);

	if (!ensure(OpenRegisterScreenButton != nullptr)) {
		return false;
	}
	OpenRegisterScreenButton->OnClicked.AddDynamic(this, &UBoardingMenuWidget::OpenRegisterScreen);

	if (!ensure(LoginScreenBackButton != nullptr)) {
		return false;
	}
	LoginScreenBackButton->OnClicked.AddDynamic(this, &UBoardingMenuWidget::LoginScreenOnBackPressed);

	if (!ensure(RegsiterScreenBackButton != nullptr)) {
		return false;
	}
	RegsiterScreenBackButton->OnClicked.AddDynamic(this, &UBoardingMenuWidget::RegisterScreenOnBackPressed);

	if (!ensure(LeftButtonText != nullptr)) {
		return false;
	}

	if (!ensure(RightButtonText != nullptr)) {
		return false;
	}

	
	if (UPlayerSaveGamePreferences::IsPlayerLoggedIn()) {
		LeftButtonText->SetText(FText::FromString(TEXT("PICK OPTIMAL SETTINGS")));
		RightButtonText->SetText(FText::FromString(TEXT("QUIT GAME")));
	}
	else {
		LeftButtonText->SetText(FText::FromString(TEXT("LOGIN")));
		RightButtonText->SetText(FText::FromString(TEXT("REGISTER")));
	}
	
	if (!ensure(ProgressMessageText != nullptr)) {
		return false;
	}
	ProgressMessageText->SetText(FText::FromString(TEXT("Connecting to game service.")));

	UTLPGameInstance * TLPGameInstance = Cast<UTLPGameInstance>(GetWorld()->GetGameInstance());
	if (TLPGameInstance != NULL) {
		TLPGameInstance->SetGameSparksServiceInterface(this);
		TLPGameInstance->ConnectToGameSparksService();
	}
	return true;
}

void UBoardingMenuWidget::LoginClickImplementation()
{
	if (UPlayerSaveGamePreferences::IsPlayerLoggedIn()) {
		return;
	}

	if (!ensure(LoginEmailField != nullptr)) {
		return;
	}

	if (!ensure(LoginPasswordField != nullptr)) {
		return;
	}

	FString email = LoginEmailField->GetText().ToString();
	FString password = LoginPasswordField->GetText().ToString();

	if (!TLPUtilities::IsValidEmailAddress(email)) {
		//Invalid email address...
		UserInputErrors(PRE_AUTHENTICATION_ERRORS::INVALID_EMAIL);
		return;
	}

	if (password.Len() < 6) {
		//Weak Password...
		UserInputErrors(PRE_AUTHENTICATION_ERRORS::WEAK_PASSWORD);
		return;
	}

	UserLogin(password, email);
}

void UBoardingMenuWidget::RegisterClickImplementation()
{
	if (UPlayerSaveGamePreferences::IsPlayerLoggedIn()) {
		return;
	}


	if (!ensure(RegisterEmailField != nullptr)) {
		return;
	}

	if (!ensure(RegisterNameField != nullptr)) {
		return;
	}

	if (!ensure(RegisterPasswordField != nullptr)) {
		return;
	}

	if (!ensure(RegisterConfirmPasswordField != nullptr)) {
		return;
	}

	FString Password = RegisterPasswordField->GetText().ToString();
	FString Email = RegisterEmailField->GetText().ToString();
	FString ConfirmPassword = RegisterConfirmPasswordField->GetText().ToString();
	FString Name = RegisterNameField->GetText().ToString();



	if (Name.Len() < 6) {
		//Invalid name
		UserInputErrors(PRE_AUTHENTICATION_ERRORS::INVALID_NAME);
		return;
	}

	if (!TLPUtilities::IsValidEmailAddress(Email)) {
		//Invalid email address...
		UserInputErrors(PRE_AUTHENTICATION_ERRORS::INVALID_EMAIL);
		return;
	}

	if (Password.Len() < 6) {
		//Weak Password...
		UserInputErrors(PRE_AUTHENTICATION_ERRORS::WEAK_PASSWORD);
		return;
	}

	if (!Password.Equals(ConfirmPassword)) {
		//Passwords didn't match...
		UserInputErrors(PRE_AUTHENTICATION_ERRORS::PASSWORDS_DONT_MATCH);
		return;
	}

	UserRegistration(Password, Email, Name);

}

void UBoardingMenuWidget::OpenLoginScreen()
{
	SetSwitcherActiveWidget(ScreenSwitcher, LoginScreen);
}

void UBoardingMenuWidget::OpenRegisterScreen()
{
	SetSwitcherActiveWidget(ScreenSwitcher, RegisterScreen);
}

void UBoardingMenuWidget::RegisterScreenOnBackPressed()
{
	RegisterEmailField->SetText(FText::FromString(TEXT("")));
	RegisterPasswordField->SetText(FText::FromString(TEXT("")));
	RegisterConfirmPasswordField->SetText(FText::FromString(TEXT("")));
	RegisterNameField->SetText(FText::FromString(TEXT("")));
	LoginScreenOnBackPressed();
}

void UBoardingMenuWidget::OpenMainInventory()
{
}



void UBoardingMenuWidget::LoginScreenOnBackPressed()
{
	
	LoginEmailField->SetText(FText::FromString(TEXT("")));
	LoginPasswordField->SetText(FText::FromString(TEXT("")));
	SetSwitcherActiveWidget(ScreenSwitcher, MainScreen);

}

