// Fill out your copyright notice in the Description page of Project Settings.

#include "GameInventoryWidget.h"

UGameInventoryWidget::UGameInventoryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {


}

bool UGameInventoryWidget::Initialize()
{
	bool success = Super::Initialize();
	return success;
}

void UGameInventoryWidget::PlayButtonClick()
{
	SetSwitcherActiveWidget(ScreenSwitcher, PlayWidget);
	if (bIsCollectionWidgetActive) {
		bIsCollectionWidgetActive = false;
		SetSwitcherActiveWidget(CollectionWidgetSwitcher, HeroWidget);
	}
	if (bIsStoreWidgetActive) {
		SetSwitcherActiveWidget(StoreWidgetSwitcher, CratesWidget);
		bIsStoreWidgetActive = false;
	}
}

void UGameInventoryWidget::HomeButtonClick()
{
	SetSwitcherActiveWidget(ScreenSwitcher, HomeWidget);
	if (bIsCollectionWidgetActive) {
		bIsCollectionWidgetActive = false;
		SetSwitcherActiveWidget(CollectionWidgetSwitcher, HeroWidget);
	}
	if (bIsStoreWidgetActive) {
		SetSwitcherActiveWidget(StoreWidgetSwitcher, CratesWidget);
		bIsStoreWidgetActive = false;
	}
}

void UGameInventoryWidget::StoreButtonClick()
{
	bIsStoreWidgetActive = true;
	SetSwitcherActiveWidget(ScreenSwitcher, StoreWidget);
	if (bIsCollectionWidgetActive) {
		bIsCollectionWidgetActive = false;
		SetSwitcherActiveWidget(CollectionWidgetSwitcher, HeroWidget);
	}
}

void UGameInventoryWidget::CollectionButtonClick()
{
	bIsCollectionWidgetActive = true;
	SetSwitcherActiveWidget(ScreenSwitcher, CollectionWidget);

	if (bIsStoreWidgetActive) {
		SetSwitcherActiveWidget(StoreWidgetSwitcher, CratesWidget);
		bIsStoreWidgetActive = false;
	}
}


void UGameInventoryWidget::WatchButtonClick()
{
	SetSwitcherActiveWidget(ScreenSwitcher, WatchWidget);
	if (bIsCollectionWidgetActive) {
		bIsCollectionWidgetActive = false;
		SetSwitcherActiveWidget(CollectionWidgetSwitcher, HeroWidget);
	}
	if (bIsStoreWidgetActive) {
		SetSwitcherActiveWidget(StoreWidgetSwitcher, CratesWidget);
		bIsStoreWidgetActive = false;
	}
}

void UGameInventoryWidget::CratesClick()
{
	SetSwitcherActiveWidget(StoreWidgetSwitcher, CratesWidget);
}

void UGameInventoryWidget::SkinsClick()
{
	SetSwitcherActiveWidget(StoreWidgetSwitcher, SkinsWidget);
}

void UGameInventoryWidget::BoostClick()
{
	SetSwitcherActiveWidget(StoreWidgetSwitcher, BoostsWidget);
}

void UGameInventoryWidget::StoreBannersClick()
{
	SetSwitcherActiveWidget(StoreWidgetSwitcher, StoreBannerWidget);
}

void UGameInventoryWidget::EmotesClick()
{
	SetSwitcherActiveWidget(StoreWidgetSwitcher, EmotesWidget);
}

void UGameInventoryWidget::HeroesClick()
{
	SetSwitcherActiveWidget(CollectionWidgetSwitcher, HeroWidget);
}

void UGameInventoryWidget::CardsClick()
{
	SetSwitcherActiveWidget(CollectionWidgetSwitcher, CardsWidget);
}

void UGameInventoryWidget::GemsClick()
{
	SetSwitcherActiveWidget(CollectionWidgetSwitcher, GemsWidget);
}

void UGameInventoryWidget::DecksClick()
{
	SetSwitcherActiveWidget(CollectionWidgetSwitcher, DecksWidget);
}

void UGameInventoryWidget::ChestsClick()
{
	SetSwitcherActiveWidget(CollectionWidgetSwitcher, ChestsWidget);
}

void UGameInventoryWidget::LootCratesClick()
{
	SetSwitcherActiveWidget(CollectionWidgetSwitcher, LootCratesWidget);
}

void UGameInventoryWidget::CollectionBannersClick()
{
	SetSwitcherActiveWidget(CollectionWidgetSwitcher, CollectionBannerWidget);
}

