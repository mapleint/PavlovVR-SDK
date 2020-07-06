
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

// Function UI_OnlineServerList.UI_OnlineServerList_C.ConnectToContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Pin                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_OnlineServerList_C::ConnectToContainer(const struct FString& Pin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.ConnectToContainer");

	UUI_OnlineServerList_C_ConnectToContainer_Params params;
	params.Pin = Pin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.MakeUnclickableWhenFiltering
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_OnlineServerList_C::MakeUnclickableWhenFiltering()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.MakeUnclickableWhenFiltering");

	UUI_OnlineServerList_C_MakeUnclickableWhenFiltering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.Get_Refresh_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_OnlineServerList_C::Get_Refresh_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.Get_Refresh_bIsEnabled_1");

	UUI_OnlineServerList_C_Get_Refresh_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.ShowFilterBoxVis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_OnlineServerList_C::ShowFilterBoxVis()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.ShowFilterBoxVis");

	UUI_OnlineServerList_C_ShowFilterBoxVis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.RefreshList
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_OnlineServerList_C::RefreshList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.RefreshList");

	UUI_OnlineServerList_C_RefreshList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_OnlineServerList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.Construct");

	UUI_OnlineServerList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_OnlineServerList_C::BndEvt__Refresh_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UUI_OnlineServerList_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_OnlineServerList_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	UUI_OnlineServerList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_OnlineEntryHeader_K2Node_ComponentBoundEvent_2_OnChangeSortFilters__DelegateSignature
// (BlueprintEvent)

void UUI_OnlineServerList_C::BndEvt__UI_OnlineEntryHeader_K2Node_ComponentBoundEvent_2_OnChangeSortFilters__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_OnlineEntryHeader_K2Node_ComponentBoundEvent_2_OnChangeSortFilters__DelegateSignature");

	UUI_OnlineServerList_C_BndEvt__UI_OnlineEntryHeader_K2Node_ComponentBoundEvent_2_OnChangeSortFilters__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.UpdateList
// (BlueprintCallable, BlueprintEvent)

void UUI_OnlineServerList_C::UpdateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.UpdateList");

	UUI_OnlineServerList_C_UpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_OnlineServerList_C::BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");

	UUI_OnlineServerList_C_BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.OnEntryExpanded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_OnlineEntry_C*       entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_OnlineServerList_C::OnEntryExpanded_Event_1(class UUI_OnlineEntry_C* entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.OnEntryExpanded_Event_1");

	UUI_OnlineServerList_C_OnEntryExpanded_Event_1_Params params;
	params.entry = entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.OnJoinServer_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerContainer*        ServerContainer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineServerList_C::OnJoinServer_Event_1(class UServerContainer* ServerContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.OnJoinServer_Event_1");

	UUI_OnlineServerList_C_OnJoinServer_Event_1_Params params;
	params.ServerContainer = ServerContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_PIN_1_K2Node_ComponentBoundEvent_4_OnConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 PinString                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_OnlineServerList_C::BndEvt__UI_PIN_1_K2Node_ComponentBoundEvent_4_OnConfirm__DelegateSignature(const struct FString& PinString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_PIN_1_K2Node_ComponentBoundEvent_4_OnConfirm__DelegateSignature");

	UUI_OnlineServerList_C_BndEvt__UI_PIN_1_K2Node_ComponentBoundEvent_4_OnConfirm__DelegateSignature_Params params;
	params.PinString = PinString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.ServerConnectFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EConnectorFailureReason        ErrorMessage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineServerList_C::ServerConnectFailure(EConnectorFailureReason ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.ServerConnectFailure");

	UUI_OnlineServerList_C_ServerConnectFailure_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__CoopLobby_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_OnlineServerList_C::BndEvt__CoopLobby_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__CoopLobby_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature");

	UUI_OnlineServerList_C_BndEvt__CoopLobby_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__CreateLobby_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_OnlineServerList_C::BndEvt__CreateLobby_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__CreateLobby_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature");

	UUI_OnlineServerList_C_BndEvt__CreateLobby_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_RegionSelect_K2Node_ComponentBoundEvent_7_RegionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bCancel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineServerList_C::BndEvt__UI_RegionSelect_K2Node_ComponentBoundEvent_7_RegionSelected__DelegateSignature(bool bCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_RegionSelect_K2Node_ComponentBoundEvent_7_RegionSelected__DelegateSignature");

	UUI_OnlineServerList_C_BndEvt__UI_RegionSelect_K2Node_ComponentBoundEvent_7_RegionSelected__DelegateSignature_Params params;
	params.bCancel = bCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_OnlineServerList_C::BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature");

	UUI_OnlineServerList_C_BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_OnlineServerFilters_K2Node_ComponentBoundEvent_9_ExitFilterMenu__DelegateSignature
// (BlueprintEvent)

void UUI_OnlineServerList_C::BndEvt__UI_OnlineServerFilters_K2Node_ComponentBoundEvent_9_ExitFilterMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.BndEvt__UI_OnlineServerFilters_K2Node_ComponentBoundEvent_9_ExitFilterMenu__DelegateSignature");

	UUI_OnlineServerList_C_BndEvt__UI_OnlineServerFilters_K2Node_ComponentBoundEvent_9_ExitFilterMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.ExecuteUbergraph_UI_OnlineServerList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineServerList_C::ExecuteUbergraph_UI_OnlineServerList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.ExecuteUbergraph_UI_OnlineServerList");

	UUI_OnlineServerList_C_ExecuteUbergraph_UI_OnlineServerList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineServerList.UI_OnlineServerList_C.ExitOnlineMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_OnlineServerList_C::ExitOnlineMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineServerList.UI_OnlineServerList_C.ExitOnlineMenu__DelegateSignature");

	UUI_OnlineServerList_C_ExitOnlineMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
