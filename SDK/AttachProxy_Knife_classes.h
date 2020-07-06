#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AttachProxy_Knife.AttachProxy_Knife_C
// 0x0018 (0x0398 - 0x0380)
class AAttachProxy_Knife_C : public AAttachProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVRSelectionComponent*                       VRSelection;                                              // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Knife_Bayonet;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttachProxy_Knife.AttachProxy_Knife_C");
		return ptr;
	}


	bool UseSoftGrabConstraint();
	void UserConstructionScript();
	void UnGrabbed(class AVRController* Controller);
	void ReceiveBeginPlay();
	void Grabbed(class AVRController* Controller);
	void LootGrabbed(class ABP_PavlovPawn_C* PavPawn, bool Dominant_);
	void BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__SM_Knife_Bayonet_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_AttachProxy_Knife(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
