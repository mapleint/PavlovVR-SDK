
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

// Function UI_ColumnSortButton.UI_ColumnSortButton_C.SetSortType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EServerSortType                SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ColumnSortButton_C::SetSortType(EServerSortType SortType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ColumnSortButton.UI_ColumnSortButton_C.SetSortType");

	UUI_ColumnSortButton_C_SetSortType_Params params;
	params.SortType = SortType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ColumnSortButton.UI_ColumnSortButton_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ColumnSortButton_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ColumnSortButton.UI_ColumnSortButton_C.UpdateIcon");

	UUI_ColumnSortButton_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ColumnSortButton.UI_ColumnSortButton_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ColumnSortButton_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ColumnSortButton.UI_ColumnSortButton_C.GetVisibility_1");

	UUI_ColumnSortButton_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ColumnSortButton.UI_ColumnSortButton_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_ColumnSortButton_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ColumnSortButton.UI_ColumnSortButton_C.GetBrush_1");

	UUI_ColumnSortButton_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ColumnSortButton.UI_ColumnSortButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ColumnSortButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ColumnSortButton.UI_ColumnSortButton_C.PreConstruct");

	UUI_ColumnSortButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ColumnSortButton.UI_ColumnSortButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ColumnSortButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ColumnSortButton.UI_ColumnSortButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_ColumnSortButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ColumnSortButton.UI_ColumnSortButton_C.ExecuteUbergraph_UI_ColumnSortButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ColumnSortButton_C::ExecuteUbergraph_UI_ColumnSortButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ColumnSortButton.UI_ColumnSortButton_C.ExecuteUbergraph_UI_ColumnSortButton");

	UUI_ColumnSortButton_C_ExecuteUbergraph_UI_ColumnSortButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ColumnSortButton.UI_ColumnSortButton_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EServerSortType                SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ColumnSortButton_C::OnButtonClicked__DelegateSignature(EServerSortType SortType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ColumnSortButton.UI_ColumnSortButton_C.OnButtonClicked__DelegateSignature");

	UUI_ColumnSortButton_C_OnButtonClicked__DelegateSignature_Params params;
	params.SortType = SortType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
