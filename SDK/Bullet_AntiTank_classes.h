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

// BlueprintGeneratedClass Bullet_AntiTank.Bullet_AntiTank_C
// 0x0008 (0x0518 - 0x0510)
class ABullet_AntiTank_C : public ABullet_Base_C
{
public:
	class UStaticMeshComponent*                        Bullet;                                                   // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bullet_AntiTank.Bullet_AntiTank_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
