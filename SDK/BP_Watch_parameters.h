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

// Function BP_Watch.BP_Watch_C.ReceiveBeginPlay
struct UBP_Watch_C_ReceiveBeginPlay_Params
{
};

// Function BP_Watch.BP_Watch_C.OnKillConfirmationPush
struct UBP_Watch_C_OnKillConfirmationPush_Params
{
	class APavlovPlayerState**                         Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Watch.BP_Watch_C.ExecuteUbergraph_BP_Watch
struct UBP_Watch_C_ExecuteUbergraph_BP_Watch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
