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

// Function BP_TargetLibrary.BP_TargetLibrary_C.UseTarget?
struct UBP_TargetLibrary_C_UseTarget__Params
{
	TEnumAsByte<E_MiniGameType>                        CurrentMGType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MiniGameType>                        TargetMGType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TargetLibrary.BP_TargetLibrary_C.EnumToTargetText
struct UBP_TargetLibrary_C_EnumToTargetText_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
