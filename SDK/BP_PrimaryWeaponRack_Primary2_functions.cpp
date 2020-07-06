
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_PrimaryWeaponRack_Primary2.BP_PrimaryWeaponRack_Primary2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PrimaryWeaponRack_Primary2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrimaryWeaponRack_Primary2.BP_PrimaryWeaponRack_Primary2_C.UserConstructionScript");

	ABP_PrimaryWeaponRack_Primary2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
