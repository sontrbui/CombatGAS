// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "CombatGAS/GameplayAbilities/UI/CombatUserWidgetBase.h"
#include "GameFramework/PlayerController.h"
#include "CombatPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class COMBATGAS_API ACombatPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	TObjectPtr<UCombatUserWidgetBase> QuitGameWidgetInstance;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Quit Game UI Class")
	TSubclassOf<UCombatUserWidgetBase> QuitGameWidget;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Quit Game UI Toggle Action")
	TObjectPtr<UInputAction> ToggleWidget;
	
	virtual void BeginPlay() override;
	
	virtual void SetupInputComponent() override;
	
private:
	UFUNCTION()
	void OnToggleWidgetAction();
};
