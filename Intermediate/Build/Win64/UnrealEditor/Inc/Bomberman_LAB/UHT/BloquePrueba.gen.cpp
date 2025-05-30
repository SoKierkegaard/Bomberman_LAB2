// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloquePrueba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloquePrueba() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloquePrueba();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloquePrueba_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloquePrueba
void ABloquePrueba::StaticRegisterNativesABloquePrueba()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloquePrueba);
UClass* Z_Construct_UClass_ABloquePrueba_NoRegister()
{
	return ABloquePrueba::StaticClass();
}
struct Z_Construct_UClass_ABloquePrueba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloquePrueba.h" },
		{ "ModuleRelativePath", "Public/BloquePrueba.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloquePrueba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloquePrueba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquePrueba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloquePrueba_Statics::ClassParams = {
	&ABloquePrueba::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquePrueba_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloquePrueba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloquePrueba()
{
	if (!Z_Registration_Info_UClass_ABloquePrueba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloquePrueba.OuterSingleton, Z_Construct_UClass_ABloquePrueba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloquePrueba.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloquePrueba>()
{
	return ABloquePrueba::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloquePrueba);
ABloquePrueba::~ABloquePrueba() {}
// End Class ABloquePrueba

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloquePrueba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloquePrueba, ABloquePrueba::StaticClass, TEXT("ABloquePrueba"), &Z_Registration_Info_UClass_ABloquePrueba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloquePrueba), 3498078353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloquePrueba_h_278183930(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloquePrueba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloquePrueba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
