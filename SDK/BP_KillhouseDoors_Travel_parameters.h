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

// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.UseSoftGrabConstraint
struct ABP_KillhouseDoors_Travel_C_UseSoftGrabConstraint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.UserConstructionScript
struct ABP_KillhouseDoors_Travel_C_UserConstructionScript_Params
{
};

// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.UnGrabbed
struct ABP_KillhouseDoors_Travel_C_UnGrabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.ReceiveBeginPlay
struct ABP_KillhouseDoors_Travel_C_ReceiveBeginPlay_Params
{
};

// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.Grabbed
struct ABP_KillhouseDoors_Travel_C_Grabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_KillhouseDoors_Travel_C_BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.ExecuteUbergraph_BP_KillhouseDoors_Travel
struct ABP_KillhouseDoors_Travel_C_ExecuteUbergraph_BP_KillhouseDoors_Travel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
