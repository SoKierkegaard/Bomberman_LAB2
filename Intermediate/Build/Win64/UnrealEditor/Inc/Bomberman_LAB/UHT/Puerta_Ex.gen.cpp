// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/Puerta_Ex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuerta_Ex() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_APuerta_Ex();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_APuerta_Ex_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class APuerta_Ex
void APuerta_Ex::StaticRegisterNativesAPuerta_Ex()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuerta_Ex);
UClass* Z_Construct_UClass_APuerta_Ex_NoRegister()
{
	return APuerta_Ex::StaticClass();
}
struct Z_Construct_UClass_APuerta_Ex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Puerta_Ex.h" },
		{ "ModuleRelativePath", "Public/Puerta_Ex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaPuerta_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Puerta_Ex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialActivado_MetaData[] = {
		{ "ModuleRelativePath", "Public/Puerta_Ex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDesactivado_MetaData[] = {
		{ "ModuleRelativePath", "Public/Puerta_Ex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaPuerta;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialActivado;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialDesactivado;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuerta_Ex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuerta_Ex_Statics::NewProp_MallaPuerta = { "MallaPuerta", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuerta_Ex, MallaPuerta), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaPuerta_MetaData), NewProp_MallaPuerta_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuerta_Ex_Statics::NewProp_MaterialActivado = { "MaterialActivado", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuerta_Ex, MaterialActivado), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialActivado_MetaData), NewProp_MaterialActivado_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuerta_Ex_Statics::NewProp_MaterialDesactivado = { "MaterialDesactivado", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuerta_Ex, MaterialDesactivado), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDesactivado_MetaData), NewProp_MaterialDesactivado_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuerta_Ex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuerta_Ex_Statics::NewProp_MallaPuerta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuerta_Ex_Statics::NewProp_MaterialActivado,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuerta_Ex_Statics::NewProp_MaterialDesactivado,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Ex_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APuerta_Ex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Ex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APuerta_Ex_Statics::ClassParams = {
	&APuerta_Ex::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APuerta_Ex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Ex_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Ex_Statics::Class_MetaDataParams), Z_Construct_UClass_APuerta_Ex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APuerta_Ex()
{
	if (!Z_Registration_Info_UClass_APuerta_Ex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuerta_Ex.OuterSingleton, Z_Construct_UClass_APuerta_Ex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APuerta_Ex.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<APuerta_Ex>()
{
	return APuerta_Ex::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APuerta_Ex);
APuerta_Ex::~APuerta_Ex() {}
// End Class APuerta_Ex

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Puerta_Ex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APuerta_Ex, APuerta_Ex::StaticClass, TEXT("APuerta_Ex"), &Z_Registration_Info_UClass_APuerta_Ex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuerta_Ex), 1515225886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Puerta_Ex_h_2666626409(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Puerta_Ex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Puerta_Ex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
