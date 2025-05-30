// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloqueForma.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueForma() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueForma();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueForma_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloqueForma
void ABloqueForma::StaticRegisterNativesABloqueForma()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueForma);
UClass* Z_Construct_UClass_ABloqueForma_NoRegister()
{
	return ABloqueForma::StaticClass();
}
struct Z_Construct_UClass_ABloqueForma_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueForma.h" },
		{ "ModuleRelativePath", "Public/BloqueForma.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueForma>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueForma_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueForma_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueForma_Statics::ClassParams = {
	&ABloqueForma::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueForma_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueForma_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueForma()
{
	if (!Z_Registration_Info_UClass_ABloqueForma.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueForma.OuterSingleton, Z_Construct_UClass_ABloqueForma_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueForma.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloqueForma>()
{
	return ABloqueForma::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueForma);
ABloqueForma::~ABloqueForma() {}
// End Class ABloqueForma

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueForma_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueForma, ABloqueForma::StaticClass, TEXT("ABloqueForma"), &Z_Registration_Info_UClass_ABloqueForma, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueForma), 2411782566U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueForma_h_146805864(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueForma_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueForma_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
