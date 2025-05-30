// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Bomberman_LABGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberman_LABGameMode() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABomberman_LABGameMode();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABomberman_LABGameMode_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABomberman_LABGameMode
void ABomberman_LABGameMode::StaticRegisterNativesABomberman_LABGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberman_LABGameMode);
UClass* Z_Construct_UClass_ABomberman_LABGameMode_NoRegister()
{
	return ABomberman_LABGameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberman_LABGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Bomberman_LABGameMode.h" },
		{ "ModuleRelativePath", "Bomberman_LABGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemigosSpawneados_MetaData[] = {
		{ "ModuleRelativePath", "Bomberman_LABGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemigosSpawneados_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemigosSpawneados;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberman_LABGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberman_LABGameMode_Statics::NewProp_EnemigosSpawneados_Inner = { "EnemigosSpawneados", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberman_LABGameMode_Statics::NewProp_EnemigosSpawneados = { "EnemigosSpawneados", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberman_LABGameMode, EnemigosSpawneados), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemigosSpawneados_MetaData), NewProp_EnemigosSpawneados_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberman_LABGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_LABGameMode_Statics::NewProp_EnemigosSpawneados_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_LABGameMode_Statics::NewProp_EnemigosSpawneados,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_LABGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberman_LABGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_LABGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberman_LABGameMode_Statics::ClassParams = {
	&ABomberman_LABGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABomberman_LABGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_LABGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_LABGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberman_LABGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberman_LABGameMode()
{
	if (!Z_Registration_Info_UClass_ABomberman_LABGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberman_LABGameMode.OuterSingleton, Z_Construct_UClass_ABomberman_LABGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberman_LABGameMode.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABomberman_LABGameMode>()
{
	return ABomberman_LABGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberman_LABGameMode);
ABomberman_LABGameMode::~ABomberman_LABGameMode() {}
// End Class ABomberman_LABGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Bomberman_LABGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberman_LABGameMode, ABomberman_LABGameMode::StaticClass, TEXT("ABomberman_LABGameMode"), &Z_Registration_Info_UClass_ABomberman_LABGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberman_LABGameMode), 3559379674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Bomberman_LABGameMode_h_1331507461(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Bomberman_LABGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Bomberman_LABGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
