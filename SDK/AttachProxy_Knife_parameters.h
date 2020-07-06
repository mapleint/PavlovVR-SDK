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

// Function AttachProxy_Knife.AttachProxy_Knife_C.UseSoftGrabConstraint
struct AAttachProxy_Knife_C_UseSoftGrabConstraint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AttachProxy_Knife.AttachProxy_Knife_C.UserConstructionScript
struct AAttachProxy_Knife_C_UserConstructionScript_Params
{
};

// Function AttachProxy_Knife.AttachProxy_Knife_C.UnGrabbed
struct AAttachProxy_Knife_C_UnGrabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachProxy_Knife.AttachProxy_Knife_C.ReceiveBeginPlay
struct AAttachProxy_Knife_C_ReceiveBeginPlay_Params
{
};

// Function AttachProxy_Knife.AttachProxy_Knife_C.Grabbed
struct AAttachProxy_Knife_C_Grabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachProxy_Knife.AttachProxy_Knife_C.LootGrabbed
struct AAttachProxy_Knife_C_LootGrabbed_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Dominant_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachProxy_Knife.AttachProxy_Knife_C.BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AAttachProxy_Knife_C_BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AttachProxy_Knife.AttachProxy_Knife_C.BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AAttachProxy_Knife_C_BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachProxy_Knife.AttachProxy_Knife_C.ReceiveTick
struct AAttachProxy_Knife_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachProxy_Knife.AttachProxy_Knife_C.ExecuteUbergraph_AttachProxy_Knife
struct AAttachProxy_Knife_C_ExecuteUbergraph_AttachProxy_Knife_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
