
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

// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.UseSoftGrabConstraint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_KillhouseDoors_Travel_C::UseSoftGrabConstraint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.UseSoftGrabConstraint");

	ABP_KillhouseDoors_Travel_C_UseSoftGrabConstraint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_KillhouseDoors_Travel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.UserConstructionScript");

	ABP_KillhouseDoors_Travel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.UnGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillhouseDoors_Travel_C::UnGrabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.UnGrabbed");

	ABP_KillhouseDoors_Travel_C_UnGrabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_KillhouseDoors_Travel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.ReceiveBeginPlay");

	ABP_KillhouseDoors_Travel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.Grabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillhouseDoors_Travel_C::Grabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.Grabbed");

	ABP_KillhouseDoors_Travel_C_Grabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_KillhouseDoors_Travel_C::BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_KillhouseDoors_Travel_C_BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.ExecuteUbergraph_BP_KillhouseDoors_Travel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillhouseDoors_Travel_C::ExecuteUbergraph_BP_KillhouseDoors_Travel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors_Travel.BP_KillhouseDoors_Travel_C.ExecuteUbergraph_BP_KillhouseDoors_Travel");

	ABP_KillhouseDoors_Travel_C_ExecuteUbergraph_BP_KillhouseDoors_Travel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
