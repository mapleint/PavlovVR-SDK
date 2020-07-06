
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

// Function UI_OnlineEntry.UI_OnlineEntry_C.ExpandEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InExpanded                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineEntry_C::ExpandEntry(bool InExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.ExpandEntry");

	UUI_OnlineEntry_C_ExpandEntry_Params params;
	params.InExpanded = InExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.HasAIFilter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_OnlineEntry_C::HasAIFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.HasAIFilter");

	UUI_OnlineEntry_C_HasAIFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.GetServerLobbyIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_OnlineEntry_C::GetServerLobbyIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.GetServerLobbyIcon");

	UUI_OnlineEntry_C_GetServerLobbyIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.GetDropdownVis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_OnlineEntry_C::GetDropdownVis()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.GetDropdownVis");

	UUI_OnlineEntry_C_GetDropdownVis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.GetPingColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_OnlineEntry_C::GetPingColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.GetPingColor");

	UUI_OnlineEntry_C_GetPingColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.GetFilterIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_OnlineEntry_C::GetFilterIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.GetFilterIcon");

	UUI_OnlineEntry_C_GetFilterIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.HasWeaponFilter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_OnlineEntry_C::HasWeaponFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.HasWeaponFilter");

	UUI_OnlineEntry_C_HasWeaponFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.IsFriendLobby
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_OnlineEntry_C::IsFriendLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.IsFriendLobby");

	UUI_OnlineEntry_C_IsFriendLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.IsPinProtected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_OnlineEntry_C::IsPinProtected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.IsPinProtected");

	UUI_OnlineEntry_C_IsPinProtected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.GetPing
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_OnlineEntry_C::GetPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.GetPing");

	UUI_OnlineEntry_C_GetPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.GetPlayerCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_OnlineEntry_C::GetPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.GetPlayerCount");

	UUI_OnlineEntry_C_GetPlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.FriendlyGMName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   GM                             (Parm, OutParm)

void UUI_OnlineEntry_C::FriendlyGMName(const struct FString& Selection, struct FText* GM)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.FriendlyGMName");

	UUI_OnlineEntry_C_FriendlyGMName_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GM != nullptr)
		*GM = params.GM;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.GetGameMode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_OnlineEntry_C::GetGameMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.GetGameMode");

	UUI_OnlineEntry_C_GetGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.GetServerName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_OnlineEntry_C::GetServerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.GetServerName");

	UUI_OnlineEntry_C_GetServerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.PreConstruct");

	UUI_OnlineEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_OnlineEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.Construct");

	UUI_OnlineEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.BndEvt__Button_222_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_OnlineEntry_C::BndEvt__Button_222_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.BndEvt__Button_222_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_OnlineEntry_C_BndEvt__Button_222_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.UpdateContainer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerContainer*        ServerContainer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineEntry_C::UpdateContainer(class UServerContainer* ServerContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.UpdateContainer");

	UUI_OnlineEntry_C_UpdateContainer_Params params;
	params.ServerContainer = ServerContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.BndEvt__UI_FavoriteButton_K2Node_ComponentBoundEvent_1_OnFavoriteClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Favorite                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineEntry_C::BndEvt__UI_FavoriteButton_K2Node_ComponentBoundEvent_1_OnFavoriteClicked__DelegateSignature(bool Favorite)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.BndEvt__UI_FavoriteButton_K2Node_ComponentBoundEvent_1_OnFavoriteClicked__DelegateSignature");

	UUI_OnlineEntry_C_BndEvt__UI_FavoriteButton_K2Node_ComponentBoundEvent_1_OnFavoriteClicked__DelegateSignature_Params params;
	params.Favorite = Favorite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.BndEvt__UI_Button_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_OnlineEntry_C::BndEvt__UI_Button_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.BndEvt__UI_Button_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");

	UUI_OnlineEntry_C_BndEvt__UI_Button_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.ExecuteUbergraph_UI_OnlineEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineEntry_C::ExecuteUbergraph_UI_OnlineEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.ExecuteUbergraph_UI_OnlineEntry");

	UUI_OnlineEntry_C_ExecuteUbergraph_UI_OnlineEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.OnJoinServer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerContainer*        ServerContainer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineEntry_C::OnJoinServer__DelegateSignature(class UServerContainer* ServerContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.OnJoinServer__DelegateSignature");

	UUI_OnlineEntry_C_OnJoinServer__DelegateSignature_Params params;
	params.ServerContainer = ServerContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineEntry.UI_OnlineEntry_C.OnEntryExpanded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_OnlineEntry_C*       entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_OnlineEntry_C::OnEntryExpanded__DelegateSignature(class UUI_OnlineEntry_C* entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineEntry.UI_OnlineEntry_C.OnEntryExpanded__DelegateSignature");

	UUI_OnlineEntry_C_OnEntryExpanded__DelegateSignature_Params params;
	params.entry = entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
