// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SO5_TestingGroundsEditorTarget : TargetRules
{
	public SO5_TestingGroundsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("SO5_TestingGrounds");
	}
}
