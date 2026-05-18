// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilities/Characters/CombatCharacterBase.h"

#ifdef COMBATGAS_CombatCharacterBase_generated_h
#error "CombatCharacterBase.generated.h already included, missing '#pragma once' in CombatCharacterBase.h"
#endif
#define COMBATGAS_CombatCharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACombatCharacterBase *****************************************************
struct Z_Construct_UClass_ACombatCharacterBase_Statics;
COMBATGAS_API UClass* Z_Construct_UClass_ACombatCharacterBase_NoRegister();

#define FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatCharacterBase(); \
	friend struct ::Z_Construct_UClass_ACombatCharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMBATGAS_API UClass* ::Z_Construct_UClass_ACombatCharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombatCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatGAS"), Z_Construct_UClass_ACombatCharacterBase_NoRegister) \
	DECLARE_SERIALIZER(ACombatCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACombatCharacterBase*>(this); }


#define FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatCharacterBase(ACombatCharacterBase&&) = delete; \
	ACombatCharacterBase(const ACombatCharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatCharacterBase) \
	NO_API virtual ~ACombatCharacterBase();


#define FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h_11_PROLOG
#define FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatCharacterBase;

// ********** End Class ACombatCharacterBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
