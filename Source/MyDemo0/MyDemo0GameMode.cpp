// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyDemo0GameMode.h"
#include "MyDemo0Character.h"
#include "UObject/ConstructorHelpers.h"

AMyDemo0GameMode::AMyDemo0GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
