#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Ping.PingIP.SendPing
struct UPingIP_SendPing_Params
{
	struct FString                                     IpAddress;                                                // (Parm, ZeroConstructor)
};

// Function Ping.PingIP.PollThread
struct UPingIP_PollThread_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
