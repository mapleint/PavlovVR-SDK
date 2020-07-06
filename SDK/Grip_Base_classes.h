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

// BlueprintGeneratedClass Grip_Base.Grip_Base_C
// 0x0018 (0x0588 - 0x0570)
class AGrip_Base_C : public AAttachmentGrip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Grip_Base.Grip_Base_C");
		return ptr;
	}


	struct FVector GetGrabLoc();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Physicalize(bool* bEnabled);
	void Use();
	void OnPick(class AVRItemController** ByController);
	void OnAttachmentModeChanged(bool* bEnabled);
	void ExecuteUbergraph_Grip_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
