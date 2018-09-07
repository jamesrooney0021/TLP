// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameSparks/Private/GameSparksObject.h"
#include "GameSparks/Private/GSMessageListenersObject.h"
#include "GameSparksModule.h"
#include <GameSparks/GS.h>
#include <GameSparks/generated/GSResponses.h>
#include <GameSparks/generated/GSRequests.h>
#include "Widgets/Interfaces/GameSparksServiceInterface.h"
#include "TLPGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class THELASTPIECE_API UTLPGameInstance : public UGameInstance
{
	GENERATED_BODY()
	

public:
	UTLPGameInstance();

	virtual void Init() override;

	UFUNCTION()
	void ConnectToGameSparksService();

	void SetGameSparksServiceInterface(IGameSparksServiceInterface * GameSparksServiceInterface);

private:

	IGameSparksServiceInterface * GameSparksServiceInterface;

	UPROPERTY()
	UGameSparksObject * GSObj;

	UPROPERTY()
	UGSMessageListenersObject * GSMessageListener;

	UFUNCTION()
	void OnGameSparksAvailable(bool available);

	


};
