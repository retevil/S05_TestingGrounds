// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SO5_TestingGroundsHUD.generated.h"

UCLASS()
class ASO5_TestingGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASO5_TestingGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

