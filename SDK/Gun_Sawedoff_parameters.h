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

// Function Gun_Sawedoff.Gun_Sawedoff_C.VerifyCanClose
struct AGun_Sawedoff_C_VerifyCanClose_Params
{
};

// Function Gun_Sawedoff.Gun_Sawedoff_C.UserConstructionScript
struct AGun_Sawedoff_C_UserConstructionScript_Params
{
};

// Function Gun_Sawedoff.Gun_Sawedoff_C.ReceiveBeginPlay
struct AGun_Sawedoff_C_ReceiveBeginPlay_Params
{
};

// Function Gun_Sawedoff.Gun_Sawedoff_C.OnMagBoltRelease_Event_1
struct AGun_Sawedoff_C_OnMagBoltRelease_Event_1_Params
{
};

// Function Gun_Sawedoff.Gun_Sawedoff_C.OnBarrelChanged_Event_1
struct AGun_Sawedoff_C_OnBarrelChanged_Event_1_Params
{
	bool                                               bOpen;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Sawedoff.Gun_Sawedoff_C.CustomEvent_2
struct AGun_Sawedoff_C_CustomEvent_2_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Sawedoff.Gun_Sawedoff_C.SetupRemoval
struct AGun_Sawedoff_C_SetupRemoval_Params
{
};

// Function Gun_Sawedoff.Gun_Sawedoff_C.SetupClose
struct AGun_Sawedoff_C_SetupClose_Params
{
};

// Function Gun_Sawedoff.Gun_Sawedoff_C.OnChamberStateChangedEvent
struct AGun_Sawedoff_C_OnChamberStateChangedEvent_Params
{
	int*                                               ChamberIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState*                                OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState*                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Sawedoff.Gun_Sawedoff_C.OnPick
struct AGun_Sawedoff_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Sawedoff.Gun_Sawedoff_C.ExecuteUbergraph_Gun_Sawedoff
struct AGun_Sawedoff_C_ExecuteUbergraph_Gun_Sawedoff_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
