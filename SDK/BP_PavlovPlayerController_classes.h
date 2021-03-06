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

// BlueprintGeneratedClass BP_PavlovPlayerController.BP_PavlovPlayerController_C
// 0x0008 (0x0818 - 0x0810)
class ABP_PavlovPlayerController_C : public APavlovPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0810(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PavlovPlayerController.BP_PavlovPlayerController_C");
		return ptr;
	}


	void AdminKillPlayer(class APavlovPlayerState* Player);
	void AdminTeleportPlayer(class APavlovPlayerState* Player);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnBuyingChanged_Event_1(bool bBuying);
	void AdminAction(class APlayerState* PlayerState, TEnumAsByte<E_AdminAction> Action);
	void ExecuteUbergraph_BP_PavlovPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
