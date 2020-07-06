
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

// Function loadout_range.loadout_range_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aloadout_range_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_range.loadout_range_C.ReceiveBeginPlay");

	Aloadout_range_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_range.loadout_range_C.ExecuteUbergraph_loadout_range
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aloadout_range_C::ExecuteUbergraph_loadout_range(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_range.loadout_range_C.ExecuteUbergraph_loadout_range");

	Aloadout_range_C_ExecuteUbergraph_loadout_range_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
