// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyShooter_init() {}
	MYSHOOTER_API UFunction* Z_Construct_UDelegateFunction_MyShooter_OnPickUp__DelegateSignature();
	MYSHOOTER_API UFunction* Z_Construct_UDelegateFunction_MyShooter_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_MyShooter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MyShooter_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MyShooter_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0D590F13,
				0xB2E881A9,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyShooter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyShooter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyShooter(Z_Construct_UPackage__Script_MyShooter, TEXT("/Script/MyShooter"), Z_Registration_Info_UPackage__Script_MyShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0D590F13, 0xB2E881A9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
