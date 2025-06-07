// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Composite_LAB/IPartes_Enemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPartes_Enemigo() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIPartes_Enemigo();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIPartes_Enemigo_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Interface UIPartes_Enemigo
void UIPartes_Enemigo::StaticRegisterNativesUIPartes_Enemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIPartes_Enemigo);
UClass* Z_Construct_UClass_UIPartes_Enemigo_NoRegister()
{
	return UIPartes_Enemigo::StaticClass();
}
struct Z_Construct_UClass_UIPartes_Enemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Composite_LAB/IPartes_Enemigo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIPartes_Enemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIPartes_Enemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPartes_Enemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPartes_Enemigo_Statics::ClassParams = {
	&UIPartes_Enemigo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPartes_Enemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_UIPartes_Enemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIPartes_Enemigo()
{
	if (!Z_Registration_Info_UClass_UIPartes_Enemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPartes_Enemigo.OuterSingleton, Z_Construct_UClass_UIPartes_Enemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIPartes_Enemigo.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<UIPartes_Enemigo>()
{
	return UIPartes_Enemigo::StaticClass();
}
UIPartes_Enemigo::UIPartes_Enemigo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIPartes_Enemigo);
UIPartes_Enemigo::~UIPartes_Enemigo() {}
// End Interface UIPartes_Enemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_IPartes_Enemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIPartes_Enemigo, UIPartes_Enemigo::StaticClass, TEXT("UIPartes_Enemigo"), &Z_Registration_Info_UClass_UIPartes_Enemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPartes_Enemigo), 3198075733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_IPartes_Enemigo_h_4203296008(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_IPartes_Enemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_IPartes_Enemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
