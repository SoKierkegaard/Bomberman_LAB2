// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/EnemigoSubterraneo2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoSubterraneo2() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AEnemigoSubterraneo2();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AEnemigoSubterraneo2_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AEnemigoSubterraneo2
void AEnemigoSubterraneo2::StaticRegisterNativesAEnemigoSubterraneo2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoSubterraneo2);
UClass* Z_Construct_UClass_AEnemigoSubterraneo2_NoRegister()
{
	return AEnemigoSubterraneo2::StaticClass();
}
struct Z_Construct_UClass_AEnemigoSubterraneo2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoSubterraneo2.h" },
		{ "ModuleRelativePath", "Public/EnemigoSubterraneo2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoSubterraneo2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoSubterraneo2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubterraneo2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoSubterraneo2_Statics::ClassParams = {
	&AEnemigoSubterraneo2::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubterraneo2_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoSubterraneo2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoSubterraneo2()
{
	if (!Z_Registration_Info_UClass_AEnemigoSubterraneo2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoSubterraneo2.OuterSingleton, Z_Construct_UClass_AEnemigoSubterraneo2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoSubterraneo2.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AEnemigoSubterraneo2>()
{
	return AEnemigoSubterraneo2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoSubterraneo2);
AEnemigoSubterraneo2::~AEnemigoSubterraneo2() {}
// End Class AEnemigoSubterraneo2

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_EnemigoSubterraneo2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoSubterraneo2, AEnemigoSubterraneo2::StaticClass, TEXT("AEnemigoSubterraneo2"), &Z_Registration_Info_UClass_AEnemigoSubterraneo2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoSubterraneo2), 110720338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_EnemigoSubterraneo2_h_3634762217(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_EnemigoSubterraneo2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_EnemigoSubterraneo2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
