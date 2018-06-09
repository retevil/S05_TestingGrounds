// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SO5_TestingGroundsGameMode.h"
#include "SO5_TestingGroundsHUD.h"
#include "SO5_TestingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASO5_TestingGroundsGameMode::ASO5_TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASO5_TestingGroundsHUD::StaticClass();
}
