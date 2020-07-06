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

// Function UI_OnlineEntry.UI_OnlineEntry_C.ExpandEntry
struct UUI_OnlineEntry_C_ExpandEntry_Params
{
	bool                                               InExpanded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.HasAIFilter
struct UUI_OnlineEntry_C_HasAIFilter_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.GetServerLobbyIcon
struct UUI_OnlineEntry_C_GetServerLobbyIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.GetDropdownVis
struct UUI_OnlineEntry_C_GetDropdownVis_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.GetPingColor
struct UUI_OnlineEntry_C_GetPingColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.GetFilterIcon
struct UUI_OnlineEntry_C_GetFilterIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.HasWeaponFilter
struct UUI_OnlineEntry_C_HasWeaponFilter_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.IsFriendLobby
struct UUI_OnlineEntry_C_IsFriendLobby_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.IsPinProtected
struct UUI_OnlineEntry_C_IsPinProtected_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.GetPing
struct UUI_OnlineEntry_C_GetPing_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.GetPlayerCount
struct UUI_OnlineEntry_C_GetPlayerCount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.FriendlyGMName
struct UUI_OnlineEntry_C_FriendlyGMName_Params
{
	struct FString                                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       GM;                                                       // (Parm, OutParm)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.GetGameMode
struct UUI_OnlineEntry_C_GetGameMode_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.GetServerName
struct UUI_OnlineEntry_C_GetServerName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.PreConstruct
struct UUI_OnlineEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.Construct
struct UUI_OnlineEntry_C_Construct_Params
{
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.BndEvt__Button_222_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_OnlineEntry_C_BndEvt__Button_222_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.UpdateContainer
struct UUI_OnlineEntry_C_UpdateContainer_Params
{
	class UServerContainer*                            ServerContainer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.BndEvt__UI_FavoriteButton_K2Node_ComponentBoundEvent_1_OnFavoriteClicked__DelegateSignature
struct UUI_OnlineEntry_C_BndEvt__UI_FavoriteButton_K2Node_ComponentBoundEvent_1_OnFavoriteClicked__DelegateSignature_Params
{
	bool                                               Favorite;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.BndEvt__UI_Button_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
struct UUI_OnlineEntry_C_BndEvt__UI_Button_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.ExecuteUbergraph_UI_OnlineEntry
struct UUI_OnlineEntry_C_ExecuteUbergraph_UI_OnlineEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.OnJoinServer__DelegateSignature
struct UUI_OnlineEntry_C_OnJoinServer__DelegateSignature_Params
{
	class UServerContainer*                            ServerContainer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineEntry.UI_OnlineEntry_C.OnEntryExpanded__DelegateSignature
struct UUI_OnlineEntry_C_OnEntryExpanded__DelegateSignature_Params
{
	class UUI_OnlineEntry_C*                           entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
