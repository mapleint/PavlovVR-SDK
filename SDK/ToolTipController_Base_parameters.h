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

// Function ToolTipController_Base.ToolTipController_Base_C.GetCanvas
struct AToolTipController_Base_C_GetCanvas_Params
{
	class UUI_ToolTipCanvas_C*                         Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ToolTipController_Base.ToolTipController_Base_C.UserConstructionScript
struct AToolTipController_Base_C_UserConstructionScript_Params
{
};

// Function ToolTipController_Base.ToolTipController_Base_C.ReceiveBeginPlay
struct AToolTipController_Base_C_ReceiveBeginPlay_Params
{
};

// Function ToolTipController_Base.ToolTipController_Base_C.ReceiveTick
struct AToolTipController_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTipController_Base.ToolTipController_Base_C.ExecuteUbergraph_ToolTipController_Base
struct AToolTipController_Base_C_ExecuteUbergraph_ToolTipController_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
