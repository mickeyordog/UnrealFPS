// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealFPSGameMode.h"
#include "UnrealFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealFPSGameMode::AUnrealFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
