// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class TheLastPiece : ModuleRules
{
	public TheLastPiece(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        //bEnableExceptions = true;
        //PublicDefinitions.Add("BOOST_SYSTEM_NOEXCEPT");

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" , "UMG",
                "GameLiftServerSDK",
                "GameSparks",
                "OnlineSubsystem" });

		//PrivateDependencyModuleNames.AddRange(new string[] { "TLPLoadingScreen" });

        PrivateDependencyModuleNames.AddRange(
           new string[] {
                "Slate",
                "SlateCore",
                "MoviePlayer",
                "GameplayAbilities",
                "GameplayTags",
                "GameplayTasks"
           }
       );

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        PrivateDependencyModuleNames.Add("OnlineSubsystem");
        PrivateDependencyModuleNames.Add("OnlineSubsystemGameSparks");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
