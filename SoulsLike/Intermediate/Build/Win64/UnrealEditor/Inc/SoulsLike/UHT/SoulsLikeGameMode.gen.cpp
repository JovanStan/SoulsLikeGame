// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsLike/SoulsLikeGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSoulsLikeGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikeGameMode();
SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoulsLike();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASoulsLikeGameMode *******************************************************
void ASoulsLikeGameMode::StaticRegisterNativesASoulsLikeGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASoulsLikeGameMode;
UClass* ASoulsLikeGameMode::GetPrivateStaticClass()
{
	using TClass = ASoulsLikeGameMode;
	if (!Z_Registration_Info_UClass_ASoulsLikeGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SoulsLikeGameMode"),
			Z_Registration_Info_UClass_ASoulsLikeGameMode.InnerSingleton,
			StaticRegisterNativesASoulsLikeGameMode,
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
	return Z_Registration_Info_UClass_ASoulsLikeGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASoulsLikeGameMode_NoRegister()
{
	return ASoulsLikeGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASoulsLikeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SoulsLikeGameMode.h" },
		{ "ModuleRelativePath", "SoulsLikeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoulsLikeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASoulsLikeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SoulsLike,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsLikeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoulsLikeGameMode_Statics::ClassParams = {
	&ASoulsLikeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsLikeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoulsLikeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoulsLikeGameMode()
{
	if (!Z_Registration_Info_UClass_ASoulsLikeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoulsLikeGameMode.OuterSingleton, Z_Construct_UClass_ASoulsLikeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoulsLikeGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoulsLikeGameMode);
ASoulsLikeGameMode::~ASoulsLikeGameMode() {}
// ********** End Class ASoulsLikeGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h__Script_SoulsLike_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoulsLikeGameMode, ASoulsLikeGameMode::StaticClass, TEXT("ASoulsLikeGameMode"), &Z_Registration_Info_UClass_ASoulsLikeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoulsLikeGameMode), 1261435188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h__Script_SoulsLike_2952069562(TEXT("/Script/SoulsLike"),
	Z_CompiledInDeferFile_FID_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h__Script_SoulsLike_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h__Script_SoulsLike_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
