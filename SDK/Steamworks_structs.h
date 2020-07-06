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

// Enum Steamworks.ESteamLobbyChatMemberStateChange
enum class ESteamLobbyChatMemberStateChange : uint8_t
{
	ESteamLobbyChatMemberStateChange__Entered = 0,
	ESteamLobbyChatMemberStateChange__Left = 1,
	ESteamLobbyChatMemberStateChange__Disconnected = 2,
	ESteamLobbyChatMemberStateChange__Kicked = 3,
	ESteamLobbyChatMemberStateChange__Banned = 4,
	ESteamLobbyChatMemberStateChange__ESteamLobbyChatMemberStateChange_MAX = 5
};


// Enum Steamworks.ESteamAuthResponse
enum class ESteamAuthResponse : uint8_t
{
	ESteamAuthResponse__Success    = 0,
	ESteamAuthResponse__NotConnectedToSteam = 1,
	ESteamAuthResponse__NoLicenseOrExpired = 2,
	ESteamAuthResponse__LoggedInElseWhere = 3,
	ESteamAuthResponse__VACCheckTimedOut = 4,
	ESteamAuthResponse__Invalid    = 5,
	ESteamAuthResponse__Canceled   = 6,
	ESteamAuthResponse__Banned     = 7,
	ESteamAuthResponse__ESteamAuthResponse_MAX = 8
};


// Enum Steamworks.ESteamLobbyType
enum class ESteamLobbyType : uint8_t
{
	Private                        = 0,
	FriendsOnly                    = 1,
	Public                         = 2,
	Invisible                      = 3,
	ESteamLobbyType_MAX            = 4
};


// Enum Steamworks.ESteamLobbyDistanceFilter
enum class ESteamLobbyDistanceFilter : uint8_t
{
	ESteamLobbyDistanceFilter__Close = 0,
	ESteamLobbyDistanceFilter__Default = 1,
	ESteamLobbyDistanceFilter__Far = 2,
	ESteamLobbyDistanceFilter__Worldwide = 3,
	ESteamLobbyDistanceFilter__ESteamLobbyDistanceFilter_MAX = 4
};


// Enum Steamworks.ESteamLobbyComparison
enum class ESteamLobbyComparison : uint8_t
{
	ESteamLobbyComparison__EqualToOrLessThan = 0,
	ESteamLobbyComparison__LessThan = 1,
	ESteamLobbyComparison__Equal   = 2,
	ESteamLobbyComparison__GreaterThan = 3,
	ESteamLobbyComparison__EqualToOrGreaterThan = 4,
	ESteamLobbyComparison__NotEqual = 5,
	ESteamLobbyComparison__ESteamLobbyComparison_MAX = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Steamworks.SteamLobbyVoiceBuffer
// 0x0018
struct FSteamLobbyVoiceBuffer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAudioComponent*                             AudioComponent;                                           // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TalkTimer;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Steamworks.SteamLobbyMember
// 0x0028
struct FSteamLobbyMember
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Index;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOwner;                                                   // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	class UTexture2D*                                  AvatarTexture;                                            // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Steamworks.SteamLobbyDataEntry
// 0x0020
struct FSteamLobbyDataEntry
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Steamworks.SteamLobbyInfo
// 0x0038
struct FSteamLobbyInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bFriend;                                                  // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FSteamLobbyDataEntry>                MetaData;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Steamworks.SteamRadioPlaybackChannel
// 0x0010
struct FSteamRadioPlaybackChannel
{
	class UAudioComponent*                             SoundComponent;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundWaveProcedural*                        SoundStreaming;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Steamworks.SteamworksVoicePacket
// 0x0010
struct FSteamworksVoicePacket
{
	TArray<unsigned char>                              Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Steamworks.SteamServerInfo
// 0x0058
struct FSteamServerInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     GameTags;                                                 // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                Ping;                                                     // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     ConnectAddress;                                           // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                MaxSlots;                                                 // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Slots;                                                    // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BotSlots;                                                 // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedPassword;                                            // 0x0054(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecure;                                                  // 0x0055(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
};

// ScriptStruct Steamworks.SteamServerListKeyValue
// 0x0010
struct FSteamServerListKeyValue
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Value;                                                    // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
