// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SurvivalHorrorGameMode.h"
#include "SurvivalHorrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASurvivalHorrorGameMode::ASurvivalHorrorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Character/Player/Ada/Ada"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
