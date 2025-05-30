// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/Facade_Main.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacade_Main() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AFacade_Main();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AFacade_Main_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AFacade_Main
void AFacade_Main::StaticRegisterNativesAFacade_Main()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFacade_Main);
UClass* Z_Construct_UClass_AFacade_Main_NoRegister()
{
	return AFacade_Main::StaticClass();
}
struct Z_Construct_UClass_AFacade_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Facade_Main.h" },
		{ "ModuleRelativePath", "Public/Facade_Main.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacade_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFacade_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFacade_Main_Statics::ClassParams = {
	&AFacade_Main::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_AFacade_Main_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFacade_Main()
{
	if (!Z_Registration_Info_UClass_AFacade_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFacade_Main.OuterSingleton, Z_Construct_UClass_AFacade_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFacade_Main.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AFacade_Main>()
{
	return AFacade_Main::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFacade_Main);
AFacade_Main::~AFacade_Main() {}
// End Class AFacade_Main

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Facade_Main_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFacade_Main, AFacade_Main::StaticClass, TEXT("AFacade_Main"), &Z_Registration_Info_UClass_AFacade_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFacade_Main), 544744178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Facade_Main_h_2027979020(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Facade_Main_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Facade_Main_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
