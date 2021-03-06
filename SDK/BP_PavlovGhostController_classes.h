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

// BlueprintGeneratedClass BP_PavlovGhostController.BP_PavlovGhostController_C
// 0x0008 (0x0888 - 0x0880)
class ABP_PavlovGhostController_C : public AGhostItemController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PavlovGhostController.BP_PavlovGhostController_C");
		return ptr;
	}


	void SetVRScale(float Scale);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GripChanged(bool* bNewGrip);
	void OnPointModeChanged(EGhostPointMode* OldPointMode);
	void ExecuteUbergraph_BP_PavlovGhostController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
