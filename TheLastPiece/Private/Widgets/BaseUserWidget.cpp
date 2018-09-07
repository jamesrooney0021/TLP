// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseUserWidget.h"
#include "Components/WidgetSwitcher.h"

UBaseUserWidget::UBaseUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

}

void UBaseUserWidget::SetSwitcherActiveWidget(UWidgetSwitcher * WidgetSwitcher, UWidget * Widget)
{
	if (!ensure(WidgetSwitcher != nullptr)) {
		return;
	}

	if (!ensure(Widget != nullptr)) {
		return;
	}

	WidgetSwitcher->SetActiveWidget(Widget);
}
