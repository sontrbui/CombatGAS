// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatGAS/GameplayAbilities/AttributeSets/BaseAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBaseAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
COMBATGAS_API UClass* Z_Construct_UClass_UBaseAttributeSet();
COMBATGAS_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_CombatGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseAttributeSet Function OnRep_Health **********************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics
{
	struct BaseAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilities/AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Health constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Health constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Health Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_Health_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Health Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_Health", 	Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::BaseAttributeSet_eventOnRep_Health_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::BaseAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_Health ************************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MaxHealth *******************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilities/AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MaxHealth constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MaxHealth constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MaxHealth Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxHealth_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MaxHealth Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxHealth", 	Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::BaseAttributeSet_eventOnRep_MaxHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::BaseAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MaxHealth *********************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MaxStamina ******************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxStamina_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilities/AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MaxStamina constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MaxStamina constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MaxStamina Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxStamina_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MaxStamina Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxStamina", 	Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::BaseAttributeSet_eventOnRep_MaxStamina_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::BaseAttributeSet_eventOnRep_MaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxStamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxStamina(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MaxStamina ********************************

// ********** Begin Class UBaseAttributeSet Function OnRep_Stamina *********************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics
{
	struct BaseAttributeSet_eventOnRep_Stamina_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilities/AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Stamina constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Stamina constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Stamina Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_Stamina_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Stamina Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_Stamina", 	Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::BaseAttributeSet_eventOnRep_Stamina_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::BaseAttributeSet_eventOnRep_Stamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_Stamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Stamina(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_Stamina ***********************************

// ********** Begin Class UBaseAttributeSet ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseAttributeSet;
UClass* UBaseAttributeSet::GetPrivateStaticClass()
{
	using TClass = UBaseAttributeSet;
	if (!Z_Registration_Info_UClass_UBaseAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BaseAttributeSet"),
			Z_Registration_Info_UClass_UBaseAttributeSet.InnerSingleton,
			StaticRegisterNativesUBaseAttributeSet,
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
	return Z_Registration_Info_UClass_UBaseAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister()
{
	return UBaseAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilities/AttributeSets/BaseAttributeSet.h" },
		{ "ModuleRelativePath", "GameplayAbilities/AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Heatlh attribute\n" },
#endif
		{ "ModuleRelativePath", "GameplayAbilities/AttributeSets/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Heatlh attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxHealth attribute\n" },
#endif
		{ "ModuleRelativePath", "GameplayAbilities/AttributeSets/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxHealth attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stamina attribute\n" },
#endif
		{ "ModuleRelativePath", "GameplayAbilities/AttributeSets/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamina attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxStamina attribute\n" },
#endif
		{ "ModuleRelativePath", "GameplayAbilities/AttributeSets/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxStamina attribute" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UBaseAttributeSet constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBaseAttributeSet constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRep_Health"), .Pointer = &UBaseAttributeSet::execOnRep_Health },
		{ .NameUTF8 = UTF8TEXT("OnRep_MaxHealth"), .Pointer = &UBaseAttributeSet::execOnRep_MaxHealth },
		{ .NameUTF8 = UTF8TEXT("OnRep_MaxStamina"), .Pointer = &UBaseAttributeSet::execOnRep_MaxStamina },
		{ .NameUTF8 = UTF8TEXT("OnRep_Stamina"), .Pointer = &UBaseAttributeSet::execOnRep_Stamina },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health, "OnRep_Health" }, // 151180083
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 423419002
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 1687329612
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_Stamina, "OnRep_Stamina" }, // 1055408792
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBaseAttributeSet_Statics

// ********** Begin Class UBaseAttributeSet Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UBaseAttributeSet Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UBaseAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams = {
	&UBaseAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams)
};
void UBaseAttributeSet::StaticRegisterNativesUBaseAttributeSet()
{
	UClass* Class = UBaseAttributeSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBaseAttributeSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBaseAttributeSet()
{
	if (!Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton, Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UBaseAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Health(TEXT("Health"));
	static FName Name_MaxHealth(TEXT("MaxHealth"));
	static FName Name_Stamina(TEXT("Stamina"));
	static FName Name_MaxStamina(TEXT("MaxStamina"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
		&& Name_MaxStamina == ClassReps[(int32)ENetFields_Private::MaxStamina].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBaseAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBaseAttributeSet);
UBaseAttributeSet::~UBaseAttributeSet() {}
// ********** End Class UBaseAttributeSet **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h__Script_CombatGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAttributeSet, UBaseAttributeSet::StaticClass, TEXT("UBaseAttributeSet"), &Z_Registration_Info_UClass_UBaseAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAttributeSet), 316033602U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h__Script_CombatGAS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h__Script_CombatGAS_1995383777{
	TEXT("/Script/CombatGAS"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h__Script_CombatGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CombatGAS_CombatGAS_Source_CombatGAS_GameplayAbilities_AttributeSets_BaseAttributeSet_h__Script_CombatGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
