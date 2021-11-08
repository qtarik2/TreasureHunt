// Copyright Epic Games, Inc. All Rights Reserved.

#include "JuniorGameProgTestGameMode.h"
#include "JuniorGameProgTestHUD.h"
#include "JuniorGameProgTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJuniorGameProgTestGameMode::AJuniorGameProgTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AJuniorGameProgTestHUD::StaticClass();
}
