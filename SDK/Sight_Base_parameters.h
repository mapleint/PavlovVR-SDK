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

// Function Sight_Base.Sight_Base_C.Temp
struct ASight_Base_C_Temp_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	float                                              ReturnValue2;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue3;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sight_Base.Sight_Base_C.GetGrabLoc
struct ASight_Base_C_GetGrabLoc_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sight_Base.Sight_Base_C.UserConstructionScript
struct ASight_Base_C_UserConstructionScript_Params
{
};

// Function Sight_Base.Sight_Base_C.ReceiveBeginPlay
struct ASight_Base_C_ReceiveBeginPlay_Params
{
};

// Function Sight_Base.Sight_Base_C.ReceiveTick
struct ASight_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sight_Base.Sight_Base_C.Use
struct ASight_Base_C_Use_Params
{
};

// Function Sight_Base.Sight_Base_C.Physicalize
struct ASight_Base_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sight_Base.Sight_Base_C.OnPick
struct ASight_Base_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sight_Base.Sight_Base_C.OnAttachmentModeChanged
struct ASight_Base_C_OnAttachmentModeChanged_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sight_Base.Sight_Base_C.Used
struct ASight_Base_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sight_Base.Sight_Base_C.OnDrop
struct ASight_Base_C_OnDrop_Params
{
};

// Function Sight_Base.Sight_Base_C.ExecuteUbergraph_Sight_Base
struct ASight_Base_C_ExecuteUbergraph_Sight_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
