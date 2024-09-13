// Copyright Epic Games, Inc. All Rights Reserved.

#include "CharacterTestingGameMode.h"
#include "CharacterTestingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACharacterTestingGameMode::ACharacterTestingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
