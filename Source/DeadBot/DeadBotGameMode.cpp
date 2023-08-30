// Copyright Epic Games, Inc. All Rights Reserved.

#include "DeadBotGameMode.h"
#include "DeadBotCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADeadBotGameMode::ADeadBotGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
