// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangaea_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Pangaea;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Pangaea()
	{
		if (!Z_Registration_Info_UPackage__Script_Pangaea.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Pangaea",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xEAA4E9D4,
				0x2B13F87E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Pangaea.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Pangaea.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Pangaea(Z_Construct_UPackage__Script_Pangaea, TEXT("/Script/Pangaea"), Z_Registration_Info_UPackage__Script_Pangaea, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEAA4E9D4, 0x2B13F87E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
