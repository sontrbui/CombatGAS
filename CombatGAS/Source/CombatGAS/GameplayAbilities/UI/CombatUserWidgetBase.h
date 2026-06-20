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

public:
	
	virtual void NativeConstruct() override;
	
	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
	
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> CloseButton;
	
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> YesButton;
	
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> NoButton;
	
private:
	UFUNCTION()
	void CloseButtonClicked();
	
	UFUNCTION()
	void YesButtonClicked();
	
	UFUNCTION()
	void NoButtonClicked();
	
	UFUNCTION()
	void CloseWidget();
};
