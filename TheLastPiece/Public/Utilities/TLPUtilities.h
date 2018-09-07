// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class THELASTPIECE_API TLPUtilities
{
public:
	
	/** Email address validator...*/
	static bool IsValidEmailAddress(const FString &EmailAddress);

	static void ShowDebugMessage(uint8 id, FString Text, float time = 1.0f);
};
