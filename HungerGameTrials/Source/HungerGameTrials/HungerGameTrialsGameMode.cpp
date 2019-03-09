// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "HungerGameTrialsGameMode.h"
#include "HungerGameTrialsHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHungerGameTrialsGameMode::AHungerGameTrialsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/Character/Behaviour/BP_Character"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHungerGameTrialsHUD::StaticClass();
}
