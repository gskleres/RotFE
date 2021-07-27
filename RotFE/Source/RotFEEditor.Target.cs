using UnrealBuildTool;

public class RotFEEditorTarget : TargetRules
{
	public RotFEEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "RotFECore" } );
	}
}
