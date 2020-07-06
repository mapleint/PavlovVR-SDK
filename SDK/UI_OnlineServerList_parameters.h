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

// Function UI_OnlineServerList.UI_OnlineServerList_C.ConnectToContainer
struct UUI_OnlineServerList_C_ConnectToContainer_Params
{
	struct FString                                     Pin;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.MakeUnclickableWhenFiltering
struct UUI_OnlineServerList_C_MakeUnclickableWhenFiltering_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.Get_Refresh_bIsEnabled_1
struct UUI_OnlineServerList_C_Get_Refresh_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.ShowFilterBoxVis
struct UUI_OnlineServerList_C_ShowFilterBoxVis_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.RefreshList
struct UUI_OnlineServerList_C_RefreshList_Params
{
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.Construct
struct UUI_OnlineServerList_C_Construct_Params
{
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UUI_OnlineServerList_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
struct UUI_OnlineServerList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_OnlineEntryHeader_K2Node_ComponentBoundEvent_2_OnChangeSortFilters__DelegateSignature
struct UUI_OnlineServerList_C_BndEvt__UI_OnlineEntryHeader_K2Node_ComponentBoundEvent_2_OnChangeSortFilters__DelegateSignature_Params
{
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.UpdateList
struct UUI_OnlineServerList_C_UpdateList_Params
{
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
struct UUI_OnlineServerList_C_BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.OnEntryExpanded_Event_1
struct UUI_OnlineServerList_C_OnEntryExpanded_Event_1_Params
{
	class UUI_OnlineEntry_C*                           entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.OnJoinServer_Event_1
struct UUI_OnlineServerList_C_OnJoinServer_Event_1_Params
{
	class UServerContainer*                            ServerContainer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_PIN_1_K2Node_ComponentBoundEvent_4_OnConfirm__DelegateSignature
struct UUI_OnlineServerList_C_BndEvt__UI_PIN_1_K2Node_ComponentBoundEvent_4_OnConfirm__DelegateSignature_Params
{
	struct FString                                     PinString;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.ServerConnectFailure
struct UUI_OnlineServerList_C_ServerConnectFailure_Params
{
	EConnectorFailureReason                            ErrorMessage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__CoopLobby_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
struct UUI_OnlineServerList_C_BndEvt__CoopLobby_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__CreateLobby_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
struct UUI_OnlineServerList_C_BndEvt__CreateLobby_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_RegionSelect_K2Node_ComponentBoundEvent_7_RegionSelected__DelegateSignature
struct UUI_OnlineServerList_C_BndEvt__UI_RegionSelect_K2Node_ComponentBoundEvent_7_RegionSelected__DelegateSignature_Params
{
	bool                                               bCancel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature
struct UUI_OnlineServerList_C_BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_OnlineServerFilters_K2Node_ComponentBoundEvent_9_ExitFilterMenu__DelegateSignature
struct UUI_OnlineServerList_C_BndEvt__UI_OnlineServerFilters_K2Node_ComponentBoundEvent_9_ExitFilterMenu__DelegateSignature_Params
{
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.ExecuteUbergraph_UI_OnlineServerList
struct UUI_OnlineServerList_C_ExecuteUbergraph_UI_OnlineServerList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineServerList.UI_OnlineServerList_C.ExitOnlineMenu__DelegateSignature
struct UUI_OnlineServerList_C_ExitOnlineMenu__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
