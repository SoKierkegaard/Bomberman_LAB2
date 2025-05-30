// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloqueAleatorio.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueAleatorio() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueAleatorio();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueAleatorio_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloqueAleatorio
void ABloqueAleatorio::StaticRegisterNativesABloqueAleatorio()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueAleatorio);
UClass* Z_Construct_UClass_ABloqueAleatorio_NoRegister()
{
	return ABloqueAleatorio::StaticClass();
}
struct Z_Construct_UClass_ABloqueAleatorio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueAleatorio.h" },
		{ "ModuleRelativePath", "Public/BloqueAleatorio.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueAleatorio>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueAleatorio_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAleatorio_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueAleatorio_Statics::ClassParams = {
	&ABloqueAleatorio::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAleatorio_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueAleatorio_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueAleatorio()
{
	if (!Z_Registration_Info_UClass_ABloqueAleatorio.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueAleatorio.OuterSingleton, Z_Construct_UClass_ABloqueAleatorio_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueAleatorio.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloqueAleatorio>()
{
	return ABloqueAleatorio::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueAleatorio);
ABloqueAleatorio::~ABloqueAleatorio() {}
// End Class ABloqueAleatorio

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueAleatorio_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueAleatorio, ABloqueAleatorio::StaticClass, TEXT("ABloqueAleatorio"), &Z_Registration_Info_UClass_ABloqueAleatorio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueAleatorio), 1748794694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueAleatorio_h_2250407995(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueAleatorio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueAleatorio_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
