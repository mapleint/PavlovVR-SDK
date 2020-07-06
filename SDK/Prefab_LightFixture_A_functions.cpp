
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

// Function Prefab_LightFixture_A.Prefab_LightFixture_A_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrefab_LightFixture_A_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prefab_LightFixture_A.Prefab_LightFixture_A_C.UserConstructionScript");

	APrefab_LightFixture_A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
