#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShootingLane.BP_ShootingLane_C
// 0x00F4 (0x041C - 0x0328)
class ABP_ShootingLane_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         EditorTestingPoint;                                       // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_Hole_C*                                 BPC_Hole;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TargetHolder;                                             // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                      // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TurnOffLight_Intensity_C36F44BE464F740DEF0D23AECD8F8DAF;  // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TurnOffLight__Direction_C36F44BE464F740DEF0D23AECD8F8DAF; // 0x037C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TurnOffLight;                                             // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LightIntensityTimeline_Intensity_7D18628F4C3FE407ACEB018DFB5C4B50;// 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightIntensityTimeline__Direction_7D18628F4C3FE407ACEB018DFB5C4B50;// 0x038C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightIntensityTimeline;                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShakeTarget_ShakeAmount_4F8EBE26490FA2E89075A6A1D8BC4E9A; // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShakeTarget__Direction_4F8EBE26490FA2E89075A6A1D8BC4E9A;  // 0x039C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShakeTarget;                                              // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                _OfRails;                                                 // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GenerateRails;                                            // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	float                                              Max_Distance;                                             // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time;                                                     // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerPresent;                                            // 0x03B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NonDominantHand_;                                         // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x03BA(0x0002) MISSED OFFSET
	float                                              TargetSpeed;                                              // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EditorTestingHitBoxSize;                                  // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Editor_ofHits;                                            // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Rail_Movement_Sound;                                      // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  MovementSound;                                            // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  TargetStopSound;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           TargetAttn;                                               // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Stop_Sound;                                               // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UTexture*>                            TargetTextures;                                           // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TargetTextureIndex;                                       // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableHoles;                                             // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	float                                              LastShotFired;                                            // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentShotCount;                                         // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxShotCount;                                             // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShootingLane.BP_ShootingLane_C");
		return ptr;
	}


	void DisableHoles_(bool* Disable);
	bool CompareLocations(const struct FVector& BoneLocation, const struct FVector& DominantHandLocation, const struct FVector& NonDominantHandLocation, float* Alpha, bool* NonDominantHand_);
	void GetAnimBP(class UABP_LaneController_New_C** AsABP_Lane_Controller);
	void OnRep_PlayerPresent();
	void UserConstructionScript();
	void ShakeTarget__FinishedFunc();
	void ShakeTarget__UpdateFunc();
	void LightIntensityTimeline__FinishedFunc();
	void LightIntensityTimeline__UpdateFunc();
	void TurnOffLight__FinishedFunc();
	void TurnOffLight__UpdateFunc();
	void TargetHit(int Points, class ABP_Target_C* HitTarget, int HitType);
	void SetPracticeMode();
	void MiniGameSettings(float MoveTime);
	void Reset_Target();
	void Move_Target_To_Range(float Range);
	void ReceiveBeginPlay();
	void InitMiniGame(TEnumAsByte<E_MiniGameType> MiniGameRange, TEnumAsByte<E_TargetWepType> TargetWeaponType);
	void StartMiniGame(bool KillHouse_);
	void EndMiniGame();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveTick(float* DeltaSeconds);
	void Stop_Target();
	void Play_Click_FX(class APavlovItemController* ItemController);
	void Create_Target_Material();
	void Create_Material_Editor();
	void Hit_Target_Editor();
	void Play_Move_Sound_Fx();
	void StopMoveSoundFx();
	void BndEvt__TargetHolder_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_ShootingLane(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
