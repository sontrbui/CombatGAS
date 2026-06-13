// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "CombatUserWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class COMBATGAS_API UCombatUserWidgetBase : public UUserWidget
{
	GENERATED_BODY()
	
	UFUNCTION()
	void CloseButtonClicked();
	
	UFUNCTION()
	void YesButtonClicked();
	
	UFUNCTION()
	void NoButtonClicked();


public:
	
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> CloseButton;
	
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> YesButton;
	
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> NoButton;
};
