
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

// Function Gun_Uzi.Gun_Uzi_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_Uzi_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Uzi.Gun_Uzi_C.UserConstructionScript");

	AGun_Uzi_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Uzi.Gun_Uzi_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Uzi_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Uzi.Gun_Uzi_C.ReceiveTick");

	AGun_Uzi_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Uzi.Gun_Uzi_C.ExecuteUbergraph_Gun_Uzi
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Uzi_C::ExecuteUbergraph_Gun_Uzi(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Uzi.Gun_Uzi_C.ExecuteUbergraph_Gun_Uzi");

	AGun_Uzi_C_ExecuteUbergraph_Gun_Uzi_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
