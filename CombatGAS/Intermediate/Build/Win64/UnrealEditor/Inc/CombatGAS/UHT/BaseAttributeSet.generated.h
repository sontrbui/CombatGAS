// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilities/AttributeSets/BaseAttributeSet.h"

#ifdef COMBATGAS_BaseAttributeSet_generated_h
#error "BaseAttributeSet.generated.h already included, missing '#pragma once' in BaseAttributeSet.h"
#endif
#define COMBATGAS_BaseAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin Class UBaseAttributeSet ********************************************************
#define FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


struct Z_Construct_UClass_UBaseAttributeSet_Statics;
COMBATGAS_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();

#define FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAttributeSet(); \
	friend struct ::Z_Construct_UClass_UBaseAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMBATGAS_API UClass* ::Z_Construct_UClass_UBaseAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatGAS"), Z_Construct_UClass_UBaseAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UBaseAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Stamina, \
		MaxStamina, \
		NETFIELD_REP_END=MaxStamina	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UBaseAttributeSet) \
public:


#define FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseAttributeSet(UBaseAttributeSet&&) = delete; \
	UBaseAttributeSet(const UBaseAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseAttributeSet) \
	NO_API virtual ~UBaseAttributeSet();


#define FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h_13_PROLOG
#define FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseAttributeSet;

// ********** End Class UBaseAttributeSet **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
