
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

// Function BP_WeaponRack_Primary1.BP_WeaponRack_Primary1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponRack_Primary1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRack_Primary1.BP_WeaponRack_Primary1_C.UserConstructionScript");

	ABP_WeaponRack_Primary1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRack_Primary1.BP_WeaponRack_Primary1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponRack_Primary1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRack_Primary1.BP_WeaponRack_Primary1_C.ReceiveBeginPlay");

	ABP_WeaponRack_Primary1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRack_Primary1.BP_WeaponRack_Primary1_C.ExecuteUbergraph_BP_WeaponRack_Primary1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRack_Primary1_C::ExecuteUbergraph_BP_WeaponRack_Primary1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRack_Primary1.BP_WeaponRack_Primary1_C.ExecuteUbergraph_BP_WeaponRack_Primary1");

	ABP_WeaponRack_Primary1_C_ExecuteUbergraph_BP_WeaponRack_Primary1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
