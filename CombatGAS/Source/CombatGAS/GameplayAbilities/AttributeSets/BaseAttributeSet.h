// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "BaseAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class COMBATGAS_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UBaseAttributeSet();
	
	// Heatlh attribute
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, Health)
	
	// MaxHealth attribute
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxHealth)
	
	// Stamina attribute
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Stamina)
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, Stamina)
	
	// MaxStamina attribute
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxStamina)	
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxStamina)
	
public:
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Health, OldValue);
	};
	
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxHealth, OldValue);
	};
	
	UFUNCTION()	
	void OnRep_Stamina(const FGameplayAttributeData& OldValue) const	
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Stamina, OldValue);
	};	
	
	UFUNCTION()	
	void OnRep_MaxStamina(const FGameplayAttributeData& OldValue) const	
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxStamina, OldValue);
	};
	
	// Must override when using replication.
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	// PreAttributeChange is a virtual function that gets called BEFORE an attribute value is actually changed in the GAS system. 
	// It allows you to intercept and modify the new value before it's applied, or perform validation checks.
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
};
