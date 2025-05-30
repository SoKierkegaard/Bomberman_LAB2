// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/WoodBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWoodBlock() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABasicBlock();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AWoodBlock();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AWoodBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AWoodBlock
void AWoodBlock::StaticRegisterNativesAWoodBlock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWoodBlock);
UClass* Z_Construct_UClass_AWoodBlock_NoRegister()
{
	return AWoodBlock::StaticClass();
}
struct Z_Construct_UClass_AWoodBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WoodBlock.h" },
		{ "ModuleRelativePath", "Public/WoodBlock.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWoodBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWoodBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasicBlock,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWoodBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWoodBlock_Statics::ClassParams = {
	&AWoodBlock::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWoodBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_AWoodBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWoodBlock()
{
	if (!Z_Registration_Info_UClass_AWoodBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWoodBlock.OuterSingleton, Z_Construct_UClass_AWoodBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWoodBlock.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AWoodBlock>()
{
	return AWoodBlock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWoodBlock);
AWoodBlock::~AWoodBlock() {}
// End Class AWoodBlock

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_WoodBlock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWoodBlock, AWoodBlock::StaticClass, TEXT("AWoodBlock"), &Z_Registration_Info_UClass_AWoodBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWoodBlock), 2483265740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_WoodBlock_h_2198980213(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_WoodBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_WoodBlock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
