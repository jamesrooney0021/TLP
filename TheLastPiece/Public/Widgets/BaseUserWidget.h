// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class THELASTPIECE_API UBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UBaseUserWidget(const FObjectInitializer& ObjectInitializer);

protected:

	//Sets the Widget as active widget in the supplied WidgetSwitcher...
	//Also checks for nullptr exception...
	UFUNCTION()
		void SetSwitcherActiveWidget(class UWidgetSwitcher * WidgetSwitcher, class UWidget * Widget);
	
};
