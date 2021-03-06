
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

// Function Sight_Holo.Sight_Holo_C.GetLenseMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaterialIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ASight_Holo_C::GetLenseMesh(int* MaterialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Holo.Sight_Holo_C.GetLenseMesh");

	ASight_Holo_C_GetLenseMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialIndex != nullptr)
		*MaterialIndex = params.MaterialIndex;

	return params.ReturnValue;
}


// Function Sight_Holo.Sight_Holo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASight_Holo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Holo.Sight_Holo_C.UserConstructionScript");

	ASight_Holo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
