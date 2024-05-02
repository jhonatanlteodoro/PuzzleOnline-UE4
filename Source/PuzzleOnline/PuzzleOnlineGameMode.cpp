// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzleOnlineGameMode.h"
#include "PuzzleOnlineCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzleOnlineGameMode::APuzzleOnlineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
