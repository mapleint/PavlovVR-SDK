
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

// Function AttachProxy_Knife.AttachProxy_Knife_C.UseSoftGrabConstraint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAttachProxy_Knife_C::UseSoftGrabConstraint()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachProxy_Knife.AttachProxy_Knife_C.UseSoftGrabConstraint");

	AAttachProxy_Knife_C_UseSoftGrabConstraint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AttachProxy_Knife.AttachProxy_Knife_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAttachProxy_Knife_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachProxy_Knife.AttachProxy_Knife_C.UserConstructionScript");

	AAttachProxy_Knife_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachProxy_Knife.AttachProxy_Knife_C.UnGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachProxy_Knife_C::UnGrabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachProxy_Knife.AttachProxy_Knife_C.UnGrabbed");

	AAttachProxy_Knife_C_UnGrabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachProxy_Knife.AttachProxy_Knife_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAttachProxy_Knife_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachProxy_Knife.AttachProxy_Knife_C.ReceiveBeginPlay");

	AAttachProxy_Knife_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachProxy_Knife.AttachProxy_Knife_C.Grabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachProxy_Knife_C::Grabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachProxy_Knife.AttachProxy_Knife_C.Grabbed");

	AAttachProxy_Knife_C_Grabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachProxy_Knife.AttachProxy_Knife_C.LootGrabbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Dominant_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachProxy_Knife_C::LootGrabbed(class ABP_PavlovPawn_C* PavPawn, bool Dominant_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachProxy_Knife.AttachProxy_Knife_C.LootGrabbed");

	AAttachProxy_Knife_C_LootGrabbed_Params params;
	params.PavPawn = PavPawn;
	params.Dominant_ = Dominant_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachProxy_Knife.AttachProxy_Knife_C.BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAttachProxy_Knife_C::BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachProxy_Knife.AttachProxy_Knife_C.BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AAttachProxy_Knife_C_BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachProxy_Knife.AttachProxy_Knife_C.BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachProxy_Knife_C::BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachProxy_Knife.AttachProxy_Knife_C.BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AAttachProxy_Knife_C_BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachProxy_Knife.AttachProxy_Knife_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachProxy_Knife_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachProxy_Knife.AttachProxy_Knife_C.ReceiveTick");

	AAttachProxy_Knife_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachProxy_Knife.AttachProxy_Knife_C.ExecuteUbergraph_AttachProxy_Knife
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachProxy_Knife_C::ExecuteUbergraph_AttachProxy_Knife(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachProxy_Knife.AttachProxy_Knife_C.ExecuteUbergraph_AttachProxy_Knife");

	AAttachProxy_Knife_C_ExecuteUbergraph_AttachProxy_Knife_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
