
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

// Function BP_ShootingLane.BP_ShootingLane_C.DisableHoles?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Disable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ShootingLane_C::DisableHoles_(bool* Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.DisableHoles?");

	ABP_ShootingLane_C_DisableHoles__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disable != nullptr)
		*Disable = params.Disable;
}


// Function BP_ShootingLane.BP_ShootingLane_C.CompareLocations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 BoneLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DominantHandLocation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NonDominantHandLocation        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NonDominantHand_               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ABP_ShootingLane_C::CompareLocations(const struct FVector& BoneLocation, const struct FVector& DominantHandLocation, const struct FVector& NonDominantHandLocation, float* Alpha, bool* NonDominantHand_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.CompareLocations");

	ABP_ShootingLane_C_CompareLocations_Params params;
	params.BoneLocation = BoneLocation;
	params.DominantHandLocation = DominantHandLocation;
	params.NonDominantHandLocation = NonDominantHandLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alpha != nullptr)
		*Alpha = params.Alpha;
	if (NonDominantHand_ != nullptr)
		*NonDominantHand_ = params.NonDominantHand_;

	return params.ReturnValue;
}


// Function BP_ShootingLane.BP_ShootingLane_C.GetAnimBP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_LaneController_New_C* AsABP_Lane_Controller          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ShootingLane_C::GetAnimBP(class UABP_LaneController_New_C** AsABP_Lane_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.GetAnimBP");

	ABP_ShootingLane_C_GetAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsABP_Lane_Controller != nullptr)
		*AsABP_Lane_Controller = params.AsABP_Lane_Controller;
}


// Function BP_ShootingLane.BP_ShootingLane_C.OnRep_PlayerPresent
// (BlueprintCallable, BlueprintEvent)

void ABP_ShootingLane_C::OnRep_PlayerPresent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.OnRep_PlayerPresent");

	ABP_ShootingLane_C_OnRep_PlayerPresent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ShootingLane_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.UserConstructionScript");

	ABP_ShootingLane_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.ShakeTarget__FinishedFunc
// (BlueprintEvent)

void ABP_ShootingLane_C::ShakeTarget__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.ShakeTarget__FinishedFunc");

	ABP_ShootingLane_C_ShakeTarget__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.ShakeTarget__UpdateFunc
// (BlueprintEvent)

void ABP_ShootingLane_C::ShakeTarget__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.ShakeTarget__UpdateFunc");

	ABP_ShootingLane_C_ShakeTarget__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.LightIntensityTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_ShootingLane_C::LightIntensityTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.LightIntensityTimeline__FinishedFunc");

	ABP_ShootingLane_C_LightIntensityTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.LightIntensityTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_ShootingLane_C::LightIntensityTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.LightIntensityTimeline__UpdateFunc");

	ABP_ShootingLane_C_LightIntensityTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.TurnOffLight__FinishedFunc
// (BlueprintEvent)

void ABP_ShootingLane_C::TurnOffLight__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.TurnOffLight__FinishedFunc");

	ABP_ShootingLane_C_TurnOffLight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.TurnOffLight__UpdateFunc
// (BlueprintEvent)

void ABP_ShootingLane_C::TurnOffLight__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.TurnOffLight__UpdateFunc");

	ABP_ShootingLane_C_TurnOffLight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.TargetHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Target_C*            HitTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HitType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootingLane_C::TargetHit(int Points, class ABP_Target_C* HitTarget, int HitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.TargetHit");

	ABP_ShootingLane_C_TargetHit_Params params;
	params.Points = Points;
	params.HitTarget = HitTarget;
	params.HitType = HitType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.SetPracticeMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootingLane_C::SetPracticeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.SetPracticeMode");

	ABP_ShootingLane_C_SetPracticeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.MiniGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MoveTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootingLane_C::MiniGameSettings(float MoveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.MiniGameSettings");

	ABP_ShootingLane_C_MiniGameSettings_Params params;
	params.MoveTime = MoveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.Reset Target
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootingLane_C::Reset_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.Reset Target");

	ABP_ShootingLane_C_Reset_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.Move Target To Range
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootingLane_C::Move_Target_To_Range(float Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.Move Target To Range");

	ABP_ShootingLane_C_Move_Target_To_Range_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShootingLane_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.ReceiveBeginPlay");

	ABP_ShootingLane_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.InitMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameType>    MiniGameRange                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_TargetWepType>   TargetWeaponType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootingLane_C::InitMiniGame(TEnumAsByte<E_MiniGameType> MiniGameRange, TEnumAsByte<E_TargetWepType> TargetWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.InitMiniGame");

	ABP_ShootingLane_C_InitMiniGame_Params params;
	params.MiniGameRange = MiniGameRange;
	params.TargetWeaponType = TargetWeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KillHouse_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootingLane_C::StartMiniGame(bool KillHouse_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.StartMiniGame");

	ABP_ShootingLane_C_StartMiniGame_Params params;
	params.KillHouse_ = KillHouse_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootingLane_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.EndMiniGame");

	ABP_ShootingLane_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ShootingLane_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ShootingLane_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_ShootingLane.BP_ShootingLane_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootingLane_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_ShootingLane_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootingLane_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.ReceiveTick");

	ABP_ShootingLane_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.Stop Target
// (BlueprintCallable, BlueprintEvent)

void ABP_ShootingLane_C::Stop_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.Stop Target");

	ABP_ShootingLane_C_Stop_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.Play Click FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovItemController*   ItemController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootingLane_C::Play_Click_FX(class APavlovItemController* ItemController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.Play Click FX");

	ABP_ShootingLane_C_Play_Click_FX_Params params;
	params.ItemController = ItemController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.Create Target Material
// (BlueprintCallable, BlueprintEvent)

void ABP_ShootingLane_C::Create_Target_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.Create Target Material");

	ABP_ShootingLane_C_Create_Target_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.Create Material Editor
// (BlueprintCallable, BlueprintEvent)

void ABP_ShootingLane_C::Create_Material_Editor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.Create Material Editor");

	ABP_ShootingLane_C_Create_Material_Editor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.Hit Target Editor
// (BlueprintCallable, BlueprintEvent)

void ABP_ShootingLane_C::Hit_Target_Editor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.Hit Target Editor");

	ABP_ShootingLane_C_Hit_Target_Editor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.Play Move Sound Fx
// (BlueprintCallable, BlueprintEvent)

void ABP_ShootingLane_C::Play_Move_Sound_Fx()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.Play Move Sound Fx");

	ABP_ShootingLane_C_Play_Move_Sound_Fx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.StopMoveSoundFx
// (BlueprintCallable, BlueprintEvent)

void ABP_ShootingLane_C::StopMoveSoundFx()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.StopMoveSoundFx");

	ABP_ShootingLane_C_StopMoveSoundFx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.BndEvt__TargetHolder_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ShootingLane_C::BndEvt__TargetHolder_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.BndEvt__TargetHolder_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");

	ABP_ShootingLane_C_BndEvt__TargetHolder_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootingLane.BP_ShootingLane_C.ExecuteUbergraph_BP_ShootingLane
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootingLane_C::ExecuteUbergraph_BP_ShootingLane(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootingLane.BP_ShootingLane_C.ExecuteUbergraph_BP_ShootingLane");

	ABP_ShootingLane_C_ExecuteUbergraph_BP_ShootingLane_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
