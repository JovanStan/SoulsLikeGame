// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoulsLikeGameMode.h"

#ifdef SOULSLIKE_SoulsLikeGameMode_generated_h
#error "SoulsLikeGameMode.generated.h already included, missing '#pragma once' in SoulsLikeGameMode.h"
#endif
#define SOULSLIKE_SoulsLikeGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASoulsLikeGameMode *******************************************************
SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikeGameMode_NoRegister();

#define FID_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoulsLikeGameMode(); \
	friend struct Z_Construct_UClass_ASoulsLikeGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikeGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ASoulsLikeGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SoulsLike"), Z_Construct_UClass_ASoulsLikeGameMode_NoRegister) \
	DECLARE_SERIALIZER(ASoulsLikeGameMode)


#define FID_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASoulsLikeGameMode(ASoulsLikeGameMode&&) = delete; \
	ASoulsLikeGameMode(const ASoulsLikeGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoulsLikeGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoulsLikeGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASoulsLikeGameMode) \
	NO_API virtual ~ASoulsLikeGameMode();


#define FID_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h_8_PROLOG
#define FID_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h_11_INCLASS_NO_PURE_DECLS \
	FID_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASoulsLikeGameMode;

// ********** End Class ASoulsLikeGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
