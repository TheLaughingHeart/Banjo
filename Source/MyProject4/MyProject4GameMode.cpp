// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MyProject4GameMode.h"
#include "MyProject4Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject4GameMode::AMyProject4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
