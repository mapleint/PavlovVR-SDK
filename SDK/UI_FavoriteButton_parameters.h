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

// Function UI_FavoriteButton.UI_FavoriteButton_C.SetFavorite
struct UUI_FavoriteButton_C_SetFavorite_Params
{
	bool                                               IsFavorite;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_FavoriteButton.UI_FavoriteButton_C.Construct
struct UUI_FavoriteButton_C_Construct_Params
{
};

// Function UI_FavoriteButton.UI_FavoriteButton_C.OnMouseEnter
struct UUI_FavoriteButton_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_FavoriteButton.UI_FavoriteButton_C.OnMouseLeave
struct UUI_FavoriteButton_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_FavoriteButton.UI_FavoriteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_FavoriteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_FavoriteButton.UI_FavoriteButton_C.ExecuteUbergraph_UI_FavoriteButton
struct UUI_FavoriteButton_C_ExecuteUbergraph_UI_FavoriteButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_FavoriteButton.UI_FavoriteButton_C.OnFavoriteClicked__DelegateSignature
struct UUI_FavoriteButton_C_OnFavoriteClicked__DelegateSignature_Params
{
	bool                                               Favorite;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
