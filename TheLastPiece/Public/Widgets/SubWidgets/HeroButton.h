// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../Models/CharacterDataModel.h"
#include "Components/Button.h"
#include "HeroButton.generated.h"

/**
 * 
 */
UCLASS()
class THELASTPIECE_API UHeroButton : public UButton
{
	GENERATED_BODY()
	
public:
	void ConstructButton(CharacterDataModel DataModel);
	
	
	
};
