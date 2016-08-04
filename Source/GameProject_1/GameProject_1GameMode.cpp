// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "GameProject_1.h"
#include "GameProject_1GameMode.h"
#include "GameProject_1Character.h"

AGameProject_1GameMode::AGameProject_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
