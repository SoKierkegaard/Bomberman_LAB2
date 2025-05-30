// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloqueDestructible.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueDestructible() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueDestructible();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueDestructible_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AFabricaBloquesTest();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloqueDestructible
void ABloqueDestructible::StaticRegisterNativesABloqueDestructible()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueDestructible);
UClass* Z_Construct_UClass_ABloqueDestructible_NoRegister()
{
	return ABloqueDestructible::StaticClass();
}
struct Z_Construct_UClass_ABloqueDestructible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueDestructible.h" },
		{ "ModuleRelativePath", "Public/BloqueDestructible.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueDestructible>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueDestructible_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFabricaBloquesTest,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueDestructible_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueDestructible_Statics::ClassParams = {
	&ABloqueDestructible::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueDestructible_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueDestructible_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueDestructible()
{
	if (!Z_Registration_Info_UClass_ABloqueDestructible.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueDestructible.OuterSingleton, Z_Construct_UClass_ABloqueDestructible_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueDestructible.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloqueDestructible>()
{
	return ABloqueDestructible::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueDestructible);
ABloqueDestructible::~ABloqueDestructible() {}
// End Class ABloqueDestructible

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueDestructible_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueDestructible, ABloqueDestructible::StaticClass, TEXT("ABloqueDestructible"), &Z_Registration_Info_UClass_ABloqueDestructible, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueDestructible), 151325521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueDestructible_h_1657112650(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueDestructible_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueDestructible_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
