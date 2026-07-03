// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatUserWidgetBase.h"
#include "Kismet/KismetSystemLibrary.h"

void UCombatUserWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();
	
	if (CloseButton)
	{
		CloseButton->OnClicked.AddDynamic(this, &UCombatUserWidgetBase::CloseButtonClicked);
	}
	
	if (YesButton)
	{
		YesButton->OnClicked.AddDynamic(this, &UCombatUserWidgetBase::YesButtonClicked);
	}

	if (NoButton)
	{
		NoButton->OnClicked.AddDynamic(this, &UCombatUserWidgetBase::NoButtonClicked);
	}
	
	SetIsFocusable(true);
	SetKeyboardFocus();
	
	if (APlayerController* PC = GetOwningPlayer())
	{
		PC->bShowMouseCursor = true;
		PC->SetInputMode(FInputModeUIOnly());
	}
}

void UCombatUserWidgetBase::CloseWidget()
{
	SetVisibility(ESlateVisibility::Collapsed);
	if (APlayerController* PC = GetOwningPlayer())
	{
		PC->bShowMouseCursor = false;
		PC->SetInputMode(FInputModeGameOnly());
	}

	OnWidgetClosed.Broadcast();
}

void UCombatUserWidgetBase::CloseButtonClicked()
{
	CloseWidget();
}

void UCombatUserWidgetBase::YesButtonClicked() 
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
}

void UCombatUserWidgetBase::NoButtonClicked()
{
	CloseWidget();
}

FReply UCombatUserWidgetBase::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
	CloseWidget();
	return Super::NativeOnKeyDown(InGeometry, InKeyEvent);
}

FReply UCombatUserWidgetBase::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	CloseWidget();
	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}




