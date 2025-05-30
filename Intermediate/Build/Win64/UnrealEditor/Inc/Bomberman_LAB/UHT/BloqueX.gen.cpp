// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloqueX.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueX() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueX();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueX_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloqueX
void ABloqueX::StaticRegisterNativesABloqueX()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueX);
UClass* Z_Construct_UClass_ABloqueX_NoRegister()
{
	return ABloqueX::StaticClass();
}
struct Z_Construct_UClass_ABloqueX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueX.h" },
		{ "ModuleRelativePath", "Public/BloqueX.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueX>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueX_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueX_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueX_Statics::ClassParams = {
	&ABloqueX::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueX_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueX_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueX()
{
	if (!Z_Registration_Info_UClass_ABloqueX.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueX.OuterSingleton, Z_Construct_UClass_ABloqueX_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueX.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloqueX>()
{
	return ABloqueX::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueX);
ABloqueX::~ABloqueX() {}
// End Class ABloqueX

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueX_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueX, ABloqueX::StaticClass, TEXT("ABloqueX"), &Z_Registration_Info_UClass_ABloqueX, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueX), 361829551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueX_h_3227082928(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueX_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueX_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
