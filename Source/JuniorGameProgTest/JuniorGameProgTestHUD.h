// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "JuniorGameProgTestHUD.generated.h"

UCLASS()
class AJuniorGameProgTestHUD : public AHUD
{
	GENERATED_BODY()

public:
	AJuniorGameProgTestHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

