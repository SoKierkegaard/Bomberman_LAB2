// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloqueBurbuja.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBurbuja() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueBurbuja();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIPrototype_Test_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloqueBurbuja
void ABloqueBurbuja::StaticRegisterNativesABloqueBurbuja()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueBurbuja);
UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister()
{
	return ABloqueBurbuja::StaticClass();
}
struct Z_Construct_UClass_ABloqueBurbuja_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueBurbuja.h" },
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intervalo_MetaData[] = {
		{ "Category", "Visibilidad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Intervalo de tiempo entre cambios\n" },
#endif
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intervalo de tiempo entre cambios" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Malla_MetaData[] = {
		{ "Category", "BloqueBurbuja" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intervalo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Malla;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBurbuja>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_Intervalo = { "Intervalo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBurbuja, Intervalo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intervalo_MetaData), NewProp_Intervalo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_Malla = { "Malla", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBurbuja, Malla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Malla_MetaData), NewProp_Malla_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_Intervalo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_Malla,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueBurbuja_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueBurbuja_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPrototype_Test_NoRegister, (int32)VTABLE_OFFSET(ABloqueBurbuja, IIPrototype_Test), false },  // 2594365474
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams = {
	&ABloqueBurbuja::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueBurbuja()
{
	if (!Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton, Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloqueBurbuja>()
{
	return ABloqueBurbuja::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBurbuja);
ABloqueBurbuja::~ABloqueBurbuja() {}
// End Class ABloqueBurbuja

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueBurbuja_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueBurbuja, ABloqueBurbuja::StaticClass, TEXT("ABloqueBurbuja"), &Z_Registration_Info_UClass_ABloqueBurbuja, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueBurbuja), 259808923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueBurbuja_h_4187025973(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueBurbuja_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueBurbuja_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
