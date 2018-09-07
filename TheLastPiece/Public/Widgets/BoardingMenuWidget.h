// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/CircularThrobber.h"
#include "Components/TextBlock.h"
#include "Components/WidgetSwitcher.h"
#include "Components/Image.h"
#include "Components/EditableText.h"
#include "Widgets/BaseUserWidget.h"
#include "Interfaces/GameSparksServiceInterface.h"
#include "BoardingMenuWidget.generated.h"

UENUM(BlueprintType)
enum class PRE_AUTHENTICATION_ERRORS : uint8 {
	INVALID_EMAIL,
	WEAK_PASSWORD,
	PASSWORDS_DONT_MATCH,
	INVALID_NAME,
	NO_INTERNET,
	FAILED_TO_CONNECT_TO_GAME_SERVICE
};

/**
 * 
 */
UCLASS()
class THELASTPIECE_API UBoardingMenuWidget : public UBaseUserWidget, public IGameSparksServiceInterface
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintImplementableEvent, Category = "The Last Piece|Widget|Authentication")
	void UserLogin(const FString &Password, const FString &Username);
	

	UFUNCTION(BlueprintImplementableEvent, Category = "The Last Piece|Widget|Authentication")
	void UserRegistration(const FString &Password, const FString &Username, const FString &Displayname);

	UFUNCTION(BlueprintImplementableEvent, Category = "The Last Piece|Widget|Authentication")
	void UserInputErrors(const PRE_AUTHENTICATION_ERRORS &ERROR);

	UFUNCTION(BlueprintCallable, Category = "The Last Piece|Save Game")
	void SavePlayerAuthenticationData(const bool IsLoggedIn, const FString &PlayerName, const FString AccessToken, const FString &EmailAddress);

	UFUNCTION(Exec)
	void ConnectedToGameSparks(bool ConnectionStatus);
	
protected:
	virtual bool Initialize();
	UBoardingMenuWidget(const FObjectInitializer& ObjectInitializer);

private:

	USoundBase * BoardingMusic;

	UPROPERTY(meta = (BindWidget))
	class UButton * LoginButton;

	UPROPERTY(meta = (BindWidget))
	class UButton * RegisterButton;

	UPROPERTY(meta = (BindWidget))
	UButton * OpenLoginScreenButton;

	UPROPERTY(meta = (BindWidget))
	UButton * OpenRegisterScreenButton;

	UPROPERTY(meta = (BindWidget))
	UButton * LoginScreenBackButton;

	UPROPERTY(meta = (BindWidget))
	UButton * RegsiterScreenBackButton;

	UPROPERTY(meta = (BindWidget))
	UWidgetSwitcher * ScreenSwitcher;

	UPROPERTY(meta = (BindWidget))
	UWidget * MainScreen;

	UPROPERTY(meta = (BindWidget))
	UWidget * LoginScreen;

	UPROPERTY(meta = (BindWidget))
	UWidget * RegisterScreen;

	UPROPERTY(meta = (BindWidget))
	UImage * BackgroundImage;

	UPROPERTY(meta = (BindWidget))
	UImage * LogoImage;

	UPROPERTY(meta = (BindWidget))
	UImage * LogoLoginImage;

	UPROPERTY(meta = (BindWidget))
	UImage * LogoRegisterImage;

	UPROPERTY(meta = (BindWidget))
	UEditableText * LoginEmailField;
	
	UPROPERTY(meta = (BindWidget))
	UEditableText * LoginPasswordField;
	
	UPROPERTY(meta = (BindWidget))
	UEditableText * RegisterEmailField;
	
	UPROPERTY(meta = (BindWidget))
	UEditableText * RegisterNameField;
	
	
	UPROPERTY(meta = (BindWidget))
	UEditableText * RegisterPasswordField;
	
	UPROPERTY(meta = (BindWidget))
	UEditableText * RegisterConfirmPasswordField;

	UPROPERTY(meta = (BindWidget))
	UTextBlock * ProgressMessageText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock * LeftButtonText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock * RightButtonText;

	UPROPERTY(meta = (BindWidget))
	UCircularThrobber * CircularThrobber;

	UFUNCTION()
	void LoginClickImplementation();
	
	UFUNCTION()
	void RegisterClickImplementation();

	UFUNCTION()
	void OpenLoginScreen();

	UFUNCTION()
	void OpenRegisterScreen();

	UFUNCTION()
	void LoginScreenOnBackPressed();

	UFUNCTION()
	void RegisterScreenOnBackPressed();

	bool ConnectedToGameSparksService;

	//This is to launch the main inventory screen after user is logged in or game is connected to service...
	UFUNCTION()
	void OpenMainInventory();
};
