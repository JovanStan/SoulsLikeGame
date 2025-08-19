// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoulsLikeCharacter.h"

#ifdef SOULSLIKE_SoulsLikeCharacter_generated_h
#error "SoulsLikeCharacter.generated.h already included, missing '#pragma once' in SoulsLikeCharacter.h"
#endif
#define SOULSLIKE_SoulsLikeCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASoulsLikeCharacter ******************************************************
#define FID_SoulsLike_Source_SoulsLike_SoulsLikeCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikeCharacter_NoRegister();

#define FID_SoulsLike_Source_SoulsLike_SoulsLikeCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoulsLikeCharacter(); \
	friend struct Z_Construct_UClass_ASoulsLikeCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikeCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASoulsLikeCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SoulsLike"), Z_Construct_UClass_ASoulsLikeCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASoulsLikeCharacter)


#define FID_SoulsLike_Source_SoulsLike_SoulsLikeCharacter_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASoulsLikeCharacter(ASoulsLikeCharacter&&) = delete; \
	ASoulsLikeCharacter(const ASoulsLikeCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoulsLikeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoulsLikeCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASoulsLikeCharacter) \
	NO_API virtual ~ASoulsLikeCharacter();


#define FID_SoulsLike_Source_SoulsLike_SoulsLikeCharacter_h_17_PROLOG
#define FID_SoulsLike_Source_SoulsLike_SoulsLikeCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsLike_Source_SoulsLike_SoulsLikeCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsLike_Source_SoulsLike_SoulsLikeCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_SoulsLike_Source_SoulsLike_SoulsLikeCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASoulsLikeCharacter;

// ********** End Class ASoulsLikeCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsLike_Source_SoulsLike_SoulsLikeCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
