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
// End Cross Module References
	void ADefenseTower::StaticRegisterNativesADefenseTower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefenseTower);
	UClass* Z_Construct_UClass_ADefenseTower_NoRegister()
	{
		return ADefenseTower::StaticClass();
	}
	struct Z_Construct_UClass_ADefenseTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseTower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefenseTower.h" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif
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
		nullptr,
		Z_Construct_UClass_ADefenseTower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_ADefenseTower, ADefenseTower::StaticClass, TEXT("ADefenseTower"), &Z_Registration_Info_UClass_ADefenseTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefenseTower), 3889248567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_DefenseTower_h_4206537925(TEXT("/Script/Pangaea"),
		Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_DefenseTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_DefenseTower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
