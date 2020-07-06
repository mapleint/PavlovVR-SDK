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

// Function UI_Score.UI_Score_C.SetScore
struct UUI_Score_C_SetScore_Params
{
	float                                              Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Score.UI_Score_C.Construct
struct UUI_Score_C_Construct_Params
{
};

// Function UI_Score.UI_Score_C.ExecuteUbergraph_UI_Score
struct UUI_Score_C_ExecuteUbergraph_UI_Score_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
