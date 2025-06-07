// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Composite_LAB/Mortar_Enemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMortar_Enemigo() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AMortar_Enemigo();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AMortar_Enemigo_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIPartes_Enemigo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AMortar_Enemigo
void AMortar_Enemigo::StaticRegisterNativesAMortar_Enemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMortar_Enemigo);
UClass* Z_Construct_UClass_AMortar_Enemigo_NoRegister()
{
	return AMortar_Enemigo::StaticClass();
}
struct Z_Construct_UClass_AMortar_Enemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Composite_LAB/Mortar_Enemigo.h" },
		{ "ModuleRelativePath", "Composite_LAB/Mortar_Enemigo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMortar_Enemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMortar_Enemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMortar_Enemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMortar_Enemigo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPartes_Enemigo_NoRegister, (int32)VTABLE_OFFSET(AMortar_Enemigo, IIPartes_Enemigo), false },  // 3198075733
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMortar_Enemigo_Statics::ClassParams = {
	&AMortar_Enemigo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMortar_Enemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_AMortar_Enemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMortar_Enemigo()
{
	if (!Z_Registration_Info_UClass_AMortar_Enemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMortar_Enemigo.OuterSingleton, Z_Construct_UClass_AMortar_Enemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMortar_Enemigo.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AMortar_Enemigo>()
{
	return AMortar_Enemigo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMortar_Enemigo);
AMortar_Enemigo::~AMortar_Enemigo() {}
// End Class AMortar_Enemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Mortar_Enemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMortar_Enemigo, AMortar_Enemigo::StaticClass, TEXT("AMortar_Enemigo"), &Z_Registration_Info_UClass_AMortar_Enemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMortar_Enemigo), 416639167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Mortar_Enemigo_h_3431244687(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Mortar_Enemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Mortar_Enemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
