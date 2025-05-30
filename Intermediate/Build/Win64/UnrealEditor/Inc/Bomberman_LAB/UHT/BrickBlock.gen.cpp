// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BrickBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrickBlock() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABasicBlock();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABrickBlock();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABrickBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABrickBlock
void ABrickBlock::StaticRegisterNativesABrickBlock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABrickBlock);
UClass* Z_Construct_UClass_ABrickBlock_NoRegister()
{
	return ABrickBlock::StaticClass();
}
struct Z_Construct_UClass_ABrickBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BrickBlock.h" },
		{ "ModuleRelativePath", "Public/BrickBlock.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrickBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABrickBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasicBlock,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABrickBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABrickBlock_Statics::ClassParams = {
	&ABrickBlock::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABrickBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_ABrickBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABrickBlock()
{
	if (!Z_Registration_Info_UClass_ABrickBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABrickBlock.OuterSingleton, Z_Construct_UClass_ABrickBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABrickBlock.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABrickBlock>()
{
	return ABrickBlock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABrickBlock);
ABrickBlock::~ABrickBlock() {}
// End Class ABrickBlock

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BrickBlock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABrickBlock, ABrickBlock::StaticClass, TEXT("ABrickBlock"), &Z_Registration_Info_UClass_ABrickBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABrickBlock), 1981572722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BrickBlock_h_2845790818(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BrickBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BrickBlock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
