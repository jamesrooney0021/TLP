// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class THELASTPIECE_API CharacterDataModel
{
public:
	CharacterDataModel(uint8 CharacterLevel , uint8 CharacterCode);
	~CharacterDataModel();

	FORCEINLINE FText GetCharacterName() { return CharacterName; };
	FORCEINLINE FText GetCharacterImagePath() { return CharacterImagePath; };
	FORCEINLINE uint8 GetCharacterLevel() { return CharacterLevel; };
	FORCEINLINE uint8 GetCharacterCode() { return CharacterCode; };

private:
	uint8 CharacterLevel = 0;
	uint8 CharacterCode;
	FText CharacterName;
	FText CharacterImagePath;
};
