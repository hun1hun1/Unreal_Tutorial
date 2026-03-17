// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangaea/PangaeaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangaeaGameMode() {}
// Cross Module References
	PANGAEA_API UClass* Z_Construct_UClass_APangaeaGameMode_NoRegister();
	PANGAEA_API UClass* Z_Construct_UClass_APangaeaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Pangaea();
// End Cross Module References
	void APangaeaGameMode::StaticRegisterNativesAPangaeaGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APangaeaGameMode);
	UClass* Z_Construct_UClass_APangaeaGameMode_NoRegister()
	{
		return APangaeaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APangaeaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APangaeaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APangaeaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PangaeaGameMode.h" },
		{ "ModuleRelativePath", "PangaeaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APangaeaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APangaeaGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APangaeaGameMode_Statics::ClassParams = {
		&APangaeaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APangaeaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APangaeaGameMode()
	{
		if (!Z_Registration_Info_UClass_APangaeaGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APangaeaGameMode.OuterSingleton, Z_Construct_UClass_APangaeaGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APangaeaGameMode.OuterSingleton;
	}
	template<> PANGAEA_API UClass* StaticClass<APangaeaGameMode>()
	{
		return APangaeaGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APangaeaGameMode);
	struct Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APangaeaGameMode, APangaeaGameMode::StaticClass, TEXT("APangaeaGameMode"), &Z_Registration_Info_UClass_APangaeaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APangaeaGameMode), 1655631008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_875515981(TEXT("/Script/Pangaea"),
		Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
