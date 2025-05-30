// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloqueRandom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueRandom() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueRandom();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueRandom_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloqueRandom
void ABloqueRandom::StaticRegisterNativesABloqueRandom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueRandom);
UClass* Z_Construct_UClass_ABloqueRandom_NoRegister()
{
	return ABloqueRandom::StaticClass();
}
struct Z_Construct_UClass_ABloqueRandom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "BloqueRandom.h" },
		{ "ModuleRelativePath", "Public/BloqueRandom.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueRandom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueRandom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueRandom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueRandom_Statics::ClassParams = {
	&ABloqueRandom::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueRandom_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueRandom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueRandom()
{
	if (!Z_Registration_Info_UClass_ABloqueRandom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueRandom.OuterSingleton, Z_Construct_UClass_ABloqueRandom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueRandom.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloqueRandom>()
{
	return ABloqueRandom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueRandom);
ABloqueRandom::~ABloqueRandom() {}
// End Class ABloqueRandom

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueRandom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueRandom, ABloqueRandom::StaticClass, TEXT("ABloqueRandom"), &Z_Registration_Info_UClass_ABloqueRandom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueRandom), 1280630189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueRandom_h_4106705988(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueRandom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueRandom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
