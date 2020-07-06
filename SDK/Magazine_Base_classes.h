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

// BlueprintGeneratedClass Magazine_Base.Magazine_Base_C
// 0x0030 (0x0540 - 0x0510)
class AMagazine_Base_C : public AMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDestroyOnRelease;                                        // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0521(0x0007) MISSED OFFSET
	class UStaticMesh*                                 EmptyMesh;                                                // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 NormalMesh;                                               // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PackMagSound;                                             // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Magazine_Base.Magazine_Base_C");
		return ptr;
	}


	void TryBreakDownMag(class UObject* Object);
	void UpdateMesh();
	void UserConstructionScript();
	void Physicalize(bool* bEnabled);
	void OnReleasedFromGun();
	void ReceiveBeginPlay();
	void Used(bool* bJustPicked);
	void OnBulletsChanged();
	void OnParentChanged(class AVRItem** ParentItem);
	void BreakDownMag_Server();
	void PackMagSound_Multi();
	void ExecuteUbergraph_Magazine_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
