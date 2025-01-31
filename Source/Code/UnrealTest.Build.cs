// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealTest : ModuleRules
{
	public UnrealTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		
		PublicIncludePaths.AddRange(new string[] {
			"UnrealTest" // Organizes the project into folders
		});
		
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"HeadMountedDisplay",
			"OnlineSubsystem",
			"OnlineSubsystemUtils",
			"GameplayAbilities",
			"GameplayTags", 
			"GameplayTasks"
		});
		
		PrivateDependencyModuleNames.AddRange(new string[]
		{
		});
	}
}
