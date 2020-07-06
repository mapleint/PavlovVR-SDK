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

// BlueprintGeneratedClass Sight_Base.Sight_Base_C
// 0x0018 (0x05A8 - 0x0590)
class ASight_Base_C : public AAttachmentSight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sight_Base.Sight_Base_C");
		return ptr;
	}


	struct FVector Temp(float* ReturnValue2, struct FRotator* ReturnValue3);
	struct FVector GetGrabLoc();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Use();
	void Physicalize(bool* bEnabled);
	void OnPick(class AVRItemController** ByController);
	void OnAttachmentModeChanged(bool* bEnabled);
	void Used(bool* bJustPicked);
	void OnDrop();
	void ExecuteUbergraph_Sight_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
