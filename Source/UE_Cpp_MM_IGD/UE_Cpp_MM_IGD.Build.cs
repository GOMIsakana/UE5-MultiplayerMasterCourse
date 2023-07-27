// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_Cpp_MM_IGD : ModuleRules
{
	public UE_Cpp_MM_IGD(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
