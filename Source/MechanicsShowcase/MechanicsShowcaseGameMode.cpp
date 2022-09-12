// Copyright Epic Games, Inc. All Rights Reserved.

#include "MechanicsShowcaseGameMode.h"
#include "MechanicsShowcaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMechanicsShowcaseGameMode::AMechanicsShowcaseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
