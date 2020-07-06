#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum OculusPlatform.EOculusEntitleStatus
enum class EOculusEntitleStatus : uint8_t
{
	EOculusEntitleStatus__Waiting  = 0,
	EOculusEntitleStatus__Entitled = 1,
	EOculusEntitleStatus__NotEntitled = 2,
	EOculusEntitleStatus__EOculusEntitleStatus_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
