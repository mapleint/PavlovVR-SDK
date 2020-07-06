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

// Function UI_ColumnSortButton.UI_ColumnSortButton_C.SetSortType
struct UUI_ColumnSortButton_C_SetSortType_Params
{
	EServerSortType                                    SortType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ColumnSortButton.UI_ColumnSortButton_C.UpdateIcon
struct UUI_ColumnSortButton_C_UpdateIcon_Params
{
};

// Function UI_ColumnSortButton.UI_ColumnSortButton_C.GetVisibility_1
struct UUI_ColumnSortButton_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ColumnSortButton.UI_ColumnSortButton_C.GetBrush_1
struct UUI_ColumnSortButton_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ColumnSortButton.UI_ColumnSortButton_C.PreConstruct
struct UUI_ColumnSortButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ColumnSortButton.UI_ColumnSortButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_ColumnSortButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_ColumnSortButton.UI_ColumnSortButton_C.ExecuteUbergraph_UI_ColumnSortButton
struct UUI_ColumnSortButton_C_ExecuteUbergraph_UI_ColumnSortButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ColumnSortButton.UI_ColumnSortButton_C.OnButtonClicked__DelegateSignature
struct UUI_ColumnSortButton_C_OnButtonClicked__DelegateSignature_Params
{
	EServerSortType                                    SortType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
