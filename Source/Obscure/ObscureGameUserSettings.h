
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "ObscureGameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class OBSCURE_API UObscureGameUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetFOV(float NewValue);

	UFUNCTION(BlueprintPure)
	float GetFOV() const;

	UFUNCTION(BlueprintCallable)
	static UObscureGameUserSettings* GetObscureGameUserSettings();

protected:
	UPROPERTY(Config)
	float FOV;
};
