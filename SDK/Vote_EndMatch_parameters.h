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

// Function Vote_EndMatch.Vote_EndMatch_C.CreateContentWidget
struct AVote_EndMatch_C_CreateContentWidget_Params
{
	class UUserWidget*                                 Content;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Vote_EndMatch.Vote_EndMatch_C.UserConstructionScript
struct AVote_EndMatch_C_UserConstructionScript_Params
{
};

// Function Vote_EndMatch.Vote_EndMatch_C.OnVoteEnded
struct AVote_EndMatch_C_OnVoteEnded_Params
{
	bool*                                              bSucceeded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vote_EndMatch.Vote_EndMatch_C.ExecuteUbergraph_Vote_EndMatch
struct AVote_EndMatch_C_ExecuteUbergraph_Vote_EndMatch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
