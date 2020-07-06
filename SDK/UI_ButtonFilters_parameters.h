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

// Function UI_ButtonFilters.UI_ButtonFilters_C.OnMouseButtonUp
struct UUI_ButtonFilters_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ButtonFilters.UI_ButtonFilters_C.OnMouseButtonDown
struct UUI_ButtonFilters_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ButtonFilters.UI_ButtonFilters_C.Construct
struct UUI_ButtonFilters_C_Construct_Params
{
};

// Function UI_ButtonFilters.UI_ButtonFilters_C.OnMouseEnter
struct UUI_ButtonFilters_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_ButtonFilters.UI_ButtonFilters_C.OnMouseLeave
struct UUI_ButtonFilters_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_ButtonFilters.UI_ButtonFilters_C.OnButtonClicked_Event
struct UUI_ButtonFilters_C_OnButtonClicked_Event_Params
{
};

// Function UI_ButtonFilters.UI_ButtonFilters_C.ExecuteUbergraph_UI_ButtonFilters
struct UUI_ButtonFilters_C_ExecuteUbergraph_UI_ButtonFilters_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ButtonFilters.UI_ButtonFilters_C.OnButtonClicked__DelegateSignature
struct UUI_ButtonFilters_C_OnButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
