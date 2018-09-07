// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/BaseGameInventoryWidget.h"
#include "GameInventoryWidget.generated.h"

/**
 * 
 */
UCLASS()
class THELASTPIECE_API UGameInventoryWidget : public UBaseGameInventoryWidget
{
	GENERATED_BODY()
	

public:
	UGameInventoryWidget(const FObjectInitializer& ObjectInitializer);
	virtual bool Initialize();


	virtual void PlayButtonClick() override;
	virtual void HomeButtonClick() override;
	virtual void StoreButtonClick() override;
	virtual void CollectionButtonClick() override;
	virtual void CollectionBannersClick() override;
	virtual void WatchButtonClick() override;
	virtual void CratesClick() override;
	virtual void SkinsClick() override;
	virtual void BoostClick() override;
	virtual void StoreBannersClick() override;
	virtual void EmotesClick() override;
	virtual void HeroesClick() override;
	virtual void CardsClick() override;
	virtual void GemsClick() override;
	virtual void DecksClick() override;
	virtual void ChestsClick() override;
	virtual void LootCratesClick() override;	
};
