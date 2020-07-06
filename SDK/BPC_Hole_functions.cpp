
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPC_Hole.BPC_Hole_C.ClearHoles
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_Hole_C::ClearHoles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Hole.BPC_Hole_C.ClearHoles");

	UBPC_Hole_C_ClearHoles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Hole.BPC_Hole_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Hole_C::SetTexture(class UTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Hole.BPC_Hole_C.SetTexture");

	UBPC_Hole_C_SetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Hole.BPC_Hole_C.ShakeHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ShakeValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Hole_C::ShakeHit(float ShakeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Hole.BPC_Hole_C.ShakeHit");

	UBPC_Hole_C_ShakeHit_Params params;
	params.ShakeValue = ShakeValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Hole.BPC_Hole_C.InitShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               UVHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EffectScale                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartShake_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Hole_C::InitShake(const struct FVector2D& UVHit, float EffectScale, bool StartShake_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Hole.BPC_Hole_C.InitShake");

	UBPC_Hole_C_InitShake_Params params;
	params.UVHit = UVHit;
	params.EffectScale = EffectScale;
	params.StartShake_ = StartShake_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Hole.BPC_Hole_C.ReportHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          EffectScale                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartTargetShake_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Hole_C::ReportHit(const struct FHitResult& HitResult, float EffectScale, bool StartTargetShake_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Hole.BPC_Hole_C.ReportHit");

	UBPC_Hole_C_ReportHit_Params params;
	params.HitResult = HitResult;
	params.EffectScale = EffectScale;
	params.StartTargetShake_ = StartTargetShake_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Hole.BPC_Hole_C.DrawHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               UVHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HoleSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BurnSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Hole_C::DrawHit(const struct FVector2D& UVHit, float HoleSize, float BurnSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Hole.BPC_Hole_C.DrawHit");

	UBPC_Hole_C_DrawHit_Params params;
	params.UVHit = UVHit;
	params.HoleSize = HoleSize;
	params.BurnSize = BurnSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Hole.BPC_Hole_C.SetMeshMat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Prim_CMP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ElementIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Hole_C::SetMeshMat(class UPrimitiveComponent* Prim_CMP, int ElementIndex, bool* Successful_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Hole.BPC_Hole_C.SetMeshMat");

	UBPC_Hole_C_SetMeshMat_Params params;
	params.Prim_CMP = Prim_CMP;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
}


// Function BPC_Hole.BPC_Hole_C.ExecuteUbergraph_BPC_Hole
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Hole_C::ExecuteUbergraph_BPC_Hole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Hole.BPC_Hole_C.ExecuteUbergraph_BPC_Hole");

	UBPC_Hole_C_ExecuteUbergraph_BPC_Hole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
