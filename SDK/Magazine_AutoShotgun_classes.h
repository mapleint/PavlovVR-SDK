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

// BlueprintGeneratedClass Magazine_AutoShotgun.Magazine_AutoShotgun_C
// 0x0010 (0x0550 - 0x0540)
class AMagazine_AutoShotgun_C : public AMagazine_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Magazine_AutoShotgun.Magazine_AutoShotgun_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoadedIntoGun();
	void OnReleasedFromGun();
	void ExecuteUbergraph_Magazine_AutoShotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
