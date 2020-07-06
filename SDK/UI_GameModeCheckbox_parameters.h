#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.GetText_1
struct UUI_GameModeCheckbox_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.SetChecked
struct UUI_GameModeCheckbox_C_SetChecked_Params
{
	bool                                               Checked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.IsChecked
struct UUI_GameModeCheckbox_C_IsChecked_Params
{
	bool                                               Checked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.Construct
struct UUI_GameModeCheckbox_C_Construct_Params
{
};

// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnMouseEnter
struct UUI_GameModeCheckbox_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnMouseLeave
struct UUI_GameModeCheckbox_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUI_GameModeCheckbox_C_BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnCheckStateChanged_Event
struct UUI_GameModeCheckbox_C_OnCheckStateChanged_Event_Params
{
	bool                                               Checked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.ExecuteUbergraph_UI_GameModeCheckbox
struct UUI_GameModeCheckbox_C_ExecuteUbergraph_UI_GameModeCheckbox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameModeCheckbox.UI_GameModeCheckbox_C.OnCheckStateChanged__DelegateSignature
struct UUI_GameModeCheckbox_C_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               Checked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
