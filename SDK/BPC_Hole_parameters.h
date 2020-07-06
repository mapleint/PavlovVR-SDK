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

// Function BPC_Hole.BPC_Hole_C.ClearHoles
struct UBPC_Hole_C_ClearHoles_Params
{
};

// Function BPC_Hole.BPC_Hole_C.SetTexture
struct UBPC_Hole_C_SetTexture_Params
{
	class UTexture*                                    Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Hole.BPC_Hole_C.ShakeHit
struct UBPC_Hole_C_ShakeHit_Params
{
	float                                              ShakeValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Hole.BPC_Hole_C.InitShake
struct UBPC_Hole_C_InitShake_Params
{
	struct FVector2D                                   UVHit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EffectScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartShake_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Hole.BPC_Hole_C.ReportHit
struct UBPC_Hole_C_ReportHit_Params
{
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              EffectScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartTargetShake_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Hole.BPC_Hole_C.DrawHit
struct UBPC_Hole_C_DrawHit_Params
{
	struct FVector2D                                   UVHit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HoleSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BurnSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Hole.BPC_Hole_C.SetMeshMat
struct UBPC_Hole_C_SetMeshMat_Params
{
	class UPrimitiveComponent*                         Prim_CMP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ElementIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Hole.BPC_Hole_C.ExecuteUbergraph_BPC_Hole
struct UBPC_Hole_C_ExecuteUbergraph_BPC_Hole_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
