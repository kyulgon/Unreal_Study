// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Bullet.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("My Box Component"));
	SetRootComponent(boxComp);

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Static Mesh"));
	meshComp->SetupAttachment(boxComp);

	FVector boxSize = FVector(50.0f, 50.0f, 50.0f);
	boxComp->SetBoxExtent(boxSize);

	// �ѱ� ǥ�� ������Ʈ�� �����ϰ� �ڽ� ������Ʈ�� �ڽ� ������Ʈ�� ����
	firePosition = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Position"));
	firePosition->SetupAttachment(boxComp);

	// ������ �̺�Ʈ�� Ŵ
	boxComp->SetGenerateOverlapEvents(true);

	// �浹 ������ Query And Physics�� ����
	boxComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	// Object Type�� Player�� ����
	boxComp->SetCollisionObjectType(ECC_GameTraceChannel1);

	// ��� ä���� �浹 ���� �������� ����
	boxComp->SetCollisionResponseToAllChannels(ECR_Ignore);

	// ���� �浹 �̺�Ʈ üũ
	boxComp->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Overlap);
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector dir = FVector(0, h, v);
	dir.Normalize();

	FVector newLocation = GetActorLocation() + dir * moveSpeed * DeltaTime;
	SetActorLocation(newLocation);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Horizontal", this, &APlayerPawn::MoveHorizontal);
	PlayerInputComponent->BindAxis("Vertical", this, &APlayerPawn::MoveVertical);

	// Action ���ε��� ���� �Լ��� ����
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayerPawn::Fire);
}

void APlayerPawn::MoveHorizontal(float value)
{
	h = value;
}

void APlayerPawn::MoveVertical(float value)
{
	v = value;
}

void APlayerPawn::Fire()
{
	// �Ѿ� �������Ʈ ������ firePosition ��ġ�� ����
	ABullet* bullet = GetWorld()->SpawnActor<ABullet>(bulletFactory, firePosition->GetComponentLocation(), firePosition->GetComponentRotation());
	UGameplayStatics::PlaySound2D(GetWorld(), fireSound);
}

