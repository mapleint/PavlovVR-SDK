#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_ShootingLane.BP_ShootingLane_C.DisableHoles?
struct ABP_ShootingLane_C_DisableHoles__Params
{
	bool                                               Disable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.CompareLocations
struct ABP_ShootingLane_C_CompareLocations_Params
{
	struct FVector                                     BoneLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DominantHandLocation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NonDominantHandLocation;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               NonDominantHand_;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.GetAnimBP
struct ABP_ShootingLane_C_GetAnimBP_Params
{
	class UABP_LaneController_New_C*                   AsABP_Lane_Controller;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.OnRep_PlayerPresent
struct ABP_ShootingLane_C_OnRep_PlayerPresent_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.UserConstructionScript
struct ABP_ShootingLane_C_UserConstructionScript_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.ShakeTarget__FinishedFunc
struct ABP_ShootingLane_C_ShakeTarget__FinishedFunc_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.ShakeTarget__UpdateFunc
struct ABP_ShootingLane_C_ShakeTarget__UpdateFunc_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.LightIntensityTimeline__FinishedFunc
struct ABP_ShootingLane_C_LightIntensityTimeline__FinishedFunc_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.LightIntensityTimeline__UpdateFunc
struct ABP_ShootingLane_C_LightIntensityTimeline__UpdateFunc_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.TurnOffLight__FinishedFunc
struct ABP_ShootingLane_C_TurnOffLight__FinishedFunc_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.TurnOffLight__UpdateFunc
struct ABP_ShootingLane_C_TurnOffLight__UpdateFunc_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.TargetHit
struct ABP_ShootingLane_C_TargetHit_Params
{
	int                                                Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Target_C*                                HitTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.SetPracticeMode
struct ABP_ShootingLane_C_SetPracticeMode_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.MiniGameSettings
struct ABP_ShootingLane_C_MiniGameSettings_Params
{
	float                                              MoveTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.Reset Target
struct ABP_ShootingLane_C_Reset_Target_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.Move Target To Range
struct ABP_ShootingLane_C_Move_Target_To_Range_Params
{
	float                                              Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.ReceiveBeginPlay
struct ABP_ShootingLane_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.InitMiniGame
struct ABP_ShootingLane_C_InitMiniGame_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameRange;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_TargetWepType>                       TargetWeaponType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.StartMiniGame
struct ABP_ShootingLane_C_StartMiniGame_Params
{
	bool                                               KillHouse_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.EndMiniGame
struct ABP_ShootingLane_C_EndMiniGame_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ShootingLane_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ShootingLane_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.ReceiveTick
struct ABP_ShootingLane_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.Stop Target
struct ABP_ShootingLane_C_Stop_Target_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.Play Click FX
struct ABP_ShootingLane_C_Play_Click_FX_Params
{
	class APavlovItemController*                       ItemController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.Create Target Material
struct ABP_ShootingLane_C_Create_Target_Material_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.Create Material Editor
struct ABP_ShootingLane_C_Create_Material_Editor_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.Hit Target Editor
struct ABP_ShootingLane_C_Hit_Target_Editor_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.Play Move Sound Fx
struct ABP_ShootingLane_C_Play_Move_Sound_Fx_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.StopMoveSoundFx
struct ABP_ShootingLane_C_StopMoveSoundFx_Params
{
};

// Function BP_ShootingLane.BP_ShootingLane_C.BndEvt__TargetHolder_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
struct ABP_ShootingLane_C_BndEvt__TargetHolder_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ShootingLane.BP_ShootingLane_C.ExecuteUbergraph_BP_ShootingLane
struct ABP_ShootingLane_C_ExecuteUbergraph_BP_ShootingLane_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
