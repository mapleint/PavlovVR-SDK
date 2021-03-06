
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

// Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayTeamStatus_C::Select(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.Select");

	UUI_ReplayTeamStatus_C_Select_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.UpdatePlayerArray
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ReplayTeamStatus_C::UpdatePlayerArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.UpdatePlayerArray");

	UUI_ReplayTeamStatus_C_UpdatePlayerArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ReplayTeamStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.Construct");

	UUI_ReplayTeamStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayTeamStatus_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.Tick");

	UUI_ReplayTeamStatus_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.ExecuteUbergraph_UI_ReplayTeamStatus
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayTeamStatus_C::ExecuteUbergraph_UI_ReplayTeamStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.ExecuteUbergraph_UI_ReplayTeamStatus");

	UUI_ReplayTeamStatus_C_ExecuteUbergraph_UI_ReplayTeamStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
