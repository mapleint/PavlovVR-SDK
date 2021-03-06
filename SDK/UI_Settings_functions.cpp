
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

// Function UI_Settings.UI_Settings_C.NotOculusQuestVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Settings_C::NotOculusQuestVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.NotOculusQuestVisibility");

	UUI_Settings_C_NotOculusQuestVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Settings.UI_Settings_C.Get_GripForceCheckbox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Settings_C::Get_GripForceCheckbox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.Get_GripForceCheckbox_Visibility_1");

	UUI_Settings_C_Get_GripForceCheckbox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Settings.UI_Settings_C.OculusOnlyVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Settings_C::OculusOnlyVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.OculusOnlyVisibility");

	UUI_Settings_C_OculusOnlyVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Settings.UI_Settings_C.GetLocomotionAsEnum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OptionString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EVRSmoothLocomotionMode        EnumValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::GetLocomotionAsEnum(const struct FString& OptionString, EVRSmoothLocomotionMode* EnumValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.GetLocomotionAsEnum");

	UUI_Settings_C_GetLocomotionAsEnum_Params params;
	params.OptionString = OptionString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnumValue != nullptr)
		*EnumValue = params.EnumValue;
}


// Function UI_Settings.UI_Settings_C.UpdateCaptureDevices
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Settings_C::UpdateCaptureDevices()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.UpdateCaptureDevices");

	UUI_Settings_C_UpdateCaptureDevices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.UpdateOculusVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Settings_C::UpdateOculusVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.UpdateOculusVisibility");

	UUI_Settings_C_UpdateOculusVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.PopulateActionCombo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*         Combo                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Settings_C::PopulateActionCombo(class UComboBoxString* Combo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.PopulateActionCombo");

	UUI_Settings_C_PopulateActionCombo_Params params;
	params.Combo = Combo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.GetActionAsEnum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OptionString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// ECustomAction                  EnumValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::GetActionAsEnum(const struct FString& OptionString, ECustomAction* EnumValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.GetActionAsEnum");

	UUI_Settings_C_GetActionAsEnum_Params params;
	params.OptionString = OptionString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnumValue != nullptr)
		*EnumValue = params.EnumValue;
}


// Function UI_Settings.UI_Settings_C.SetTabActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SettingsTab_C*       Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Settings_C::SetTabActive(class UUI_SettingsTab_C* Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.SetTabActive");

	UUI_Settings_C_SetTabActive_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Settings_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.GetVisibility_1");

	UUI_Settings_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Settings.UI_Settings_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Settings_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.Update");

	UUI_Settings_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_317_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Settings_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_317_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_317_OnButtonClicked__DelegateSignature");

	UUI_Settings_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_317_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_320_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Settings_C::BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_320_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_320_OnButtonClicked__DelegateSignature");

	UUI_Settings_C_BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_320_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.OnGameUserSettingsUINeedsUpdate_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_Settings_C::OnGameUserSettingsUINeedsUpdate_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.OnGameUserSettingsUINeedsUpdate_Event_1");

	UUI_Settings_C_OnGameUserSettingsUINeedsUpdate_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Settings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.Construct");

	UUI_Settings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.OnValueChaged_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_Settings_C::OnValueChaged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.OnValueChaged_Event_1");

	UUI_Settings_C_OnValueChaged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_01
// (BlueprintCallable, BlueprintEvent)

void UUI_Settings_C::CustomEvent_01()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_01");

	UUI_Settings_C_CustomEvent_01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_02
// (BlueprintCallable, BlueprintEvent)

void UUI_Settings_C::CustomEvent_02()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_02");

	UUI_Settings_C_CustomEvent_02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.OnValueChaged_Event_2
// (BlueprintCallable, BlueprintEvent)

void UUI_Settings_C::OnValueChaged_Event_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.OnValueChaged_Event_2");

	UUI_Settings_C_OnValueChaged_Event_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__VideoTab_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Settings_C::BndEvt__VideoTab_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__VideoTab_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature");

	UUI_Settings_C_BndEvt__VideoTab_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__GeneralTab_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Settings_C::BndEvt__GeneralTab_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__GeneralTab_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature");

	UUI_Settings_C_BndEvt__GeneralTab_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__Online_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Settings_C::BndEvt__Online_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__Online_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature");

	UUI_Settings_C_BndEvt__Online_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BindGeneralInputs
// (BlueprintCallable, BlueprintEvent)

void UUI_Settings_C::BindGeneralInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BindGeneralInputs");

	UUI_Settings_C_BindGeneralInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__CalibrateButton_K2Node_ComponentBoundEvent_605_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Settings_C::BndEvt__CalibrateButton_K2Node_ComponentBoundEvent_605_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__CalibrateButton_K2Node_ComponentBoundEvent_605_OnButtonClicked__DelegateSignature");

	UUI_Settings_C_BndEvt__CalibrateButton_K2Node_ComponentBoundEvent_605_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__Button_133_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Settings_C::BndEvt__Button_133_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__Button_133_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature");

	UUI_Settings_C_BndEvt__Button_133_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.OnCheckStateChanged_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::OnCheckStateChanged_Event_2(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.OnCheckStateChanged_Event_2");

	UUI_Settings_C_OnCheckStateChanged_Event_2_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.OnCheckStateChanged_Event_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::OnCheckStateChanged_Event_3(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.OnCheckStateChanged_Event_3");

	UUI_Settings_C_OnCheckStateChanged_Event_3_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_1(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_1");

	UUI_Settings_C_CustomEvent_1_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_2(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_2");

	UUI_Settings_C_CustomEvent_2_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__SwapHands_K2Node_ComponentBoundEvent_189_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Settings_C::BndEvt__SwapHands_K2Node_ComponentBoundEvent_189_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__SwapHands_K2Node_ComponentBoundEvent_189_OnButtonClicked__DelegateSignature");

	UUI_Settings_C_BndEvt__SwapHands_K2Node_ComponentBoundEvent_189_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_5(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_5");

	UUI_Settings_C_CustomEvent_5_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_7(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_7");

	UUI_Settings_C_CustomEvent_7_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent");

	UUI_Settings_C_CustomEvent_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__ReseTutorial_K2Node_ComponentBoundEvent_42_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::BndEvt__ReseTutorial_K2Node_ComponentBoundEvent_42_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__ReseTutorial_K2Node_ComponentBoundEvent_42_OnCheckStateChanged__DelegateSignature");

	UUI_Settings_C_BndEvt__ReseTutorial_K2Node_ComponentBoundEvent_42_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_9(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_9");

	UUI_Settings_C_CustomEvent_9_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__InputTab_K2Node_ComponentBoundEvent_629_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Settings_C::BndEvt__InputTab_K2Node_ComponentBoundEvent_629_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__InputTab_K2Node_ComponentBoundEvent_629_OnClicked__DelegateSignature");

	UUI_Settings_C_BndEvt__InputTab_K2Node_ComponentBoundEvent_629_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_11(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_11");

	UUI_Settings_C_CustomEvent_11_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_13
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_13(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_13");

	UUI_Settings_C_CustomEvent_13_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.PopulateActionCombos
// (BlueprintCallable, BlueprintEvent)

void UUI_Settings_C::PopulateActionCombos()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.PopulateActionCombos");

	UUI_Settings_C_PopulateActionCombos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_3(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_3");

	UUI_Settings_C_CustomEvent_3_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_15(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_15");

	UUI_Settings_C_CustomEvent_15_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_17
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_17(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_17");

	UUI_Settings_C_CustomEvent_17_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_6(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_6");

	UUI_Settings_C_CustomEvent_6_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_18
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_18(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_18");

	UUI_Settings_C_CustomEvent_18_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__Sound_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Settings_C::BndEvt__Sound_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__Sound_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_Settings_C_BndEvt__Sound_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.OnSelectionChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::OnSelectionChanged_Event_1(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.OnSelectionChanged_Event_1");

	UUI_Settings_C_OnSelectionChanged_Event_1_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_73
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_73(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_73");

	UUI_Settings_C_CustomEvent_73_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_8(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_8");

	UUI_Settings_C_CustomEvent_8_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_74(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_74");

	UUI_Settings_C_CustomEvent_74_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__AudioQuality_K2Node_ComponentBoundEvent_1_OnValueChaged__DelegateSignature
// (BlueprintEvent)

void UUI_Settings_C::BndEvt__AudioQuality_K2Node_ComponentBoundEvent_1_OnValueChaged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__AudioQuality_K2Node_ComponentBoundEvent_1_OnValueChaged__DelegateSignature");

	UUI_Settings_C_BndEvt__AudioQuality_K2Node_ComponentBoundEvent_1_OnValueChaged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_340
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_340(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_340");

	UUI_Settings_C_CustomEvent_340_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_901
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_901(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_901");

	UUI_Settings_C_CustomEvent_901_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_10(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_10");

	UUI_Settings_C_CustomEvent_10_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_113
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_113(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_113");

	UUI_Settings_C_CustomEvent_113_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_12(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_12");

	UUI_Settings_C_CustomEvent_12_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__StartMapCombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::BndEvt__StartMapCombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__StartMapCombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	UUI_Settings_C_BndEvt__StartMapCombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::CustomEvent_4(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.CustomEvent_4");

	UUI_Settings_C_CustomEvent_4_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.Tick");

	UUI_Settings_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.BndEvt__bForceTube_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::BndEvt__bForceTube_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__bForceTube_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature");

	UUI_Settings_C_BndEvt__bForceTube_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.ExecuteUbergraph_UI_Settings
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Settings_C::ExecuteUbergraph_UI_Settings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.ExecuteUbergraph_UI_Settings");

	UUI_Settings_C_ExecuteUbergraph_UI_Settings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Settings.UI_Settings_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Settings_C::OnExit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.OnExit__DelegateSignature");

	UUI_Settings_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
