
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

// Function UI_Stereo_MatchEnd.UI_Stereo_MatchEnd_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Stereo_MatchEnd_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Stereo_MatchEnd.UI_Stereo_MatchEnd_C.Construct");

	UUI_Stereo_MatchEnd_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Stereo_MatchEnd.UI_Stereo_MatchEnd_C.ExecuteUbergraph_UI_Stereo_MatchEnd
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Stereo_MatchEnd_C::ExecuteUbergraph_UI_Stereo_MatchEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Stereo_MatchEnd.UI_Stereo_MatchEnd_C.ExecuteUbergraph_UI_Stereo_MatchEnd");

	UUI_Stereo_MatchEnd_C_ExecuteUbergraph_UI_Stereo_MatchEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
