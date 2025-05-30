// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/SteelBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteelBlock() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABasicBlock();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ASteelBlock();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ASteelBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ASteelBlock
void ASteelBlock::StaticRegisterNativesASteelBlock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASteelBlock);
UClass* Z_Construct_UClass_ASteelBlock_NoRegister()
{
	return ASteelBlock::StaticClass();
}
struct Z_Construct_UClass_ASteelBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteelBlock.h" },
		{ "ModuleRelativePath", "Public/SteelBlock.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteelBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASteelBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasicBlock,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteelBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASteelBlock_Statics::ClassParams = {
	&ASteelBlock::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASteelBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_ASteelBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASteelBlock()
{
	if (!Z_Registration_Info_UClass_ASteelBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteelBlock.OuterSingleton, Z_Construct_UClass_ASteelBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASteelBlock.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ASteelBlock>()
{
	return ASteelBlock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASteelBlock);
ASteelBlock::~ASteelBlock() {}
// End Class ASteelBlock

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_SteelBlock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASteelBlock, ASteelBlock::StaticClass, TEXT("ASteelBlock"), &Z_Registration_Info_UClass_ASteelBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteelBlock), 1703969790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_SteelBlock_h_101390730(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_SteelBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_SteelBlock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
