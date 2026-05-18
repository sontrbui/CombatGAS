// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatGAS/GameplayAbilities/Characters/CombatCharacterBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatCharacterBase() {}

// ********** Begin Cross Module References ********************************************************
COMBATGAS_API UClass* Z_Construct_UClass_ACombatCharacterBase();
COMBATGAS_API UClass* Z_Construct_UClass_ACombatCharacterBase_NoRegister();
COMBATGAS_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode();
UPackage* Z_Construct_UPackage__Script_CombatGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACombatCharacterBase *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACombatCharacterBase;
UClass* ACombatCharacterBase::GetPrivateStaticClass()
{
	using TClass = ACombatCharacterBase;
	if (!Z_Registration_Info_UClass_ACombatCharacterBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatCharacterBase"),
			Z_Registration_Info_UClass_ACombatCharacterBase.InnerSingleton,
			StaticRegisterNativesACombatCharacterBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACombatCharacterBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ACombatCharacterBase_NoRegister()
{
	return ACombatCharacterBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACombatCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameplayAbilities/Characters/CombatCharacterBase.h" },
		{ "ModuleRelativePath", "GameplayAbilities/Characters/CombatCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "AbilitySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability system component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameplayAbilities/Characters/CombatCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability system component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseAttributeSet_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameplayAbilities/Characters/CombatCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AscReplicationMode_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "GameplayAbilities/Characters/CombatCharacterBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACombatCharacterBase constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAttributeSet;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AscReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AscReplicationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACombatCharacterBase constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACombatCharacterBase_Statics

// ********** Begin Class ACombatCharacterBase Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatCharacterBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatCharacterBase, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatCharacterBase_Statics::NewProp_BaseAttributeSet = { "BaseAttributeSet", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatCharacterBase, BaseAttributeSet), Z_Construct_UClass_UBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAttributeSet_MetaData), NewProp_BaseAttributeSet_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACombatCharacterBase_Statics::NewProp_AscReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACombatCharacterBase_Statics::NewProp_AscReplicationMode = { "AscReplicationMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatCharacterBase, AscReplicationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AscReplicationMode_MetaData), NewProp_AscReplicationMode_MetaData) }; // 3513395660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombatCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatCharacterBase_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatCharacterBase_Statics::NewProp_BaseAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatCharacterBase_Statics::NewProp_AscReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatCharacterBase_Statics::NewProp_AscReplicationMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatCharacterBase_Statics::PropPointers) < 2048);
// ********** End Class ACombatCharacterBase Property Definitions **********************************
UObject* (*const Z_Construct_UClass_ACombatCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACombatCharacterBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACombatCharacterBase, IAbilitySystemInterface), false },  // 2722098046
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatCharacterBase_Statics::ClassParams = {
	&ACombatCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACombatCharacterBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACombatCharacterBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombatCharacterBase_Statics::Class_MetaDataParams)
};
void ACombatCharacterBase::StaticRegisterNativesACombatCharacterBase()
{
}
UClass* Z_Construct_UClass_ACombatCharacterBase()
{
	if (!Z_Registration_Info_UClass_ACombatCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatCharacterBase.OuterSingleton, Z_Construct_UClass_ACombatCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACombatCharacterBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACombatCharacterBase);
ACombatCharacterBase::~ACombatCharacterBase() {}
// ********** End Class ACombatCharacterBase *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h__Script_CombatGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACombatCharacterBase, ACombatCharacterBase::StaticClass, TEXT("ACombatCharacterBase"), &Z_Registration_Info_UClass_ACombatCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatCharacterBase), 1806022365U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h__Script_CombatGAS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h__Script_CombatGAS_537487018{
	TEXT("/Script/CombatGAS"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h__Script_CombatGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_Characters_CombatCharacterBase_h__Script_CombatGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
