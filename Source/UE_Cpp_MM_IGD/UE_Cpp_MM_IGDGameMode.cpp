// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_Cpp_MM_IGDGameMode.h"
#include "UE_Cpp_MM_IGDCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_Cpp_MM_IGDGameMode::AUE_Cpp_MM_IGDGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
