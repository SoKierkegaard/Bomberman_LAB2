// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/EnemigoLaberintoX.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoLaberintoX() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AEnemigoLaberintoX();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AEnemigoLaberintoX_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AEnemigoLaberintoX
void AEnemigoLaberintoX::StaticRegisterNativesAEnemigoLaberintoX()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoLaberintoX);
UClass* Z_Construct_UClass_AEnemigoLaberintoX_NoRegister()
{
	return AEnemigoLaberintoX::StaticClass();
}
struct Z_Construct_UClass_AEnemigoLaberintoX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoLaberintoX.h" },
		{ "ModuleRelativePath", "Public/EnemigoLaberintoX.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaEnemigo_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemigoLaberintoX.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaEnemigo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoLaberintoX>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoLaberintoX_Statics::NewProp_MallaEnemigo = { "MallaEnemigo", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoLaberintoX, MallaEnemigo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaEnemigo_MetaData), NewProp_MallaEnemigo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoLaberintoX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoLaberintoX_Statics::NewProp_MallaEnemigo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoLaberintoX_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigoLaberintoX_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoLaberintoX_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoLaberintoX_Statics::ClassParams = {
	&AEnemigoLaberintoX::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemigoLaberintoX_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoLaberintoX_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoLaberintoX_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoLaberintoX_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoLaberintoX()
{
	if (!Z_Registration_Info_UClass_AEnemigoLaberintoX.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoLaberintoX.OuterSingleton, Z_Construct_UClass_AEnemigoLaberintoX_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoLaberintoX.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AEnemigoLaberintoX>()
{
	return AEnemigoLaberintoX::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoLaberintoX);
AEnemigoLaberintoX::~AEnemigoLaberintoX() {}
// End Class AEnemigoLaberintoX

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_EnemigoLaberintoX_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoLaberintoX, AEnemigoLaberintoX::StaticClass, TEXT("AEnemigoLaberintoX"), &Z_Registration_Info_UClass_AEnemigoLaberintoX, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoLaberintoX), 3872467633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_EnemigoLaberintoX_h_1010893580(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_EnemigoLaberintoX_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_EnemigoLaberintoX_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
