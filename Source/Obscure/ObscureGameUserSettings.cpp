// Fill out your copyright notice in the Description page of Project Settings.


#include "ObscureGameUserSettings.h"


UObscureGameUserSettings::UObscureGameUserSettings(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	FOV = 120.f;
}

void UObscureGameUserSettings::SetFOV(float NewValue)
{
	FOV = NewValue;
}

float UObscureGameUserSettings::GetFOV() const
{
	return FOV;
}

UObscureGameUserSettings* UObscureGameUserSettings::GetObscureGameUserSettings()
{
	return Cast<UObscureGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}
