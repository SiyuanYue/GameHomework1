// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyDemo0 : ModuleRules
{
	public MyDemo0(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
