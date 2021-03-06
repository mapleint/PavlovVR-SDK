
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

// Function UI_ReplayScore.UI_ReplayScore_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayScore_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayScore.UI_ReplayScore_C.Tick");

	UUI_ReplayScore_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayScore.UI_ReplayScore_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ReplayScore_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayScore.UI_ReplayScore_C.Construct");

	UUI_ReplayScore_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayScore.UI_ReplayScore_C.ExecuteUbergraph_UI_ReplayScore
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayScore_C::ExecuteUbergraph_UI_ReplayScore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayScore.UI_ReplayScore_C.ExecuteUbergraph_UI_ReplayScore");

	UUI_ReplayScore_C_ExecuteUbergraph_UI_ReplayScore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
