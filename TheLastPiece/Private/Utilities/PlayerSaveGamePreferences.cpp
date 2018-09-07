// Fill out your copyright notice in the Description page of Project Settings.

#include "../../Public/Utilities/PlayerSaveGamePreferences.h"
#include "../../Public/Utilities/TLPUtilities.h"
#include "Kismet/GameplayStatics.h"


UPlayerSaveGamePreferences::UPlayerSaveGamePreferences() {
	
}

bool UPlayerSaveGamePreferences::SavePlayerPreferences(const bool IsLoggedIn, const FString & PlayerName, const FString AccessToken, const FString & EmailAddress){
	UPlayerSaveGamePreferences * PlayerSaveGamePreferences = Cast<UPlayerSaveGamePreferences>(UGameplayStatics::CreateSaveGameObject(UPlayerSaveGamePreferences::StaticClass()));
	if (PlayerSaveGamePreferences != NULL) {
		FString SaveSlotName = FString(TEXT("PLAYER_SAVE_SLOT"));
		uint8 PlayerIndex = 1;
		PlayerSaveGamePreferences->IsLoggedIn = IsLoggedIn;
		PlayerSaveGamePreferences->PlayerName = PlayerName;
		PlayerSaveGamePreferences->AccessToken = AccessToken;
		PlayerSaveGamePreferences->EmailAddress = EmailAddress;
		bool result = UGameplayStatics::SaveGameToSlot(PlayerSaveGamePreferences, SaveSlotName, PlayerIndex);
		return result;
	}

	return false;
}

bool UPlayerSaveGamePreferences::IsPlayerLoggedIn()
{
	FString SaveSlotName = FString(TEXT("PLAYER_SAVE_SLOT"));
	uint8 PlayerIndex = 1;

	UPlayerSaveGamePreferences * PlayerSaveGamePreferences = Cast<UPlayerSaveGamePreferences>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, PlayerIndex));
	if (PlayerSaveGamePreferences != NULL) {
		return PlayerSaveGamePreferences->IsLoggedIn;
	}
	return false;
}

UPlayerSaveGamePreferences * UPlayerSaveGamePreferences::GetSavedPlayer()
{
	FString SaveSlotName = FString(TEXT("PLAYER_SAVE_SLOT"));
	uint8 PlayerIndex = 1;

	UPlayerSaveGamePreferences * PlayerSaveGamePreferences = Cast<UPlayerSaveGamePreferences>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, PlayerIndex));
	return PlayerSaveGamePreferences;
}

FString UPlayerSaveGamePreferences::GetPlayerName()
{
	return PlayerName;
}
