// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYSHOOTER_MyShooterProjectile_generated_h
#error "MyShooterProjectile.generated.h already included, missing '#pragma once' in MyShooterProjectile.h"
#endif
#define MYSHOOTER_MyShooterProjectile_generated_h

#define FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_SPARSE_DATA
#define FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyShooterProjectile(); \
	friend struct Z_Construct_UClass_AMyShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyShooter"), NO_API) \
	DECLARE_SERIALIZER(AMyShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyShooterProjectile(); \
	friend struct Z_Construct_UClass_AMyShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyShooter"), NO_API) \
	DECLARE_SERIALIZER(AMyShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyShooterProjectile(AMyShooterProjectile&&); \
	NO_API AMyShooterProjectile(const AMyShooterProjectile&); \
public:


#define FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyShooterProjectile(AMyShooterProjectile&&); \
	NO_API AMyShooterProjectile(const AMyShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyShooterProjectile)


#define FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_12_PROLOG
#define FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_SPARSE_DATA \
	FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_RPC_WRAPPERS \
	FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_INCLASS \
	FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_SPARSE_DATA \
	FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyShooter_Source_MyShooter_MyShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSHOOTER_API UClass* StaticClass<class AMyShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyShooter_Source_MyShooter_MyShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
