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

// BlueprintGeneratedClass BP_MenuUniverse.BP_MenuUniverse_C
// 0x0030 (0x03D8 - 0x03A8)
class ABP_MenuUniverse_C : public AMenuUniverse
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExploited;                                               // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	class ABP_PavlovPawn_C*                            OpenMenuPawn;                                             // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuUniverse.BP_MenuUniverse_C");
		return ptr;
	}


	bool IsPlayerTooFar();
	void GetMainUIWidget(class UUI_Main_C** UI_Main);
	void UserConstructionScript();
	void OnViewTargetChangingFrom(class AActor** ViewTarget);
	void OnEnableChanged(bool* bEnabled);
	void ReceiveTick(float* DeltaSeconds);
	void CameraExploit(bool bDetected);
	void ExecuteUbergraph_BP_MenuUniverse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
