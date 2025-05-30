// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloqueAleatorio_Ex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueAleatorio_Ex() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueAleatorio_Ex();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueAleatorio_Ex_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloqueAleatorio_Ex
void ABloqueAleatorio_Ex::StaticRegisterNativesABloqueAleatorio_Ex()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueAleatorio_Ex);
UClass* Z_Construct_UClass_ABloqueAleatorio_Ex_NoRegister()
{
	return ABloqueAleatorio_Ex::StaticClass();
}
struct Z_Construct_UClass_ABloqueAleatorio_Ex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueAleatorio_Ex.h" },
		{ "ModuleRelativePath", "Public/BloqueAleatorio_Ex.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueAleatorio_Ex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueAleatorio_Ex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAleatorio_Ex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueAleatorio_Ex_Statics::ClassParams = {
	&ABloqueAleatorio_Ex::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAleatorio_Ex_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueAleatorio_Ex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueAleatorio_Ex()
{
	if (!Z_Registration_Info_UClass_ABloqueAleatorio_Ex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueAleatorio_Ex.OuterSingleton, Z_Construct_UClass_ABloqueAleatorio_Ex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueAleatorio_Ex.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloqueAleatorio_Ex>()
{
	return ABloqueAleatorio_Ex::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueAleatorio_Ex);
ABloqueAleatorio_Ex::~ABloqueAleatorio_Ex() {}
// End Class ABloqueAleatorio_Ex

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueAleatorio_Ex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueAleatorio_Ex, ABloqueAleatorio_Ex::StaticClass, TEXT("ABloqueAleatorio_Ex"), &Z_Registration_Info_UClass_ABloqueAleatorio_Ex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueAleatorio_Ex), 4137392605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueAleatorio_Ex_h_1385475773(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueAleatorio_Ex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueAleatorio_Ex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
