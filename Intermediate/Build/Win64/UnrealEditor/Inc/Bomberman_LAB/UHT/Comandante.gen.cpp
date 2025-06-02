// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Builder_Examen/Comandante.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComandante() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AComandante();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AComandante_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AComandante
void AComandante::StaticRegisterNativesAComandante()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AComandante);
UClass* Z_Construct_UClass_AComandante_NoRegister()
{
	return AComandante::StaticClass();
}
struct Z_Construct_UClass_AComandante_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder_Examen/Comandante.h" },
		{ "ModuleRelativePath", "Builder_Examen/Comandante.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComandante>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AComandante_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AComandante_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AComandante_Statics::ClassParams = {
	&AComandante::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AComandante_Statics::Class_MetaDataParams), Z_Construct_UClass_AComandante_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AComandante()
{
	if (!Z_Registration_Info_UClass_AComandante.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AComandante.OuterSingleton, Z_Construct_UClass_AComandante_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AComandante.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AComandante>()
{
	return AComandante::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AComandante);
AComandante::~AComandante() {}
// End Class AComandante

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Comandante_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AComandante, AComandante::StaticClass, TEXT("AComandante"), &Z_Registration_Info_UClass_AComandante, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AComandante), 1141381949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Comandante_h_391121809(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Comandante_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Comandante_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
