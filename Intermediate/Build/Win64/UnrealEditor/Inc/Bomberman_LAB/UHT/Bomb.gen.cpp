// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/Bomb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomb() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABomb();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABomb_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABomb
void ABomb::StaticRegisterNativesABomb()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomb);
UClass* Z_Construct_UClass_ABomb_NoRegister()
{
	return ABomb::StaticClass();
}
struct Z_Construct_UClass_ABomb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bomb.h" },
		{ "ModuleRelativePath", "Public/Bomb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaBomb_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bomb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bomb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaBomb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomb_Statics::NewProp_MallaBomb = { "MallaBomb", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomb, MallaBomb), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaBomb_MetaData), NewProp_MallaBomb_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomb_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomb, Instance), Z_Construct_UClass_ABomb_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomb_Statics::NewProp_MallaBomb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomb_Statics::NewProp_Instance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomb_Statics::ClassParams = {
	&ABomb::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABomb_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomb_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomb()
{
	if (!Z_Registration_Info_UClass_ABomb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomb.OuterSingleton, Z_Construct_UClass_ABomb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomb.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABomb>()
{
	return ABomb::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomb);
ABomb::~ABomb() {}
// End Class ABomb

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Bomb_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomb, ABomb::StaticClass, TEXT("ABomb"), &Z_Registration_Info_UClass_ABomb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomb), 2604130483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Bomb_h_2156377215(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Bomb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Bomb_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
