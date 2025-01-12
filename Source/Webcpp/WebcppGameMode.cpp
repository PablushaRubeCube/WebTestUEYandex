// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "WebcppGameMode.h"
#include "WebcppCharacter.h"

void AWebcppGameMode::StartPlay()
{
	Super::StartPlay();
	UE_LOG(LogTemp, Display, TEXT("________StartPlay_______"));

#if PLATFORM_HTML5
	EM_ASM({
		console.log('ShowAd called from C++!');
	ShowAdv();
		});
#else
	// Здесь можно разместить код для других платформ или пустой блок.
#endif
}

AWebcppGameMode::AWebcppGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AWebcppCharacter::StaticClass();
}
