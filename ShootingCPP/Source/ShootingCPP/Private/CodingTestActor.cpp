﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "CodingTestActor.h"

// Sets default values
ACodingTestActor::ACodingTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACodingTestActor::BeginPlay()
{
	Super::BeginPlay();

	/*UE_LOG(LogTemp, Warning, TEXT("Hello World!"));
	UE_LOG(LogTemp, Warning, TEXT("%d"), number1);
	UE_LOG(LogTemp, Warning, TEXT("%.2f"), number2);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *name);*/

	/*int32 result = Add(number1, number2);
	UE_LOG(LogTemp, Warning, TEXT("%d"), result);*/

	/*if (number1 >= 100)
	{
		UE_LOG(LogTemp, Warning, TEXT("number1값이 100보다 크다"));
	}
	else if (number1 >= 10)
	{
		UE_LOG(LogTemp, Warning, TEXT("number1값이 10이상 100 미만"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("number1값이 10 미만"));
	}

	if (isReady)
	{
		int32 result = Add(number1, number2);
		UE_LOG(LogTemp, Warning, TEXT("%d"), result);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("없음"));
	}*/

	for (int32 i = 0; i < 100; i++)
	{
		int32 result = i % 2;
		if (result == 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("%d 짝수"), i);
		}
	}
}

// Called every frame
void ACodingTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ACodingTestActor::Add(int32 num1, int32 num2)
{
	return num1 + num2;
}

