// Copyright Epic Games, Inc. All Rights Reserved.

#include "Trigger3GameMode.h"
#include "Trigger3Character.h"
#include "UObject/ConstructorHelpers.h"

ATrigger3GameMode::ATrigger3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

}
