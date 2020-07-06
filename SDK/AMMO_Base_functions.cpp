
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

// Function AMMO_Base.AMMO_Base_C.TryStack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAMMO_Base_C::TryStack(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_Base.AMMO_Base_C.TryStack");

	AAMMO_Base_C_TryStack_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AMMO_Base.AMMO_Base_C.SwapAmmoCountMat
// (Public, BlueprintCallable, BlueprintEvent)

void AAMMO_Base_C::SwapAmmoCountMat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_Base.AMMO_Base_C.SwapAmmoCountMat");

	AAMMO_Base_C_SwapAmmoCountMat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AMMO_Base.AMMO_Base_C.GetAmmoCountMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AmmoStacks                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAMMO_Base_C::GetAmmoCountMaterial(int AmmoStacks, class UTexture** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_Base.AMMO_Base_C.GetAmmoCountMaterial");

	AAMMO_Base_C_GetAmmoCountMaterial_Params params;
	params.AmmoStacks = AmmoStacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function AMMO_Base.AMMO_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAMMO_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_Base.AMMO_Base_C.UserConstructionScript");

	AAMMO_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AMMO_Base.AMMO_Base_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAMMO_Base_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_Base.AMMO_Base_C.Physicalize");

	AAMMO_Base_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AMMO_Base.AMMO_Base_C.OnParentChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItem**                ParentItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAMMO_Base_C::OnParentChanged(class AVRItem** ParentItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_Base.AMMO_Base_C.OnParentChanged");

	AAMMO_Base_C_OnParentChanged_Params params;
	params.ParentItem = ParentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AMMO_Base.AMMO_Base_C.StackAmmo_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AAMMO_Base_C::StackAmmo_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_Base.AMMO_Base_C.StackAmmo_Server");

	AAMMO_Base_C_StackAmmo_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AMMO_Base.AMMO_Base_C.OnAmmoCountChanged
// (Event, Public, BlueprintEvent)

void AAMMO_Base_C::OnAmmoCountChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_Base.AMMO_Base_C.OnAmmoCountChanged");

	AAMMO_Base_C_OnAmmoCountChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AMMO_Base.AMMO_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAMMO_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_Base.AMMO_Base_C.ReceiveBeginPlay");

	AAMMO_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AMMO_Base.AMMO_Base_C.AmmoStackedSound_Multi
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void AAMMO_Base_C::AmmoStackedSound_Multi()
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_Base.AMMO_Base_C.AmmoStackedSound_Multi");

	AAMMO_Base_C_AmmoStackedSound_Multi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AMMO_Base.AMMO_Base_C.ExecuteUbergraph_AMMO_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAMMO_Base_C::ExecuteUbergraph_AMMO_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_Base.AMMO_Base_C.ExecuteUbergraph_AMMO_Base");

	AAMMO_Base_C_ExecuteUbergraph_AMMO_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
