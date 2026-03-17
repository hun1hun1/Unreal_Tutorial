// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSHOOTER_MyShooterCharacter_generated_h
#error "MyShooterCharacter.generated.h already included, missing '#pragma once' in MyShooterCharacter.h"
#endif
#define MYSHOOTER_MyShooterCharacter_generated_h

#define FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_SPARSE_DATA
#define FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_RPC_WRAPPERS
#define FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyShooterCharacter(); \
	friend struct Z_Construct_UClass_AMyShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyShooter"), NO_API) \
	DECLARE_SERIALIZER(AMyShooterCharacter)


#define FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAMyShooterCharacter(); \
	friend struct Z_Construct_UClass_AMyShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyShooter"), NO_API) \
	DECLARE_SERIALIZER(AMyShooterCharacter)


#define FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyShooterCharacter(AMyShooterCharacter&&); \
	NO_API AMyShooterCharacter(const AMyShooterCharacter&); \
public:


#define FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyShooterCharacter(AMyShooterCharacter&&); \
	NO_API AMyShooterCharacter(const AMyShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyShooterCharacter)


#define FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_20_PROLOG
#define FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_SPARSE_DATA \
	FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_RPC_WRAPPERS \
	FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_INCLASS \
	FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_SPARSE_DATA \
	FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_MyShooter_Source_MyShooter_MyShooterCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSHOOTER_API UClass* StaticClass<class AMyShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyShooter_Source_MyShooter_MyShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
