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

// Function Grip_Base.Grip_Base_C.GetGrabLoc
struct AGrip_Base_C_GetGrabLoc_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Grip_Base.Grip_Base_C.UserConstructionScript
struct AGrip_Base_C_UserConstructionScript_Params
{
};

// Function Grip_Base.Grip_Base_C.ReceiveBeginPlay
struct AGrip_Base_C_ReceiveBeginPlay_Params
{
};

// Function Grip_Base.Grip_Base_C.Physicalize
struct AGrip_Base_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Grip_Base.Grip_Base_C.Use
struct AGrip_Base_C_Use_Params
{
};

// Function Grip_Base.Grip_Base_C.OnPick
struct AGrip_Base_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Grip_Base.Grip_Base_C.OnAttachmentModeChanged
struct AGrip_Base_C_OnAttachmentModeChanged_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Grip_Base.Grip_Base_C.ExecuteUbergraph_Grip_Base
struct AGrip_Base_C_ExecuteUbergraph_Grip_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
