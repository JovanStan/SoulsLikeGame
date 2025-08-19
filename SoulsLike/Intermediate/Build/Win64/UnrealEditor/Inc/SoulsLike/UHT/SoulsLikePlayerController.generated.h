// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoulsLikePlayerController.h"

#ifdef SOULSLIKE_SoulsLikePlayerController_generated_h
#error "SoulsLikePlayerController.generated.h already included, missing '#pragma once' in SoulsLikePlayerController.h"
#endif
#define SOULSLIKE_SoulsLikePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASoulsLikePlayerController ***********************************************
SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikePlayerController_NoRegister();

#define FID_SoulsLike_Source_SoulsLike_SoulsLikePlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoulsLikePlayerController(); \
	friend struct Z_Construct_UClass_ASoulsLikePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ASoulsLikePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SoulsLike"), Z_Construct_UClass_ASoulsLikePlayerController_NoRegister) \
	DECLARE_SERIALIZER(ASoulsLikePlayerController)


#define FID_SoulsLike_Source_SoulsLike_SoulsLikePlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASoulsLikePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASoulsLikePlayerController(ASoulsLikePlayerController&&) = delete; \
	ASoulsLikePlayerController(const ASoulsLikePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoulsLikePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoulsLikePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASoulsLikePlayerController) \
	NO_API virtual ~ASoulsLikePlayerController();


#define FID_SoulsLike_Source_SoulsLike_SoulsLikePlayerController_h_10_PROLOG
#define FID_SoulsLike_Source_SoulsLike_SoulsLikePlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsLike_Source_SoulsLike_SoulsLikePlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_SoulsLike_Source_SoulsLike_SoulsLikePlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASoulsLikePlayerController;

// ********** End Class ASoulsLikePlayerController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsLike_Source_SoulsLike_SoulsLikePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
