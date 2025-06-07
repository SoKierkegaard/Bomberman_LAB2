// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Composite_LAB/CuerpoEnemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCuerpoEnemigo() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ACuerpoEnemigo();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ACuerpoEnemigo_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIPartes_Enemigo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ACuerpoEnemigo
void ACuerpoEnemigo::StaticRegisterNativesACuerpoEnemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACuerpoEnemigo);
UClass* Z_Construct_UClass_ACuerpoEnemigo_NoRegister()
{
	return ACuerpoEnemigo::StaticClass();
}
struct Z_Construct_UClass_ACuerpoEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Composite_LAB/CuerpoEnemigo.h" },
		{ "ModuleRelativePath", "Composite_LAB/CuerpoEnemigo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACuerpoEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACuerpoEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuerpoEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACuerpoEnemigo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPartes_Enemigo_NoRegister, (int32)VTABLE_OFFSET(ACuerpoEnemigo, IIPartes_Enemigo), false },  // 3198075733
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACuerpoEnemigo_Statics::ClassParams = {
	&ACuerpoEnemigo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuerpoEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_ACuerpoEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACuerpoEnemigo()
{
	if (!Z_Registration_Info_UClass_ACuerpoEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACuerpoEnemigo.OuterSingleton, Z_Construct_UClass_ACuerpoEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACuerpoEnemigo.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ACuerpoEnemigo>()
{
	return ACuerpoEnemigo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACuerpoEnemigo);
ACuerpoEnemigo::~ACuerpoEnemigo() {}
// End Class ACuerpoEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_CuerpoEnemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACuerpoEnemigo, ACuerpoEnemigo::StaticClass, TEXT("ACuerpoEnemigo"), &Z_Registration_Info_UClass_ACuerpoEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACuerpoEnemigo), 1757089733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_CuerpoEnemigo_h_3094139458(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_CuerpoEnemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_CuerpoEnemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
