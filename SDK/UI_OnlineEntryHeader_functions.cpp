
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

// Function UI_OnlineEntryHeader.UI_OnlineEntryHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_OnlineEntryHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntryHeader.UI_OnlineEntryHeader_C.Construct");

	UUI_OnlineEntryHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntryHeader.UI_OnlineEntryHeader_C.BndEvt__PlayerCountSortButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EServerSortType                SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineEntryHeader_C::BndEvt__PlayerCountSortButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(EServerSortType SortType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntryHeader.UI_OnlineEntryHeader_C.BndEvt__PlayerCountSortButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");

	UUI_OnlineEntryHeader_C_BndEvt__PlayerCountSortButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params params;
	params.SortType = SortType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntryHeader.UI_OnlineEntryHeader_C.BndEvt__PingSortButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EServerSortType                SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineEntryHeader_C::BndEvt__PingSortButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(EServerSortType SortType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntryHeader.UI_OnlineEntryHeader_C.BndEvt__PingSortButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");

	UUI_OnlineEntryHeader_C_BndEvt__PingSortButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params params;
	params.SortType = SortType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntryHeader.UI_OnlineEntryHeader_C.ExecuteUbergraph_UI_OnlineEntryHeader
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineEntryHeader_C::ExecuteUbergraph_UI_OnlineEntryHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntryHeader.UI_OnlineEntryHeader_C.ExecuteUbergraph_UI_OnlineEntryHeader");

	UUI_OnlineEntryHeader_C_ExecuteUbergraph_UI_OnlineEntryHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntryHeader.UI_OnlineEntryHeader_C.OnChangeSortFilters__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_OnlineEntryHeader_C::OnChangeSortFilters__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntryHeader.UI_OnlineEntryHeader_C.OnChangeSortFilters__DelegateSignature");

	UUI_OnlineEntryHeader_C_OnChangeSortFilters__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
