// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangaea/PlayerAvatar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAvatar() {}
// Cross Module References
	PANGAEA_API UClass* Z_Construct_UClass_APlayerAvatar_NoRegister();
	PANGAEA_API UClass* Z_Construct_UClass_APlayerAvatar();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Pangaea();
// End Cross Module References
	void APlayerAvatar::StaticRegisterNativesAPlayerAvatar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerAvatar);
	UClass* Z_Construct_UClass_APlayerAvatar_NoRegister()
	{
		return APlayerAvatar::StaticClass();
	}
	struct Z_Construct_UClass_APlayerAvatar_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Armer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerAvatar.h" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatar_Statics::NewProp_HealthPoints_MetaData[] = {
		{ "Category", "PlayerAvatar Params" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerAvatar_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatar, HealthPoints), METADATA_PARAMS(Z_Construct_UClass_APlayerAvatar_Statics::NewProp_HealthPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::NewProp_HealthPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "PlayerAvatar Params" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatar, Strength), METADATA_PARAMS(Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Armer_MetaData[] = {
		{ "Category", "PlayerAvatar Params" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Armer = { "Armer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatar, Armer), METADATA_PARAMS(Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Armer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Armer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "PlayerAvatar Params" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatar, AttackRange), METADATA_PARAMS(Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackInterval_MetaData[] = {
		{ "Category", "PlayerAvatar Params" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackInterval = { "AttackInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatar, AttackInterval), METADATA_PARAMS(Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp_HealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Armer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAvatar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerAvatar_Statics::ClassParams = {
		&APlayerAvatar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerAvatar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerAvatar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerAvatar()
	{
		if (!Z_Registration_Info_UClass_APlayerAvatar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerAvatar.OuterSingleton, Z_Construct_UClass_APlayerAvatar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerAvatar.OuterSingleton;
	}
	template<> PANGAEA_API UClass* StaticClass<APlayerAvatar>()
	{
		return APlayerAvatar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerAvatar);
	struct Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerAvatar, APlayerAvatar::StaticClass, TEXT("APlayerAvatar"), &Z_Registration_Info_UClass_APlayerAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerAvatar), 3732043082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_3938018031(TEXT("/Script/Pangaea"),
		Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
