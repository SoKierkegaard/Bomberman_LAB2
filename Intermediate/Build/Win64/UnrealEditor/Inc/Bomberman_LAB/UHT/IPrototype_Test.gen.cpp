// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/IPrototype_Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPrototype_Test() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIPrototype_Test();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIPrototype_Test_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Interface UIPrototype_Test
void UIPrototype_Test::StaticRegisterNativesUIPrototype_Test()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIPrototype_Test);
UClass* Z_Construct_UClass_UIPrototype_Test_NoRegister()
{
	return UIPrototype_Test::StaticClass();
}
struct Z_Construct_UClass_UIPrototype_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IPrototype_Test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIPrototype_Test>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIPrototype_Test_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPrototype_Test_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPrototype_Test_Statics::ClassParams = {
	&UIPrototype_Test::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPrototype_Test_Statics::Class_MetaDataParams), Z_Construct_UClass_UIPrototype_Test_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIPrototype_Test()
{
	if (!Z_Registration_Info_UClass_UIPrototype_Test.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPrototype_Test.OuterSingleton, Z_Construct_UClass_UIPrototype_Test_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIPrototype_Test.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<UIPrototype_Test>()
{
	return UIPrototype_Test::StaticClass();
}
UIPrototype_Test::UIPrototype_Test(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIPrototype_Test);
UIPrototype_Test::~UIPrototype_Test() {}
// End Interface UIPrototype_Test

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIPrototype_Test, UIPrototype_Test::StaticClass, TEXT("UIPrototype_Test"), &Z_Registration_Info_UClass_UIPrototype_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPrototype_Test), 2594365474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_3947891402(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
