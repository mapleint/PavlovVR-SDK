
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

// Function WBP_LaneController.WBP_LaneController_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_LaneController_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaneController.WBP_LaneController_C.GetText_1");

	UWBP_LaneController_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LaneController.WBP_LaneController_C.Init Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ShootingLane_C*      ShootingLane                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LaneController_C::Init_Widget(class ABP_ShootingLane_C* ShootingLane)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaneController.WBP_LaneController_C.Init Widget");

	UWBP_LaneController_C_Init_Widget_Params params;
	params.ShootingLane = ShootingLane;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaneController.WBP_LaneController_C.ExecuteUbergraph_WBP_LaneController
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LaneController_C::ExecuteUbergraph_WBP_LaneController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaneController.WBP_LaneController_C.ExecuteUbergraph_WBP_LaneController");

	UWBP_LaneController_C_ExecuteUbergraph_WBP_LaneController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
