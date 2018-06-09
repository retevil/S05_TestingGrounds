// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SO5_TestingGroundsTarget : TargetRules
{
	public SO5_TestingGroundsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("SO5_TestingGrounds");
	}
}
