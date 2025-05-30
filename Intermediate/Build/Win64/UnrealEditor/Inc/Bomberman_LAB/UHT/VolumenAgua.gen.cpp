// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/VolumenAgua.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumenAgua() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AVolumenAgua();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AVolumenAgua_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AVolumenAgua
void AVolumenAgua::StaticRegisterNativesAVolumenAgua()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVolumenAgua);
UClass* Z_Construct_UClass_AVolumenAgua_NoRegister()
{
	return AVolumenAgua::StaticClass();
}
struct Z_Construct_UClass_AVolumenAgua_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VolumenAgua.h" },
		{ "ModuleRelativePath", "Public/VolumenAgua.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVolumenAgua>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVolumenAgua_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumenAgua_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVolumenAgua_Statics::ClassParams = {
	&AVolumenAgua::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumenAgua_Statics::Class_MetaDataParams), Z_Construct_UClass_AVolumenAgua_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVolumenAgua()
{
	if (!Z_Registration_Info_UClass_AVolumenAgua.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVolumenAgua.OuterSingleton, Z_Construct_UClass_AVolumenAgua_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVolumenAgua.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AVolumenAgua>()
{
	return AVolumenAgua::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVolumenAgua);
AVolumenAgua::~AVolumenAgua() {}
// End Class AVolumenAgua

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_VolumenAgua_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVolumenAgua, AVolumenAgua::StaticClass, TEXT("AVolumenAgua"), &Z_Registration_Info_UClass_AVolumenAgua, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVolumenAgua), 3812722697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_VolumenAgua_h_2604012042(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_VolumenAgua_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_VolumenAgua_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
