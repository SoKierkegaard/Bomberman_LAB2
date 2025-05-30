// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloqueExplosivo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueExplosivo() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueExplosivo();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueExplosivo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloqueExplosivo
void ABloqueExplosivo::StaticRegisterNativesABloqueExplosivo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueExplosivo);
UClass* Z_Construct_UClass_ABloqueExplosivo_NoRegister()
{
	return ABloqueExplosivo::StaticClass();
}
struct Z_Construct_UClass_ABloqueExplosivo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "BloqueExplosivo.h" },
		{ "ModuleRelativePath", "Public/BloqueExplosivo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "Efectos" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//esta funcion activa la explosion\n" },
#endif
		{ "ModuleRelativePath", "Public/BloqueExplosivo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "esta funcion activa la explosion" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueExplosivo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueExplosivo_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueExplosivo, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionEffect_MetaData), NewProp_ExplosionEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueExplosivo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueExplosivo_Statics::NewProp_ExplosionEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueExplosivo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueExplosivo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueExplosivo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueExplosivo_Statics::ClassParams = {
	&ABloqueExplosivo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueExplosivo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueExplosivo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueExplosivo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueExplosivo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueExplosivo()
{
	if (!Z_Registration_Info_UClass_ABloqueExplosivo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueExplosivo.OuterSingleton, Z_Construct_UClass_ABloqueExplosivo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueExplosivo.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloqueExplosivo>()
{
	return ABloqueExplosivo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueExplosivo);
ABloqueExplosivo::~ABloqueExplosivo() {}
// End Class ABloqueExplosivo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueExplosivo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueExplosivo, ABloqueExplosivo::StaticClass, TEXT("ABloqueExplosivo"), &Z_Registration_Info_UClass_ABloqueExplosivo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueExplosivo), 1200196320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueExplosivo_h_2205930467(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueExplosivo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueExplosivo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
