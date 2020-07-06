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

// BlueprintGeneratedClass Suppressor_Base.Suppressor_Base_C
// 0x0018 (0x0548 - 0x0530)
class ASuppressor_Base_C : public AAttachmentSuppressor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Suppressor_Base.Suppressor_Base_C");
		return ptr;
	}


	struct FVector GetGrabLoc();
	void UserConstructionScript();
	void Physicalize(bool* bEnabled);
	void Use();
	void ReceiveBeginPlay();
	void OnPick(class AVRItemController** ByController);
	void OnAttachmentModeChanged(bool* bEnabled);
	void ExecuteUbergraph_Suppressor_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
