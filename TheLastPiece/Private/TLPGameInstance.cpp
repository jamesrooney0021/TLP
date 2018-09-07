// Fill out your copyright notice in the Description page of Project Settings.

#include "TLPGameInstance.h"

UTLPGameInstance::UTLPGameInstance() {

}

void UTLPGameInstance::Init() {
	Super::Init();
}

void UTLPGameInstance::ConnectToGameSparksService()
{
	GSObj = NewObject<UGameSparksObject>(this, UGameSparksObject::StaticClass());
	GSMessageListener = NewObject<UGSMessageListenersObject>(this, UGSMessageListenersObject::StaticClass());
	GSObj->Disconnect();
	GSObj->OnGameSparksAvailableDelegate.AddDynamic(this, &UTLPGameInstance::OnGameSparksAvailable);
	GSObj->Connect("i368967UJUy0", "yWAJbjtqB8xu1q5aFzpwFRmKvauJzSPU", true, false);
}

void UTLPGameInstance::SetGameSparksServiceInterface(IGameSparksServiceInterface * GameSparksServiceInterface)
{
	this->GameSparksServiceInterface = GameSparksServiceInterface;
}

void UTLPGameInstance::OnGameSparksAvailable(bool available) {

	if (GameSparksServiceInterface == NULL) {
		return;
	}
	GameSparksServiceInterface->ConnectedToGameSparks(available);
}




