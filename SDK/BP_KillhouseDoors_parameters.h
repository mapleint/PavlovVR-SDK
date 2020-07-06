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

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.bLast
struct ABP_KillhouseDoors_C_bLast_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.UserConstructionScript
struct ABP_KillhouseDoors_C_UserConstructionScript_Params
{
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.DoorRotation__FinishedFunc
struct ABP_KillhouseDoors_C_DoorRotation__FinishedFunc_Params
{
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.DoorRotation__UpdateFunc
struct ABP_KillhouseDoors_C_DoorRotation__UpdateFunc_Params
{
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.ReceiveBeginPlay
struct ABP_KillhouseDoors_C_ReceiveBeginPlay_Params
{
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.Close Doors
struct ABP_KillhouseDoors_C_Close_Doors_Params
{
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.Open Doors
struct ABP_KillhouseDoors_C_Open_Doors_Params
{
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.Play Sound FX
struct ABP_KillhouseDoors_C_Play_Sound_FX_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.MoveDoor_Event
struct ABP_KillhouseDoors_C_MoveDoor_Event_Params
{
	bool                                               Open_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.BlastDoor_Event
struct ABP_KillhouseDoors_C_BlastDoor_Event_Params
{
	bool                                               Reset_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseForce;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.Stop Doors
struct ABP_KillhouseDoors_C_Stop_Doors_Params
{
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.ExecuteUbergraph_BP_KillhouseDoors
struct ABP_KillhouseDoors_C_ExecuteUbergraph_BP_KillhouseDoors_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.BlastDoor__DelegateSignature
struct ABP_KillhouseDoors_C_BlastDoor__DelegateSignature_Params
{
	bool                                               Reset_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseForce;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.MoveDoor__DelegateSignature
struct ABP_KillhouseDoors_C_MoveDoor__DelegateSignature_Params
{
	bool                                               Open_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
