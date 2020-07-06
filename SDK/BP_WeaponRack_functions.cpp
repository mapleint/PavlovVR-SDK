
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

// Function BP_WeaponRack.BP_WeaponRack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponRack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRack.BP_WeaponRack_C.UserConstructionScript");

	ABP_WeaponRack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRack.BP_WeaponRack_C.Set Meshes
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponRack_C::Set_Meshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRack.BP_WeaponRack_C.Set Meshes");

	ABP_WeaponRack_C_Set_Meshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRack.BP_WeaponRack_C.ExecuteUbergraph_BP_WeaponRack
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRack_C::ExecuteUbergraph_BP_WeaponRack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRack.BP_WeaponRack_C.ExecuteUbergraph_BP_WeaponRack");

	ABP_WeaponRack_C_ExecuteUbergraph_BP_WeaponRack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
