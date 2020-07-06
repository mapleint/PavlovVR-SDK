
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

// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameModeCheckbox_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.GetText_1");

	UUI_GameModeCheckbox_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.SetChecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameModeCheckbox_C::SetChecked(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.SetChecked");

	UUI_GameModeCheckbox_C_SetChecked_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.IsChecked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Checked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameModeCheckbox_C::IsChecked(bool* Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.IsChecked");

	UUI_GameModeCheckbox_C_IsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Checked != nullptr)
		*Checked = params.Checked;
}


// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameModeCheckbox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.Construct");

	UUI_GameModeCheckbox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_GameModeCheckbox_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnMouseEnter");

	UUI_GameModeCheckbox_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_GameModeCheckbox_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnMouseLeave");

	UUI_GameModeCheckbox_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameModeCheckbox_C::BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUI_GameModeCheckbox_C_BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnCheckStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameModeCheckbox_C::OnCheckStateChanged_Event(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnCheckStateChanged_Event");

	UUI_GameModeCheckbox_C_OnCheckStateChanged_Event_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.ExecuteUbergraph_UI_GameModeCheckbox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameModeCheckbox_C::ExecuteUbergraph_UI_GameModeCheckbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.ExecuteUbergraph_UI_GameModeCheckbox");

	UUI_GameModeCheckbox_C_ExecuteUbergraph_UI_GameModeCheckbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameModeCheckbox_C::OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnCheckStateChanged__DelegateSignature");

	UUI_GameModeCheckbox_C_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
