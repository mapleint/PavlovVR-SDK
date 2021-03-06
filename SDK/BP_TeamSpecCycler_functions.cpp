
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

// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.SpecIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TeamSpecCycler_C::SpecIndex(int Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.SpecIndex");

	UBP_TeamSpecCycler_C_SpecIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.PushCurrent
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TeamSpecCycler_C::PushCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.PushCurrent");

	UBP_TeamSpecCycler_C_PushCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.CyclePrev
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TeamSpecCycler_C::CyclePrev()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.CyclePrev");

	UBP_TeamSpecCycler_C_CyclePrev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.CycleNext
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TeamSpecCycler_C::CycleNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.CycleNext");

	UBP_TeamSpecCycler_C_CycleNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.Cycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Next                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TeamSpecCycler_C::Cycle(bool Next)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.Cycle");

	UBP_TeamSpecCycler_C_Cycle_Params params;
	params.Next = Next;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.OnDrySpecPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TeamSpecCycler_C::OnDrySpecPlayer__DelegateSignature(int Index, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.OnDrySpecPlayer__DelegateSignature");

	UBP_TeamSpecCycler_C_OnDrySpecPlayer__DelegateSignature_Params params;
	params.Index = Index;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.OnSpecPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPlayerState*      PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TeamSpecCycler_C::OnSpecPlayer__DelegateSignature(class APavlovPawn* Pawn, class APavlovPlayerState* PlayerState, int Index, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSpecCycler.BP_TeamSpecCycler_C.OnSpecPlayer__DelegateSignature");

	UBP_TeamSpecCycler_C_OnSpecPlayer__DelegateSignature_Params params;
	params.Pawn = Pawn;
	params.PlayerState = PlayerState;
	params.Index = Index;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
