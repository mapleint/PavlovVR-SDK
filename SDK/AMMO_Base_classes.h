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

// BlueprintGeneratedClass AMMO_Base.AMMO_Base_C
// 0x0028 (0x0528 - 0x0500)
class AAMMO_Base_C : public AAmmoBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      AmmoMesh;                                                 // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AmmoMaterialInstance;                                     // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  AmmoStackSound;                                           // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AMMO_Base.AMMO_Base_C");
		return ptr;
	}


	void TryStack(class UObject* Object);
	void SwapAmmoCountMat();
	void GetAmmoCountMaterial(int AmmoStacks, class UTexture** Texture);
	void UserConstructionScript();
	void Physicalize(bool* bEnabled);
	void OnParentChanged(class AVRItem** ParentItem);
	void StackAmmo_Server();
	void OnAmmoCountChanged();
	void ReceiveBeginPlay();
	void AmmoStackedSound_Multi();
	void ExecuteUbergraph_AMMO_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
