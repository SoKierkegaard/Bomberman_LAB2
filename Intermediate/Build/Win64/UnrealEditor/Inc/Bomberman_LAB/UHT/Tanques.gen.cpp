// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Builder_Examen/Tanques.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTanques() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ATanques();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ATanques_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ATanques
void ATanques::StaticRegisterNativesATanques()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATanques);
UClass* Z_Construct_UClass_ATanques_NoRegister()
{
	return ATanques::StaticClass();
}
struct Z_Construct_UClass_ATanques_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder_Examen/Tanques.h" },
		{ "ModuleRelativePath", "Builder_Examen/Tanques.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATanques>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATanques_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATanques_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATanques_Statics::ClassParams = {
	&ATanques::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATanques_Statics::Class_MetaDataParams), Z_Construct_UClass_ATanques_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATanques()
{
	if (!Z_Registration_Info_UClass_ATanques.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATanques.OuterSingleton, Z_Construct_UClass_ATanques_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATanques.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ATanques>()
{
	return ATanques::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATanques);
ATanques::~ATanques() {}
// End Class ATanques

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Tanques_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATanques, ATanques::StaticClass, TEXT("ATanques"), &Z_Registration_Info_UClass_ATanques, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATanques), 2907672650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Tanques_h_4222471455(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Tanques_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Tanques_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
