// Copyright Epic Games, Inc. All Rights Reserved.


#include "GeometrySandboxGameModeBase.h"
#include "SandboxPawn.h"
#include "SandboxPlayerController.h"

AGeometrySandboxGameModeBase::AGeometrySandboxGameModeBase()
{
	DefaultPawnClass = ASandboxPawn::StaticClass();

	PlayerControllerClass = ASandboxPlayerController::StaticClass();
}


