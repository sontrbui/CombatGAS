// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatPlayerController.h"
#include "EnhancedInputComponent.h"


void ACombatPlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetupInputComponent();
}

void ACombatPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	// Get the Enhanced Input Component
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Bind the toggle widget action
		if (ToggleWidget)
		{
			EnhancedInputComponent->BindAction(ToggleWidget, ETriggerEvent::Triggered, this, &ACombatPlayerController::OnToggleWidgetAction);
		}
	}
}


void ACombatPlayerController::OnToggleWidgetAction()
{
	UE_LOG(LogTemp, Log, TEXT("Toggle Widget Action Triggered"));
	// Create widget instance if class is set
	if (!QuitGameWidgetInstance)
	{
		if (QuitGameWidget)
		{
			if (UCombatUserWidgetBase* NewWidget = CreateWidget<UCombatUserWidgetBase>(this, QuitGameWidget))
			{
				UE_LOG(LogTemp, Log, TEXT("Widget Create"));
				QuitGameWidgetInstance = NewWidget;
				
				QuitGameWidgetInstance->AddToViewport();
				QuitGameWidgetInstance->SetDesiredSizeInViewport(NewWidget->GetDesiredSize());
				
				SetShowMouseCursor(true);
				
			}
		}
	}
	else
	{
		QuitGameWidgetInstance->SetVisibility(ESlateVisibility::Visible);
		SetShowMouseCursor(true);
	}
}
