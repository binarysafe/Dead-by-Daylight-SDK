#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_NetworkUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NetworkUtilities.BaseMovementInputStrategy
// 0x0000 (0x0100 - 0x0100)
class UBaseMovementInputStrategy : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NetworkUtilities.BaseMovementInputStrategy"));

		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetIsReplicated(bool* ShouldReplicate);
	void SetComponentTickInterval(float* TickInterval);
	void SetComponentTickEnabled(bool* bEnabled);
	void SetAutoActivate(bool* bNewAutoActivate);
	void SetActive(bool* bNewActive, bool* bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject** Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(struct FName* Tag);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void Activate(bool* bReset);
};


// Class NetworkUtilities.ImmediateMovementInputStrategy
// 0x0000 (0x0100 - 0x0100)
class UImmediateMovementInputStrategy : public UBaseMovementInputStrategy
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NetworkUtilities.ImmediateMovementInputStrategy"));

		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetIsReplicated(bool* ShouldReplicate);
	void SetComponentTickInterval(float* TickInterval);
	void SetComponentTickEnabled(bool* bEnabled);
	void SetAutoActivate(bool* bNewAutoActivate);
	void SetActive(bool* bNewActive, bool* bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject** Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(struct FName* Tag);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void Activate(bool* bReset);
};


// Class NetworkUtilities.InterpolatedMovementInputStrategy
// 0x0020 (0x0120 - 0x0100)
class UInterpolatedMovementInputStrategy : public UBaseMovementInputStrategy
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NetworkUtilities.InterpolatedMovementInputStrategy"));

		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetIsReplicated(bool* ShouldReplicate);
	void SetComponentTickInterval(float* TickInterval);
	void SetComponentTickEnabled(bool* bEnabled);
	void SetAutoActivate(bool* bNewAutoActivate);
	void SetActive(bool* bNewActive, bool* bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject** Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(struct FName* Tag);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void Activate(bool* bReset);
};


// Class NetworkUtilities.NetSynchedClock
// 0x0020 (0x0120 - 0x0100)
class UNetSynchedClock : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	float                                              _serverTimeUpdateDelay;                                   // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x010C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NetworkUtilities.NetSynchedClock"));

		return ptr;
	}


	void Server_RequestServerTime();
	void Client_ReportServerTime(float* serverTime);
};


// Class NetworkUtilities.NetUtils
// 0x0000 (0x0030 - 0x0030)
class UNetUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NetworkUtilities.NetUtils"));

		return ptr;
	}

};


// Class NetworkUtilities.NetworkFenceActor
// 0x0078 (0x03B8 - 0x0340)
class ANetworkFenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0340(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NetworkUtilities.NetworkFenceActor"));

		return ptr;
	}


	bool WasRecentlyRendered(float* Tolerance);
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo(class AActor** InParentActor, struct FName* InSocketName);
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetReplicates(bool* bInReplicates);
	void SetReplicateMovement(bool* bInReplicateMovement);
	void SetOwner(class AActor** NewOwner);
	void SetNetDormancy(TEnumAsByte<ENetDormancy>* NewDormancy);
	void SetLifeSpan(float* InLifespan);
	void SetActorTickInterval(float* TickInterval);
	void SetActorTickEnabled(bool* bEnabled);
	void SetActorScale3D(struct FVector* NewScale3D);
	void SetActorRelativeScale3D(struct FVector* NewRelativeScale);
	void SetActorHiddenInGame(bool* bNewHidden);
	void SetActorEnableCollision(bool* bNewActorEnableCollision);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceiveActorOnReleased(struct FKey* ButtonReleased);
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnClicked(struct FKey* ButtonPressed);
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveActorBeginCursorOver();
	void PrestreamTextures(float* Seconds, bool* bEnableStreaming, int* CinematicTextureGroups);
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise(float* Loudness, class APawn** NoiseInstigator, struct FVector* NoiseLocation, float* MaxRange, struct FName* Tag);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface** Parent);
	bool K2_TeleportTo(struct FVector* DestLocation, struct FRotator* DestRotation);
	bool K2_SetActorTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorRotation(struct FRotator* NewRotation, bool* bTeleportPhysics);
	void K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeRotation(struct FRotator* NewRelativeRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeLocation(struct FVector* NewRelativeLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_OnReset();
	void K2_OnEndViewTarget(class APlayerController** PC);
	void K2_OnBecomeViewTarget(class APlayerController** PC);
	class USceneComponent* K2_GetRootComponent();
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void K2_DetachFromActor(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule);
	void K2_DestroyComponent(class UActorComponent** Component);
	void K2_DestroyActor();
	void K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies);
	void K2_AttachToActor(class AActor** ParentActor, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies);
	void K2_AttachRootComponentToActor(class AActor** InParentActor, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies);
	void K2_AddActorWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool IsOverlappingActor(class AActor** Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor** OtherActor);
	struct FVector GetVelocity();
	struct FTransform GetTransform();
	bool GetTickableWhenPaused();
	float GetSquaredDistanceTo(class AActor** OtherActor);
	TEnumAsByte<ENetRole> GetRemoteRole();
	class UChildActorComponent* GetParentComponent();
	class AActor* GetParentActor();
	class AActor* GetOwner();
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors);
	TEnumAsByte<ENetRole> GetLocalRole();
	float GetLifeSpan();
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(struct FKey* InputAxisKey);
	float GetInputAxisValue(struct FName* InputAxisName);
	float GetInputAxisKeyValue(struct FKey* InputAxisKey);
	float GetHorizontalDotProductTo(class AActor** OtherActor);
	float GetHorizontalDistanceTo(class AActor** OtherActor);
	float GetGameTimeSinceCreation();
	float GetDotProductTo(class AActor** OtherActor);
	float GetDistanceTo(class AActor** OtherActor);
	TArray<class UActorComponent*> GetComponentsByTag(class UClass** ComponentClass, struct FName* Tag);
	TArray<class UActorComponent*> GetComponentsByClass(class UClass** ComponentClass);
	class UActorComponent* GetComponentByClass(class UClass** ComponentClass);
	struct FName GetAttachParentSocketName();
	class AActor* GetAttachParentActor();
	void GetAttachedActors(TArray<class AActor*>* OutActors);
	void GetAllChildActors(bool* bIncludeDescendants, TArray<class AActor*>* ChildActors);
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	float GetActorTickInterval();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool GetActorEnableCollision();
	void GetActorBounds(bool* bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput(class APlayerController** PlayerController);
	void DisableInput(class APlayerController** PlayerController);
	void DetachRootComponentFromParent(bool* bMaintainWorldPosition);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	class UActorComponent* AddComponent(struct FName* TemplateName, bool* bManualAttachment, struct FTransform* RelativeTransform, class UObject** ComponentTemplateContext);
	bool ActorHasTag(struct FName* Tag);
};


// Class NetworkUtilities.ServerCorrectionDisablerComponent
// 0x0050 (0x0150 - 0x0100)
class UServerCorrectionDisablerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NetworkUtilities.ServerCorrectionDisablerComponent"));

		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetIsReplicated(bool* ShouldReplicate);
	void SetComponentTickInterval(float* TickInterval);
	void SetComponentTickEnabled(bool* bEnabled);
	void SetAutoActivate(bool* bNewAutoActivate);
	void SetActive(bool* bNewActive, bool* bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject** Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(struct FName* Tag);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void Activate(bool* bReset);
};


// Class NetworkUtilities.ServerTimeProviderComponent
// 0x0008 (0x0108 - 0x0100)
class UServerTimeProviderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NetworkUtilities.ServerTimeProviderComponent"));

		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetIsReplicated(bool* ShouldReplicate);
	void SetComponentTickInterval(float* TickInterval);
	void SetComponentTickEnabled(bool* bEnabled);
	void SetAutoActivate(bool* bNewAutoActivate);
	void SetActive(bool* bNewActive, bool* bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject** Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(struct FName* Tag);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void Activate(bool* bReset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
