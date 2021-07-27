using UnrealBuildTool;

public class RotFETarget : TargetRules
{
	public RotFETarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "RotFECore" } );
	}
}
