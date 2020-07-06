
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

// Function UI_FavoriteButton.UI_FavoriteButton_C.SetFavorite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFavorite                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_FavoriteButton_C::SetFavorite(bool IsFavorite)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FavoriteButton.UI_FavoriteButton_C.SetFavorite");

	UUI_FavoriteButton_C_SetFavorite_Params params;
	params.IsFavorite = IsFavorite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FavoriteButton.UI_FavoriteButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_FavoriteButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FavoriteButton.UI_FavoriteButton_C.Construct");

	UUI_FavoriteButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FavoriteButton.UI_FavoriteButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_FavoriteButton_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FavoriteButton.UI_FavoriteButton_C.OnMouseEnter");

	UUI_FavoriteButton_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FavoriteButton.UI_FavoriteButton_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_FavoriteButton_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FavoriteButton.UI_FavoriteButton_C.OnMouseLeave");

	UUI_FavoriteButton_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FavoriteButton.UI_FavoriteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_FavoriteButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FavoriteButton.UI_FavoriteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_FavoriteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FavoriteButton.UI_FavoriteButton_C.ExecuteUbergraph_UI_FavoriteButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_FavoriteButton_C::ExecuteUbergraph_UI_FavoriteButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FavoriteButton.UI_FavoriteButton_C.ExecuteUbergraph_UI_FavoriteButton");

	UUI_FavoriteButton_C_ExecuteUbergraph_UI_FavoriteButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FavoriteButton.UI_FavoriteButton_C.OnFavoriteClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Favorite                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_FavoriteButton_C::OnFavoriteClicked__DelegateSignature(bool Favorite)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FavoriteButton.UI_FavoriteButton_C.OnFavoriteClicked__DelegateSignature");

	UUI_FavoriteButton_C_OnFavoriteClicked__DelegateSignature_Params params;
	params.Favorite = Favorite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
