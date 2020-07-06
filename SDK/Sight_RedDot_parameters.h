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

// Function Sight_RedDot.Sight_RedDot_C.GetLenseMesh
struct ASight_RedDot_C_GetLenseMesh_Params
{
	int                                                MaterialIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Sight_RedDot.Sight_RedDot_C.UserConstructionScript
struct ASight_RedDot_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
