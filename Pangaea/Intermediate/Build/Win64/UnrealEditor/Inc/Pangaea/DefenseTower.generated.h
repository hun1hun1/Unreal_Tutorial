// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGAEA_DefenseTower_generated_h
#error "DefenseTower.generated.h already included, missing '#pragma once' in DefenseTower.h"
#endif
#define PANGAEA_DefenseTower_generated_h

#define FID_Pangaea_Source_Pangaea_DefenseTower_h_14_SPARSE_DATA
#define FID_Pangaea_Source_Pangaea_DefenseTower_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execIsDestroyed); \
	DECLARE_FUNCTION(execGetHealthPoints);


#define FID_Pangaea_Source_Pangaea_DefenseTower_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execIsDestroyed); \
	DECLARE_FUNCTION(execGetHealthPoints);


#define FID_Pangaea_Source_Pangaea_DefenseTower_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefenseTower(); \
	friend struct Z_Construct_UClass_ADefenseTower_Statics; \
public: \
	DECLARE_CLASS(ADefenseTower, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pangaea"), NO_API) \
	DECLARE_SERIALIZER(ADefenseTower)


#define FID_Pangaea_Source_Pangaea_DefenseTower_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADefenseTower(); \
	friend struct Z_Construct_UClass_ADefenseTower_Statics; \
public: \
	DECLARE_CLASS(ADefenseTower, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pangaea"), NO_API) \
	DECLARE_SERIALIZER(ADefenseTower)


#define FID_Pangaea_Source_Pangaea_DefenseTower_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefenseTower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefenseTower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefenseTower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefenseTower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefenseTower(ADefenseTower&&); \
	NO_API ADefenseTower(const ADefenseTower&); \
public:


#define FID_Pangaea_Source_Pangaea_DefenseTower_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefenseTower(ADefenseTower&&); \
	NO_API ADefenseTower(const ADefenseTower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefenseTower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefenseTower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefenseTower)


#define FID_Pangaea_Source_Pangaea_DefenseTower_h_11_PROLOG
#define FID_Pangaea_Source_Pangaea_DefenseTower_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pangaea_Source_Pangaea_DefenseTower_h_14_SPARSE_DATA \
	FID_Pangaea_Source_Pangaea_DefenseTower_h_14_RPC_WRAPPERS \
	FID_Pangaea_Source_Pangaea_DefenseTower_h_14_INCLASS \
	FID_Pangaea_Source_Pangaea_DefenseTower_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pangaea_Source_Pangaea_DefenseTower_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pangaea_Source_Pangaea_DefenseTower_h_14_SPARSE_DATA \
	FID_Pangaea_Source_Pangaea_DefenseTower_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_DefenseTower_h_14_INCLASS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_DefenseTower_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGAEA_API UClass* StaticClass<class ADefenseTower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pangaea_Source_Pangaea_DefenseTower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
