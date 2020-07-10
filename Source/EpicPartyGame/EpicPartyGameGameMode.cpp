// Copyright Epic Games, Inc. All Rights Reserved.

#include "EpicPartyGameGameMode.h"
#include "EpicPartyGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEpicPartyGameGameMode::AEpicPartyGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
