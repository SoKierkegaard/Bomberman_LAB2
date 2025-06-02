// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Builder_Examen/Enemigo_Comun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo_Comun() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AEnemigo_Comun();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AEnemigo_Comun_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AEnemigo_Comun
void AEnemigo_Comun::StaticRegisterNativesAEnemigo_Comun()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigo_Comun);
UClass* Z_Construct_UClass_AEnemigo_Comun_NoRegister()
{
	return AEnemigo_Comun::StaticClass();
}
struct Z_Construct_UClass_AEnemigo_Comun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder_Examen/Enemigo_Comun.h" },
		{ "ModuleRelativePath", "Builder_Examen/Enemigo_Comun.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo_Comun>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigo_Comun_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Comun_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Comun_Statics::ClassParams = {
	&AEnemigo_Comun::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Comun_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigo_Comun_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigo_Comun()
{
	if (!Z_Registration_Info_UClass_AEnemigo_Comun.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigo_Comun.OuterSingleton, Z_Construct_UClass_AEnemigo_Comun_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigo_Comun.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AEnemigo_Comun>()
{
	return AEnemigo_Comun::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo_Comun);
AEnemigo_Comun::~AEnemigo_Comun() {}
// End Class AEnemigo_Comun

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Enemigo_Comun_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigo_Comun, AEnemigo_Comun::StaticClass, TEXT("AEnemigo_Comun"), &Z_Registration_Info_UClass_AEnemigo_Comun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigo_Comun), 2103351960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Enemigo_Comun_h_3314327475(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Enemigo_Comun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Enemigo_Comun_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
