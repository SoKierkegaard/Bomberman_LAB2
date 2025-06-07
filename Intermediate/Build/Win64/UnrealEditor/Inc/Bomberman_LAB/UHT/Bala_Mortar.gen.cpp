// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Composite_LAB/Bala_Mortar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBala_Mortar() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABala_Mortar();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABala_Mortar_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABala_Mortar
void ABala_Mortar::StaticRegisterNativesABala_Mortar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABala_Mortar);
UClass* Z_Construct_UClass_ABala_Mortar_NoRegister()
{
	return ABala_Mortar::StaticClass();
}
struct Z_Construct_UClass_ABala_Mortar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Composite_LAB/Bala_Mortar.h" },
		{ "ModuleRelativePath", "Composite_LAB/Bala_Mortar.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABala_Mortar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABala_Mortar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Mortar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABala_Mortar_Statics::ClassParams = {
	&ABala_Mortar::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Mortar_Statics::Class_MetaDataParams), Z_Construct_UClass_ABala_Mortar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABala_Mortar()
{
	if (!Z_Registration_Info_UClass_ABala_Mortar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABala_Mortar.OuterSingleton, Z_Construct_UClass_ABala_Mortar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABala_Mortar.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABala_Mortar>()
{
	return ABala_Mortar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABala_Mortar);
ABala_Mortar::~ABala_Mortar() {}
// End Class ABala_Mortar

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Bala_Mortar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABala_Mortar, ABala_Mortar::StaticClass, TEXT("ABala_Mortar"), &Z_Registration_Info_UClass_ABala_Mortar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABala_Mortar), 3963642864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Bala_Mortar_h_1817573697(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Bala_Mortar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Bala_Mortar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
