// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangaea/DefenseTower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefenseTower() {}
// Cross Module References
	PANGAEA_API UClass* Z_Construct_UClass_ADefenseTower_NoRegister();
	PANGAEA_API UClass* Z_Construct_UClass_ADefenseTower();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pangaea();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADefenseTower::execCanFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefenseTower::execIsDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDestroyed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefenseTower::execGetHealthPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHealthPoints();
		P_NATIVE_END;
	}
	void ADefenseTower::StaticRegisterNativesADefenseTower()
	{
		UClass* Class = ADefenseTower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanFire", &ADefenseTower::execCanFire },
			{ "GetHealthPoints", &ADefenseTower::execGetHealthPoints },
			{ "IsDestroyed", &ADefenseTower::execIsDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefenseTower_CanFire_Statics
	{
		struct DefenseTower_eventCanFire_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DefenseTower_eventCanFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DefenseTower_eventCanFire_Parms), &Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_CanFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefenseTower_CanFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Defense Tower" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_CanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "CanFire", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::DefenseTower_eventCanFire_Parms), Z_Construct_UFunction_ADefenseTower_CanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefenseTower_CanFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_CanFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics
	{
		struct DefenseTower_eventGetHealthPoints_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefenseTower_eventGetHealthPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Defense Tower" },
		{ "DisplayName", "GetHP" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "GetHealthPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::DefenseTower_eventGetHealthPoints_Parms), Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefenseTower_GetHealthPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics
	{
		struct DefenseTower_eventIsDestroyed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DefenseTower_eventIsDestroyed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DefenseTower_eventIsDestroyed_Parms), &Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Defense Tower" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "IsDestroyed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::DefenseTower_eventIsDestroyed_Parms), Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefenseTower_IsDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefenseTower);
	UClass* Z_Construct_UClass_ADefenseTower_NoRegister()
	{
		return ADefenseTower::StaticClass();
	}
	struct Z_Construct_UClass_ADefenseTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HealthPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShellDefense_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ShellDefense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefenseTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefenseTower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefenseTower_CanFire, "CanFire" }, // 2530937664
		{ &Z_Construct_UFunction_ADefenseTower_GetHealthPoints, "GetHealthPoints" }, // 1937974845
		{ &Z_Construct_UFunction_ADefenseTower_IsDestroyed, "IsDestroyed" }, // 3078175551
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseTower_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DefenseTower.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseTower_Statics::NewProp__BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tower Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp__BoxComponent = { "_BoxComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefenseTower, _BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefenseTower_Statics::NewProp__BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::NewProp__BoxComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseTower_Statics::NewProp__MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tower Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp__MeshComponent = { "_MeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefenseTower, _MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefenseTower_Statics::NewProp__MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::NewProp__MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseTower_Statics::NewProp_HealthPoints_MetaData[] = {
		{ "Category", "Tower Params" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefenseTower, HealthPoints), METADATA_PARAMS(Z_Construct_UClass_ADefenseTower_Statics::NewProp_HealthPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::NewProp_HealthPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseTower_Statics::NewProp_ShellDefense_MetaData[] = {
		{ "Category", "Tower Params" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_ShellDefense = { "ShellDefense", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefenseTower, ShellDefense), METADATA_PARAMS(Z_Construct_UClass_ADefenseTower_Statics::NewProp_ShellDefense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::NewProp_ShellDefense_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseTower_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Tower Params" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefenseTower, AttackRange), METADATA_PARAMS(Z_Construct_UClass_ADefenseTower_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseTower_Statics::NewProp_ReloadInterval_MetaData[] = {
		{ "Category", "Tower Params" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_ReloadInterval = { "ReloadInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefenseTower, ReloadInterval), METADATA_PARAMS(Z_Construct_UClass_ADefenseTower_Statics::NewProp_ReloadInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::NewProp_ReloadInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefenseTower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp__BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp__MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_HealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_ShellDefense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_ReloadInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefenseTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefenseTower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefenseTower_Statics::ClassParams = {
		&ADefenseTower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefenseTower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefenseTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefenseTower()
	{
		if (!Z_Registration_Info_UClass_ADefenseTower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefenseTower.OuterSingleton, Z_Construct_UClass_ADefenseTower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADefenseTower.OuterSingleton;
	}
	template<> PANGAEA_API UClass* StaticClass<ADefenseTower>()
	{
		return ADefenseTower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefenseTower);
	struct Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_DefenseTower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_DefenseTower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADefenseTower, ADefenseTower::StaticClass, TEXT("ADefenseTower"), &Z_Registration_Info_UClass_ADefenseTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefenseTower), 474218022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_DefenseTower_h_4052347292(TEXT("/Script/Pangaea"),
		Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_DefenseTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_DefenseTower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
