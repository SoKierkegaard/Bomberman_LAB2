// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Composite_LAB/Rifle_Enemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifle_Enemigo() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ARifle_Enemigo();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ARifle_Enemigo_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIPartes_Enemigo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ARifle_Enemigo
void ARifle_Enemigo::StaticRegisterNativesARifle_Enemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARifle_Enemigo);
UClass* Z_Construct_UClass_ARifle_Enemigo_NoRegister()
{
	return ARifle_Enemigo::StaticClass();
}
struct Z_Construct_UClass_ARifle_Enemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Composite_LAB/Rifle_Enemigo.h" },
		{ "ModuleRelativePath", "Composite_LAB/Rifle_Enemigo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARifle_Enemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARifle_Enemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Enemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARifle_Enemigo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPartes_Enemigo_NoRegister, (int32)VTABLE_OFFSET(ARifle_Enemigo, IIPartes_Enemigo), false },  // 3198075733
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARifle_Enemigo_Statics::ClassParams = {
	&ARifle_Enemigo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Enemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_ARifle_Enemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARifle_Enemigo()
{
	if (!Z_Registration_Info_UClass_ARifle_Enemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARifle_Enemigo.OuterSingleton, Z_Construct_UClass_ARifle_Enemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARifle_Enemigo.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ARifle_Enemigo>()
{
	return ARifle_Enemigo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARifle_Enemigo);
ARifle_Enemigo::~ARifle_Enemigo() {}
// End Class ARifle_Enemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Rifle_Enemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARifle_Enemigo, ARifle_Enemigo::StaticClass, TEXT("ARifle_Enemigo"), &Z_Registration_Info_UClass_ARifle_Enemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARifle_Enemigo), 3529945073U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Rifle_Enemigo_h_858008049(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Rifle_Enemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Rifle_Enemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
