// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/CrearMapaCannons.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrearMapaCannons() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ACrearMapaCannons();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ACrearMapaCannons_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ACrearMapaCannons
void ACrearMapaCannons::StaticRegisterNativesACrearMapaCannons()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACrearMapaCannons);
UClass* Z_Construct_UClass_ACrearMapaCannons_NoRegister()
{
	return ACrearMapaCannons::StaticClass();
}
struct Z_Construct_UClass_ACrearMapaCannons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CrearMapaCannons.h" },
		{ "ModuleRelativePath", "Public/CrearMapaCannons.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrearMapaCannons>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACrearMapaCannons_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrearMapaCannons_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrearMapaCannons_Statics::ClassParams = {
	&ACrearMapaCannons::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrearMapaCannons_Statics::Class_MetaDataParams), Z_Construct_UClass_ACrearMapaCannons_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACrearMapaCannons()
{
	if (!Z_Registration_Info_UClass_ACrearMapaCannons.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrearMapaCannons.OuterSingleton, Z_Construct_UClass_ACrearMapaCannons_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACrearMapaCannons.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ACrearMapaCannons>()
{
	return ACrearMapaCannons::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACrearMapaCannons);
ACrearMapaCannons::~ACrearMapaCannons() {}
// End Class ACrearMapaCannons

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_CrearMapaCannons_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACrearMapaCannons, ACrearMapaCannons::StaticClass, TEXT("ACrearMapaCannons"), &Z_Registration_Info_UClass_ACrearMapaCannons, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrearMapaCannons), 2611449810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_CrearMapaCannons_h_3768481588(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_CrearMapaCannons_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_CrearMapaCannons_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
