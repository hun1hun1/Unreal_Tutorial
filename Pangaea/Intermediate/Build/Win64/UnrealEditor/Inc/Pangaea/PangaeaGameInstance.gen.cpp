// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangaea/PangaeaGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangaeaGameInstance() {}
// Cross Module References
	PANGAEA_API UClass* Z_Construct_UClass_UPangaeaGameInstance_NoRegister();
	PANGAEA_API UClass* Z_Construct_UClass_UPangaeaGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Pangaea();
// End Cross Module References
	void UPangaeaGameInstance::StaticRegisterNativesUPangaeaGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPangaeaGameInstance);
	UClass* Z_Construct_UClass_UPangaeaGameInstance_NoRegister()
	{
		return UPangaeaGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPangaeaGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPangaeaGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPangaeaGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PangaeaGameInstance.h" },
		{ "ModuleRelativePath", "PangaeaGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPangaeaGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPangaeaGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPangaeaGameInstance_Statics::ClassParams = {
		&UPangaeaGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPangaeaGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPangaeaGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPangaeaGameInstance()
	{
		if (!Z_Registration_Info_UClass_UPangaeaGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPangaeaGameInstance.OuterSingleton, Z_Construct_UClass_UPangaeaGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPangaeaGameInstance.OuterSingleton;
	}
	template<> PANGAEA_API UClass* StaticClass<UPangaeaGameInstance>()
	{
		return UPangaeaGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPangaeaGameInstance);
	struct Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPangaeaGameInstance, UPangaeaGameInstance::StaticClass, TEXT("UPangaeaGameInstance"), &Z_Registration_Info_UClass_UPangaeaGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPangaeaGameInstance), 497971675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_1362615767(TEXT("/Script/Pangaea"),
		Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
