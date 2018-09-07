// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGameInventoryWidget.h"
#include "Kismet/GameplayStatics.h"


UBaseGameInventoryWidget::UBaseGameInventoryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

	static ConstructorHelpers::FObjectFinder<USoundBase> Soundf(TEXT("'/Game/Widgets/Sound/MenuMusic/InventoryMenu_Cue.InventoryMenu_Cue'"));
	BoardingMusic = Soundf.Object;
}

bool UBaseGameInventoryWidget::Initialize()
{
	bool success = Super::Initialize();
	
	if (ensure(BoardingMusic != nullptr)) {
		//UGameplayStatics::PlaySound2D(GetWorld(), BoardingMusic);
	}

	if (!success) {
		return false;
	}

	if (!ensure(PlayButton != nullptr)) {
		return false;
	}
	PlayButton->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::PlayButtonClick);


	if (!ensure(HomeButton != nullptr)) {
		return false;
	}
	HomeButton->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::HomeButtonClick);

	if (!ensure(StoreButton != nullptr)) {
		return false;
	}
	StoreButton->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::StoreButtonClick);


	if (!ensure(CollectionButton != nullptr)) {
		return false;
	}
	CollectionButton->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::CollectionButtonClick);

	if (!ensure(WatchButton != nullptr)) {
		return false;
	}
	WatchButton->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::WatchButtonClick);


	if (!ensure(Crates != nullptr)) {
		return false;
	}
	Crates->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::CratesClick);

	if (!ensure(Skins != nullptr)) {
		return false;
	}
	Skins->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::SkinsClick);

	if (!ensure(Boosts != nullptr)) {
		return false;
	}
	Boosts->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::BoostClick);

	if (!ensure(StoreBanners != nullptr)) {
		return false;
	}
	StoreBanners->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::StoreBannersClick);

	if (!ensure(Emotes != nullptr)) {
		return false;
	}
	Emotes->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::EmotesClick);

	if (!ensure(Heroes != nullptr)) {
		return false;
	}
	Heroes->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::HeroesClick);

	if (!ensure(Cards != nullptr)) {
		return false;
	}
	Cards->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::CardsClick);

	if (!ensure(Decks != nullptr)) {
		return false;
	}
	Decks->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::DecksClick);

	if (!ensure(Gems != nullptr)) {
		return false;
	}
	Gems->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::GemsClick);

	if (!ensure(Chests != nullptr)) {
		return false;
	}
	Chests->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::ChestsClick);

	if (!ensure(LootCrates != nullptr)) {
		return false;
	}
	LootCrates->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::LootCratesClick);

	if (!ensure(CollectionBanners != nullptr)) {
		return false;
	}
	CollectionBanners->OnClicked.AddDynamic(this, &UBaseGameInventoryWidget::CollectionBannersClick);
	return true;
}
