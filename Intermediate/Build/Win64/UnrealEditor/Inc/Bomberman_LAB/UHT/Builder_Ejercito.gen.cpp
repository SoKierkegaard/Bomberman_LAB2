// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Builder_Examen/Builder_Ejercito.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder_Ejercito() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABuilder_Ejercito();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABuilder_Ejercito_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIBuilder_Ejercito_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABuilder_Ejercito
void ABuilder_Ejercito::StaticRegisterNativesABuilder_Ejercito()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilder_Ejercito);
UClass* Z_Construct_UClass_ABuilder_Ejercito_NoRegister()
{
	return ABuilder_Ejercito::StaticClass();
}
struct Z_Construct_UClass_ABuilder_Ejercito_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder_Examen/Builder_Ejercito.h" },
		{ "ModuleRelativePath", "Builder_Examen/Builder_Ejercito.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilder_Ejercito>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABuilder_Ejercito_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Ejercito_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilder_Ejercito_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIBuilder_Ejercito_NoRegister, (int32)VTABLE_OFFSET(ABuilder_Ejercito, IIBuilder_Ejercito), false },  // 1393420716
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilder_Ejercito_Statics::ClassParams = {
	&ABuilder_Ejercito::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Ejercito_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuilder_Ejercito_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuilder_Ejercito()
{
	if (!Z_Registration_Info_UClass_ABuilder_Ejercito.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilder_Ejercito.OuterSingleton, Z_Construct_UClass_ABuilder_Ejercito_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuilder_Ejercito.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABuilder_Ejercito>()
{
	return ABuilder_Ejercito::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilder_Ejercito);
ABuilder_Ejercito::~ABuilder_Ejercito() {}
// End Class ABuilder_Ejercito

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Builder_Ejercito_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuilder_Ejercito, ABuilder_Ejercito::StaticClass, TEXT("ABuilder_Ejercito"), &Z_Registration_Info_UClass_ABuilder_Ejercito, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilder_Ejercito), 455842858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Builder_Ejercito_h_817289905(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Builder_Ejercito_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Builder_Ejercito_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
