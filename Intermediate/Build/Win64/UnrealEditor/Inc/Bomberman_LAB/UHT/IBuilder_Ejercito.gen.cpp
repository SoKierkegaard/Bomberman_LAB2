// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Builder_Examen/IBuilder_Ejercito.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBuilder_Ejercito() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIBuilder_Ejercito();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIBuilder_Ejercito_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Interface UIBuilder_Ejercito
void UIBuilder_Ejercito::StaticRegisterNativesUIBuilder_Ejercito()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIBuilder_Ejercito);
UClass* Z_Construct_UClass_UIBuilder_Ejercito_NoRegister()
{
	return UIBuilder_Ejercito::StaticClass();
}
struct Z_Construct_UClass_UIBuilder_Ejercito_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Builder_Examen/IBuilder_Ejercito.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIBuilder_Ejercito>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIBuilder_Ejercito_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIBuilder_Ejercito_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIBuilder_Ejercito_Statics::ClassParams = {
	&UIBuilder_Ejercito::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIBuilder_Ejercito_Statics::Class_MetaDataParams), Z_Construct_UClass_UIBuilder_Ejercito_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIBuilder_Ejercito()
{
	if (!Z_Registration_Info_UClass_UIBuilder_Ejercito.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIBuilder_Ejercito.OuterSingleton, Z_Construct_UClass_UIBuilder_Ejercito_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIBuilder_Ejercito.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<UIBuilder_Ejercito>()
{
	return UIBuilder_Ejercito::StaticClass();
}
UIBuilder_Ejercito::UIBuilder_Ejercito(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIBuilder_Ejercito);
UIBuilder_Ejercito::~UIBuilder_Ejercito() {}
// End Interface UIBuilder_Ejercito

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_IBuilder_Ejercito_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIBuilder_Ejercito, UIBuilder_Ejercito::StaticClass, TEXT("UIBuilder_Ejercito"), &Z_Registration_Info_UClass_UIBuilder_Ejercito, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIBuilder_Ejercito), 1393420716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_IBuilder_Ejercito_h_3402712843(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_IBuilder_Ejercito_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_IBuilder_Ejercito_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
