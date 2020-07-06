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

// Function BP_MenuUniverse.BP_MenuUniverse_C.IsPlayerTooFar
struct ABP_MenuUniverse_C_IsPlayerTooFar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MenuUniverse.BP_MenuUniverse_C.GetMainUIWidget
struct ABP_MenuUniverse_C_GetMainUIWidget_Params
{
	class UUI_Main_C*                                  UI_Main;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MenuUniverse.BP_MenuUniverse_C.UserConstructionScript
struct ABP_MenuUniverse_C_UserConstructionScript_Params
{
};

// Function BP_MenuUniverse.BP_MenuUniverse_C.OnViewTargetChangingFrom
struct ABP_MenuUniverse_C_OnViewTargetChangingFrom_Params
{
	class AActor**                                     ViewTarget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuUniverse.BP_MenuUniverse_C.OnEnableChanged
struct ABP_MenuUniverse_C_OnEnableChanged_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuUniverse.BP_MenuUniverse_C.ReceiveTick
struct ABP_MenuUniverse_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuUniverse.BP_MenuUniverse_C.CameraExploit
struct ABP_MenuUniverse_C_CameraExploit_Params
{
	bool                                               bDetected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuUniverse.BP_MenuUniverse_C.ExecuteUbergraph_BP_MenuUniverse
struct ABP_MenuUniverse_C_ExecuteUbergraph_BP_MenuUniverse_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
