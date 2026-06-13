// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatUserWidgetBase.h"
#include "Kismet/KismetSystemLibrary.h"


void UCombatUserWidgetBase::CloseButtonClicked()
{
	SetVisibility(ESlateVisibility::Collapsed);
	if (APlayerController* PC = GetOwningPlayer())
	{
		PC->bShowMouseCursor = false;
	}
}

void UCombatUserWidgetBase::YesButtonClicked() 
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
}

void UCombatUserWidgetBase::NoButtonClicked()
{
	SetVisibility(ESlateVisibility::Collapsed);
	if (APlayerController* PC = GetOwningPlayer())
	{
		PC->bShowMouseCursor = false;
	}
}

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
}


