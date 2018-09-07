// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PlayerSaveGamePreferences.generated.h"

/**
 * 
 */
UCLASS()
class THELASTPIECE_API UPlayerSaveGamePreferences : public USaveGame
{
	GENERATED_BODY()
	
public:
	UPlayerSaveGamePreferences();

	UFUNCTION()
	static bool SavePlayerPreferences(const bool IsLoggedIn, const FString &PlayerName, const FString AccessToken, const FString &EmailAddress);

	UFUNCTION()
	static bool IsPlayerLoggedIn();

	UFUNCTION()
	static UPlayerSaveGamePreferences * GetSavedPlayer();

	UFUNCTION()
	FString GetPlayerName();

private:

	UPROPERTY()
	bool IsLoggedIn;

	UPROPERTY()
	FString PlayerName;

	UPROPERTY()
	FString AccessToken;

	UPROPERTY()
	FString EmailAddress;
};
