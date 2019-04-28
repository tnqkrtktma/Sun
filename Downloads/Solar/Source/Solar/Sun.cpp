// Fill out your copyright notice in the Description page of Project Settings.

#include "Solar.h"
#include "Sun.h"
USun::USun()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void USun::BeginPlay()
{
	Super::BeginPlay();
}
void Tick(float Deltatime)
{
}