// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Composite_LAB/Bala_Rifle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBala_Rifle() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABala_Rifle();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABala_Rifle_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABala_Rifle
void ABala_Rifle::StaticRegisterNativesABala_Rifle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABala_Rifle);
UClass* Z_Construct_UClass_ABala_Rifle_NoRegister()
{
	return ABala_Rifle::StaticClass();
}
struct Z_Construct_UClass_ABala_Rifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Composite_LAB/Bala_Rifle.h" },
		{ "ModuleRelativePath", "Composite_LAB/Bala_Rifle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABala_Rifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABala_Rifle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Rifle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABala_Rifle_Statics::ClassParams = {
	&ABala_Rifle::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Rifle_Statics::Class_MetaDataParams), Z_Construct_UClass_ABala_Rifle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABala_Rifle()
{
	if (!Z_Registration_Info_UClass_ABala_Rifle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABala_Rifle.OuterSingleton, Z_Construct_UClass_ABala_Rifle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABala_Rifle.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABala_Rifle>()
{
	return ABala_Rifle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABala_Rifle);
ABala_Rifle::~ABala_Rifle() {}
// End Class ABala_Rifle

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Bala_Rifle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABala_Rifle, ABala_Rifle::StaticClass, TEXT("ABala_Rifle"), &Z_Registration_Info_UClass_ABala_Rifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABala_Rifle), 103794873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Bala_Rifle_h_2936890797(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Bala_Rifle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Bala_Rifle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
