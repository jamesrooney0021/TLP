// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Widgets/BaseUserWidget.h"
#include "BaseGameInventoryWidget.generated.h"

/**
 * 
 */
UCLASS()
class THELASTPIECE_API UBaseGameInventoryWidget : public UBaseUserWidget
{
	GENERATED_BODY()
	
public:
	UBaseGameInventoryWidget(const FObjectInitializer& ObjectInitializer);

	virtual bool Initialize();

	//Tab Buttons...
	UPROPERTY(meta = (BindWidget))
	UButton * PlayButton;

	UPROPERTY(meta = (BindWidget))
		UButton * HomeButton;

	UPROPERTY(meta = (BindWidget))
		UButton * StoreButton;

	UPROPERTY(meta = (BindWidget))
		UButton * CollectionButton;

	UPROPERTY(meta = (BindWidget))
		UButton * WatchButton;
	//End of tab buttons...


	//Buttons inside store tab...
	UPROPERTY(meta = (BindWidget))
		UButton * Crates;

	UPROPERTY(meta = (BindWidget))
		UButton * Skins;

	UPROPERTY(meta = (BindWidget))
		UButton * Boosts;

	UPROPERTY(meta = (BindWidget))
		UButton * StoreBanners;

	UPROPERTY(meta = (BindWidget))
		UButton * Emotes;
	//End of store buttons...


	//Buttons inside collection tab...
	UPROPERTY(meta = (BindWidget))
		UButton * Heroes;

	UPROPERTY(meta = (BindWidget))
		UButton * Cards;

	UPROPERTY(meta = (BindWidget))
		UButton * Decks;

	UPROPERTY(meta = (BindWidget))
		UButton * Gems;

	UPROPERTY(meta = (BindWidget))
		UButton * Chests;

	UPROPERTY(meta = (BindWidget))
		UButton * LootCrates;

	UPROPERTY(meta = (BindWidget))
		UButton * CollectionBanners;
	//End of buttons inside collection tab...


	//Switcher and its switch widgets...
	UPROPERTY(meta = (BindWidget))
		UWidgetSwitcher * ScreenSwitcher;

	UPROPERTY(meta = (BindWidget))
		UWidget * PlayWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * HomeWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * StoreWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * CollectionWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * WatchWidget;



	UPROPERTY(meta = (BindWidget))
		UWidgetSwitcher * StoreWidgetSwitcher;

	UPROPERTY(meta = (BindWidget))
		UWidget * CratesWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * SkinsWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * BoostsWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * StoreBannerWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * EmotesWidget;



	UPROPERTY(meta = (BindWidget))
		UWidgetSwitcher * CollectionWidgetSwitcher;

	UPROPERTY(meta = (BindWidget))
		UWidget * HeroWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * CardsWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * GemsWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * DecksWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * ChestsWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * LootCratesWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget * CollectionBannerWidget;
	//End of switch and its widgets...


	
	
	//Click functions for the button clicks...
	UFUNCTION()
		virtual void PlayButtonClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void HomeButtonClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void StoreButtonClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void CollectionButtonClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void WatchButtonClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void CratesClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void SkinsClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void BoostClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void StoreBannersClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void EmotesClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void HeroesClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void CardsClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void GemsClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void DecksClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void ChestsClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void LootCratesClick() { check(0 && "You must override this"); }

	UFUNCTION()
		virtual void CollectionBannersClick() { check(0 && "You must override this"); }

private:
	USoundBase * BoardingMusic;

protected:
	bool bIsCollectionWidgetActive;

	bool bIsStoreWidgetActive;


};
