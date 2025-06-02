// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Builder_Examen/Director_Ejercito.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirector_Ejercito() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ADirector_Ejercito();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ADirector_Ejercito_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ADirector_Ejercito
void ADirector_Ejercito::StaticRegisterNativesADirector_Ejercito()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADirector_Ejercito);
UClass* Z_Construct_UClass_ADirector_Ejercito_NoRegister()
{
	return ADirector_Ejercito::StaticClass();
}
struct Z_Construct_UClass_ADirector_Ejercito_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder_Examen/Director_Ejercito.h" },
		{ "ModuleRelativePath", "Builder_Examen/Director_Ejercito.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirector_Ejercito>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADirector_Ejercito_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirector_Ejercito_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADirector_Ejercito_Statics::ClassParams = {
	&ADirector_Ejercito::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirector_Ejercito_Statics::Class_MetaDataParams), Z_Construct_UClass_ADirector_Ejercito_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADirector_Ejercito()
{
	if (!Z_Registration_Info_UClass_ADirector_Ejercito.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADirector_Ejercito.OuterSingleton, Z_Construct_UClass_ADirector_Ejercito_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADirector_Ejercito.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ADirector_Ejercito>()
{
	return ADirector_Ejercito::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADirector_Ejercito);
ADirector_Ejercito::~ADirector_Ejercito() {}
// End Class ADirector_Ejercito

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Director_Ejercito_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADirector_Ejercito, ADirector_Ejercito::StaticClass, TEXT("ADirector_Ejercito"), &Z_Registration_Info_UClass_ADirector_Ejercito, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADirector_Ejercito), 2491868856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Director_Ejercito_h_2071007013(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Director_Ejercito_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Director_Ejercito_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
