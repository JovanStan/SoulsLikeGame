// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsLike/SoulsLikePlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSoulsLikePlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikePlayerController();
SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikePlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoulsLike();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASoulsLikePlayerController ***********************************************
void ASoulsLikePlayerController::StaticRegisterNativesASoulsLikePlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASoulsLikePlayerController;
UClass* ASoulsLikePlayerController::GetPrivateStaticClass()
{
	using TClass = ASoulsLikePlayerController;
	if (!Z_Registration_Info_UClass_ASoulsLikePlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SoulsLikePlayerController"),
			Z_Registration_Info_UClass_ASoulsLikePlayerController.InnerSingleton,
			StaticRegisterNativesASoulsLikePlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASoulsLikePlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ASoulsLikePlayerController_NoRegister()
{
	return ASoulsLikePlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASoulsLikePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SoulsLikePlayerController.h" },
		{ "ModuleRelativePath", "SoulsLikePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "SoulsLikePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoulsLikePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulsLikePlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASoulsLikePlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoulsLikePlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoulsLikePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsLikePlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsLikePlayerController_Statics::NewProp_DefaultMappingContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsLikePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASoulsLikePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SoulsLike,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsLikePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoulsLikePlayerController_Statics::ClassParams = {
	&ASoulsLikePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASoulsLikePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsLikePlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsLikePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoulsLikePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoulsLikePlayerController()
{
	if (!Z_Registration_Info_UClass_ASoulsLikePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoulsLikePlayerController.OuterSingleton, Z_Construct_UClass_ASoulsLikePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoulsLikePlayerController.OuterSingleton;
}
ASoulsLikePlayerController::ASoulsLikePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoulsLikePlayerController);
ASoulsLikePlayerController::~ASoulsLikePlayerController() {}
// ********** End Class ASoulsLikePlayerController *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SoulsLike_Source_SoulsLike_SoulsLikePlayerController_h__Script_SoulsLike_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoulsLikePlayerController, ASoulsLikePlayerController::StaticClass, TEXT("ASoulsLikePlayerController"), &Z_Registration_Info_UClass_ASoulsLikePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoulsLikePlayerController), 1384964026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsLike_Source_SoulsLike_SoulsLikePlayerController_h__Script_SoulsLike_2329305475(TEXT("/Script/SoulsLike"),
	Z_CompiledInDeferFile_FID_SoulsLike_Source_SoulsLike_SoulsLikePlayerController_h__Script_SoulsLike_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsLike_Source_SoulsLike_SoulsLikePlayerController_h__Script_SoulsLike_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
