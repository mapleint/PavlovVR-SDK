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

// Function Suppressor_Base.Suppressor_Base_C.GetGrabLoc
struct ASuppressor_Base_C_GetGrabLoc_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Suppressor_Base.Suppressor_Base_C.UserConstructionScript
struct ASuppressor_Base_C_UserConstructionScript_Params
{
};

// Function Suppressor_Base.Suppressor_Base_C.Physicalize
struct ASuppressor_Base_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Suppressor_Base.Suppressor_Base_C.Use
struct ASuppressor_Base_C_Use_Params
{
};

// Function Suppressor_Base.Suppressor_Base_C.ReceiveBeginPlay
struct ASuppressor_Base_C_ReceiveBeginPlay_Params
{
};

// Function Suppressor_Base.Suppressor_Base_C.OnPick
struct ASuppressor_Base_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Suppressor_Base.Suppressor_Base_C.OnAttachmentModeChanged
struct ASuppressor_Base_C_OnAttachmentModeChanged_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Suppressor_Base.Suppressor_Base_C.ExecuteUbergraph_Suppressor_Base
struct ASuppressor_Base_C_ExecuteUbergraph_Suppressor_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
