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

// BlueprintGeneratedClass Sight_RedDot.Sight_RedDot_C
// 0x0000 (0x05A8 - 0x05A8)
class ASight_RedDot_C : public ASight_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sight_RedDot.Sight_RedDot_C");
		return ptr;
	}


	class UMeshComponent* GetLenseMesh(int* MaterialIndex);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
