// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TLPGameMode.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(Gamelift_SERVER, Log, All);


/**
 * 
 */
UCLASS()
class THELASTPIECE_API ATLPGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ATLPGameMode();

private:

	//Function to initialize the gamelift server.
	void InitGameliftServer();

	
	
	
	
};
