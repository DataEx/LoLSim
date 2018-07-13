// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LeagueSimGameMode.h"
#include "LeagueSimPlayerController.h"
#include "LeagueSimCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALeagueSimGameMode::ALeagueSimGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALeagueSimPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		//DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}