// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangaea/PangaeaGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangaeaGameState() {}
// Cross Module References
	PANGAEA_API UClass* Z_Construct_UClass_APangaeaGameState_NoRegister();
	PANGAEA_API UClass* Z_Construct_UClass_APangaeaGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Pangaea();
// End Cross Module References
	void APangaeaGameState::StaticRegisterNativesAPangaeaGameState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APangaeaGameState);
	UClass* Z_Construct_UClass_APangaeaGameState_NoRegister()
	{
		return APangaeaGameState::StaticClass();
	}
	struct Z_Construct_UClass_APangaeaGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APangaeaGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APangaeaGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PangaeaGameState.h" },
		{ "ModuleRelativePath", "PangaeaGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APangaeaGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APangaeaGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APangaeaGameState_Statics::ClassParams = {
		&APangaeaGameState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APangaeaGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APangaeaGameState()
	{
		if (!Z_Registration_Info_UClass_APangaeaGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APangaeaGameState.OuterSingleton, Z_Construct_UClass_APangaeaGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APangaeaGameState.OuterSingleton;
	}
	template<> PANGAEA_API UClass* StaticClass<APangaeaGameState>()
	{
		return APangaeaGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APangaeaGameState);
	struct Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APangaeaGameState, APangaeaGameState::StaticClass, TEXT("APangaeaGameState"), &Z_Registration_Info_UClass_APangaeaGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APangaeaGameState), 1904761495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameState_h_1005652290(TEXT("/Script/Pangaea"),
		Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
