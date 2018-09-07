// Fill out your copyright notice in the Description page of Project Settings.

#include "../../Public/Utilities/TLPUtilities.h"
#include "Engine.h"
#include "Regex.h"


bool TLPUtilities::IsValidEmailAddress(const FString & EmailAddress)
{
	const FRegexPattern myPattern(TEXT("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+"));
	FRegexMatcher myMatcher(myPattern, EmailAddress);
	if (myMatcher.FindNext()) {
		return true;
	}

	return false;
}

void TLPUtilities::ShowDebugMessage(uint8 id, FString Text, float time)
{
	GEngine->AddOnScreenDebugMessage(id, time, FColor::Red, Text);
}
