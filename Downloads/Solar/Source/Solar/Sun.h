// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/DirectionalLightComponent.h"
#include "Sun.generated.h"

/**
 * 
 */
UCLASS()
class SOLAR_API USun : public UDirectionalLightComponent
{
	GENERATED_BODY()
public:
	USun();
protected:
	virtual void BeginPlay() override;
};
