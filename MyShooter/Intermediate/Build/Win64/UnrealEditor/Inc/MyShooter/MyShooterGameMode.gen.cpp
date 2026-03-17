// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyShooter/MyShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyShooterGameMode() {}
// Cross Module References
	MYSHOOTER_API UClass* Z_Construct_UClass_AMyShooterGameMode_NoRegister();
	MYSHOOTER_API UClass* Z_Construct_UClass_AMyShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyShooter();
// End Cross Module References
	void AMyShooterGameMode::StaticRegisterNativesAMyShooterGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyShooterGameMode);
	UClass* Z_Construct_UClass_AMyShooterGameMode_NoRegister()
	{
		return AMyShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyShooterGameMode.h" },
		{ "ModuleRelativePath", "MyShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyShooterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyShooterGameMode_Statics::ClassParams = {
		&AMyShooterGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyShooterGameMode()
	{
		if (!Z_Registration_Info_UClass_AMyShooterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyShooterGameMode.OuterSingleton, Z_Construct_UClass_AMyShooterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyShooterGameMode.OuterSingleton;
	}
	template<> MYSHOOTER_API UClass* StaticClass<AMyShooterGameMode>()
	{
		return AMyShooterGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyShooterGameMode);
	struct Z_CompiledInDeferFile_FID_MyShooter_Source_MyShooter_MyShooterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyShooter_Source_MyShooter_MyShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyShooterGameMode, AMyShooterGameMode::StaticClass, TEXT("AMyShooterGameMode"), &Z_Registration_Info_UClass_AMyShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyShooterGameMode), 618170109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyShooter_Source_MyShooter_MyShooterGameMode_h_1654177011(TEXT("/Script/MyShooter"),
		Z_CompiledInDeferFile_FID_MyShooter_Source_MyShooter_MyShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyShooter_Source_MyShooter_MyShooterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
