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

// Function WBP_LaneController.WBP_LaneController_C.GetText_1
struct UWBP_LaneController_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LaneController.WBP_LaneController_C.Init Widget
struct UWBP_LaneController_C_Init_Widget_Params
{
	class ABP_ShootingLane_C*                          ShootingLane;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LaneController.WBP_LaneController_C.ExecuteUbergraph_WBP_LaneController
struct UWBP_LaneController_C_ExecuteUbergraph_WBP_LaneController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
