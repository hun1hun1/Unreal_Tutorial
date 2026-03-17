// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGAEA_PlayerAvatar_generated_h
#error "PlayerAvatar.generated.h already included, missing '#pragma once' in PlayerAvatar.h"
#endif
#define PANGAEA_PlayerAvatar_generated_h

#define FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_SPARSE_DATA
#define FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_RPC_WRAPPERS
#define FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerAvatar(); \
	friend struct Z_Construct_UClass_APlayerAvatar_Statics; \
public: \
	DECLARE_CLASS(APlayerAvatar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pangaea"), NO_API) \
	DECLARE_SERIALIZER(APlayerAvatar)


#define FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerAvatar(); \
	friend struct Z_Construct_UClass_APlayerAvatar_Statics; \
public: \
	DECLARE_CLASS(APlayerAvatar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pangaea"), NO_API) \
	DECLARE_SERIALIZER(APlayerAvatar)


#define FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerAvatar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerAvatar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAvatar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerAvatar(APlayerAvatar&&); \
	NO_API APlayerAvatar(const APlayerAvatar&); \
public:


#define FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerAvatar(APlayerAvatar&&); \
	NO_API APlayerAvatar(const APlayerAvatar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAvatar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerAvatar)


#define FID_Pangaea_Source_Pangaea_PlayerAvatar_h_9_PROLOG
#define FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_SPARSE_DATA \
	FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_RPC_WRAPPERS \
	FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_INCLASS \
	FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_SPARSE_DATA \
	FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_INCLASS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_PlayerAvatar_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGAEA_API UClass* StaticClass<class APlayerAvatar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pangaea_Source_Pangaea_PlayerAvatar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
