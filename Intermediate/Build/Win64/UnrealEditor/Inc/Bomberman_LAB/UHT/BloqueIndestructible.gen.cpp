// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloqueIndestructible.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueIndestructible() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueIndestructible();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueIndestructible_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AFabricaBloquesTest();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloqueIndestructible
void ABloqueIndestructible::StaticRegisterNativesABloqueIndestructible()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueIndestructible);
UClass* Z_Construct_UClass_ABloqueIndestructible_NoRegister()
{
	return ABloqueIndestructible::StaticClass();
}
struct Z_Construct_UClass_ABloqueIndestructible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueIndestructible.h" },
		{ "ModuleRelativePath", "Public/BloqueIndestructible.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueIndestructible>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueIndestructible_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFabricaBloquesTest,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueIndestructible_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueIndestructible_Statics::ClassParams = {
	&ABloqueIndestructible::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueIndestructible_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueIndestructible_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueIndestructible()
{
	if (!Z_Registration_Info_UClass_ABloqueIndestructible.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueIndestructible.OuterSingleton, Z_Construct_UClass_ABloqueIndestructible_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueIndestructible.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloqueIndestructible>()
{
	return ABloqueIndestructible::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueIndestructible);
ABloqueIndestructible::~ABloqueIndestructible() {}
// End Class ABloqueIndestructible

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueIndestructible_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueIndestructible, ABloqueIndestructible::StaticClass, TEXT("ABloqueIndestructible"), &Z_Registration_Info_UClass_ABloqueIndestructible, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueIndestructible), 1809261620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueIndestructible_h_2288593634(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueIndestructible_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueIndestructible_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
