// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject1GameMode.h"
#include "MyProject1Pawn.h"

AMyProject1GameMode::AMyProject1GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AMyProject1Pawn::StaticClass();
}

