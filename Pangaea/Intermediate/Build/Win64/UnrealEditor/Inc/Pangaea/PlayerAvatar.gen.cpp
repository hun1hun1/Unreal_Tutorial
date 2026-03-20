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
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerAvatar::execCanAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerAvatar::execIsKilled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsKilled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerAvatar::execGetHealthPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHealthPoints();
		P_NATIVE_END;
	}
	void APlayerAvatar::StaticRegisterNativesAPlayerAvatar()
	{
		UClass* Class = APlayerAvatar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanAttack", &APlayerAvatar::execCanAttack },
			{ "GetHealthPoints", &APlayerAvatar::execGetHealthPoints },
			{ "IsKilled", &APlayerAvatar::execIsKilled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics
	{
		struct PlayerAvatar_eventCanAttack_Parms
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
	void Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerAvatar_eventCanAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerAvatar_eventCanAttack_Parms), &Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pangaea|PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerAvatar, nullptr, "CanAttack", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::PlayerAvatar_eventCanAttack_Parms), Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerAvatar_CanAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerAvatar_CanAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics
	{
		struct PlayerAvatar_eventGetHealthPoints_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAvatar_eventGetHealthPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pangaea|PlayerCharacter" },
		{ "DisplayName", "Get HP" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerAvatar, nullptr, "GetHealthPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics::PlayerAvatar_eventGetHealthPoints_Parms), Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerAvatar_GetHealthPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerAvatar_GetHealthPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics
	{
		struct PlayerAvatar_eventIsKilled_Parms
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
	void Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerAvatar_eventIsKilled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerAvatar_eventIsKilled_Parms), &Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pangaea|PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerAvatar, nullptr, "IsKilled", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::PlayerAvatar_eventIsKilled_Parms), Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerAvatar_IsKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerAvatar_IsKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerAvatar);
	UClass* Z_Construct_UClass_APlayerAvatar_NoRegister()
	{
		return APlayerAvatar::StaticClass();
	}
	struct Z_Construct_UClass_APlayerAvatar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__springArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__springArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__cameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__cameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerAvatar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerAvatar_CanAttack, "CanAttack" }, // 3895194400
		{ &Z_Construct_UFunction_APlayerAvatar_GetHealthPoints, "GetHealthPoints" }, // 1324904648
		{ &Z_Construct_UFunction_APlayerAvatar_IsKilled, "IsKilled" }, // 58880565
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerAvatar.h" },
		{ "IsBlueprintBase", "true" },
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatar_Statics::NewProp__springArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAvatar_Statics::NewProp__springArmComponent = { "_springArmComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatar, _springArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerAvatar_Statics::NewProp__springArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::NewProp__springArmComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatar_Statics::NewProp__cameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAvatar_Statics::NewProp__cameraComponent = { "_cameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatar, _cameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerAvatar_Statics::NewProp__cameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::NewProp__cameraComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp_HealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp_Armer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp_AttackInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp__springArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp__cameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAvatar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerAvatar_Statics::ClassParams = {
		&APlayerAvatar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerAvatar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_APlayerAvatar, APlayerAvatar::StaticClass, TEXT("APlayerAvatar"), &Z_Registration_Info_UClass_APlayerAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerAvatar), 1501777679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_13774688(TEXT("/Script/Pangaea"),
		Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
