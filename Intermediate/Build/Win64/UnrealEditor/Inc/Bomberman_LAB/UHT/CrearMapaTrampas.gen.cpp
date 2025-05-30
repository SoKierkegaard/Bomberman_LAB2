// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/CrearMapaTrampas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrearMapaTrampas() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ACrearMapaTrampas();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ACrearMapaTrampas_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ACrearMapaTrampas
void ACrearMapaTrampas::StaticRegisterNativesACrearMapaTrampas()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACrearMapaTrampas);
UClass* Z_Construct_UClass_ACrearMapaTrampas_NoRegister()
{
	return ACrearMapaTrampas::StaticClass();
}
struct Z_Construct_UClass_ACrearMapaTrampas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CrearMapaTrampas.h" },
		{ "ModuleRelativePath", "Public/CrearMapaTrampas.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrearMapaTrampas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACrearMapaTrampas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrearMapaTrampas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrearMapaTrampas_Statics::ClassParams = {
	&ACrearMapaTrampas::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrearMapaTrampas_Statics::Class_MetaDataParams), Z_Construct_UClass_ACrearMapaTrampas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACrearMapaTrampas()
{
	if (!Z_Registration_Info_UClass_ACrearMapaTrampas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrearMapaTrampas.OuterSingleton, Z_Construct_UClass_ACrearMapaTrampas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACrearMapaTrampas.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ACrearMapaTrampas>()
{
	return ACrearMapaTrampas::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACrearMapaTrampas);
ACrearMapaTrampas::~ACrearMapaTrampas() {}
// End Class ACrearMapaTrampas

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_CrearMapaTrampas_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACrearMapaTrampas, ACrearMapaTrampas::StaticClass, TEXT("ACrearMapaTrampas"), &Z_Registration_Info_UClass_ACrearMapaTrampas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrearMapaTrampas), 679345433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_CrearMapaTrampas_h_102200807(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_CrearMapaTrampas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_CrearMapaTrampas_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
