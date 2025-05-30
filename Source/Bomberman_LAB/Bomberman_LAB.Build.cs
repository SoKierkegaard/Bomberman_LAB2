// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Bomberman_LAB : ModuleRules
{
	public Bomberman_LAB(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
