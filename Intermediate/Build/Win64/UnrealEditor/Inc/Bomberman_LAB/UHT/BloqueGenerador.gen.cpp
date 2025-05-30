// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloqueGenerador.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueGenerador() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueGenerador();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueGenerador_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloqueGenerador
void ABloqueGenerador::StaticRegisterNativesABloqueGenerador()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueGenerador);
UClass* Z_Construct_UClass_ABloqueGenerador_NoRegister()
{
	return ABloqueGenerador::StaticClass();
}
struct Z_Construct_UClass_ABloqueGenerador_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueGenerador.h" },
		{ "ModuleRelativePath", "Public/BloqueGenerador.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueGenerador>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueGenerador_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueGenerador_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueGenerador_Statics::ClassParams = {
	&ABloqueGenerador::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueGenerador_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueGenerador_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueGenerador()
{
	if (!Z_Registration_Info_UClass_ABloqueGenerador.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueGenerador.OuterSingleton, Z_Construct_UClass_ABloqueGenerador_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueGenerador.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloqueGenerador>()
{
	return ABloqueGenerador::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueGenerador);
ABloqueGenerador::~ABloqueGenerador() {}
// End Class ABloqueGenerador

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueGenerador_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueGenerador, ABloqueGenerador::StaticClass, TEXT("ABloqueGenerador"), &Z_Registration_Info_UClass_ABloqueGenerador, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueGenerador), 3751551916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueGenerador_h_1761549538(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueGenerador_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueGenerador_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
