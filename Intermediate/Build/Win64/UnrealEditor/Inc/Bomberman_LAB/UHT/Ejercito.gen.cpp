// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Builder_Examen/Ejercito.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEjercito() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AEjercito();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AEjercito_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AEjercito
void AEjercito::StaticRegisterNativesAEjercito()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEjercito);
UClass* Z_Construct_UClass_AEjercito_NoRegister()
{
	return AEjercito::StaticClass();
}
struct Z_Construct_UClass_AEjercito_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder_Examen/Ejercito.h" },
		{ "ModuleRelativePath", "Builder_Examen/Ejercito.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEjercito>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEjercito_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEjercito_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEjercito_Statics::ClassParams = {
	&AEjercito::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEjercito_Statics::Class_MetaDataParams), Z_Construct_UClass_AEjercito_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEjercito()
{
	if (!Z_Registration_Info_UClass_AEjercito.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEjercito.OuterSingleton, Z_Construct_UClass_AEjercito_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEjercito.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AEjercito>()
{
	return AEjercito::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEjercito);
AEjercito::~AEjercito() {}
// End Class AEjercito

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Ejercito_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEjercito, AEjercito::StaticClass, TEXT("AEjercito"), &Z_Registration_Info_UClass_AEjercito, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEjercito), 3690426001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Ejercito_h_707618882(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Ejercito_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Ejercito_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
