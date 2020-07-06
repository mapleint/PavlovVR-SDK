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

// Enum Pavlov.EMatchmakingState
enum class EMatchmakingState : uint8_t
{
	EMatchmakingState__Standby     = 0,
	EMatchmakingState__Searching   = 1,
	EMatchmakingState__Lobby       = 2,
	EMatchmakingState__Connecting  = 3,
	EMatchmakingState__EMatchmakingState_MAX = 4
};


// Enum Pavlov.ELobbyState
enum class ELobbyState : uint8_t
{
	ELobbyState__Standby           = 0,
	ELobbyState__FindingGameServer = 1,
	ELobbyState__Playing           = 2,
	ELobbyState__ELobbyState_MAX   = 3
};


// Enum Pavlov.EConnectorFailureReason
enum class EConnectorFailureReason : uint8_t
{
	EConnectorFailureReason__None  = 0,
	EConnectorFailureReason__Unreachable = 1,
	EConnectorFailureReason__Timeout = 2,
	EConnectorFailureReason__WrongPin = 3,
	EConnectorFailureReason__ServerFull = 4,
	EConnectorFailureReason__Banned = 5,
	EConnectorFailureReason__WhitelistOnly = 6,
	EConnectorFailureReason__ReconnectError = 7,
	EConnectorFailureReason__EConnectorFailureReason_MAX = 8
};


// Enum Pavlov.EMatchmakingStatus
enum class EMatchmakingStatus : uint8_t
{
	EMatchmakingStatus__None       = 0,
	EMatchmakingStatus__Waiting    = 1,
	EMatchmakingStatus__Polling    = 2,
	EMatchmakingStatus__Matched    = 3,
	EMatchmakingStatus__EMatchmakingStatus_MAX = 4
};


// Enum Pavlov.EWorkshopVoteType
enum class EWorkshopVoteType : uint8_t
{
	EWorkshopVoteType__Up          = 0,
	EWorkshopVoteType__Down        = 1,
	EWorkshopVoteType__Skipped     = 2,
	EWorkshopVoteType__EWorkshopVoteType_MAX = 3
};


// Enum Pavlov.EBattlegroundsWaitingState
enum class EBattlegroundsWaitingState : uint8_t
{
	EBattlegroundsWaitingState__Waiting = 0,
	EBattlegroundsWaitingState__Launching = 1,
	EBattlegroundsWaitingState__Playing = 2,
	EBattlegroundsWaitingState__Dead = 3,
	EBattlegroundsWaitingState__EBattlegroundsWaitingState_MAX = 4
};


// Enum Pavlov.EBattlegroundsServerType
enum class EBattlegroundsServerType : uint8_t
{
	EBattlegroundsServerType__WaitingServer = 0,
	EBattlegroundsServerType__GameServer = 1,
	EBattlegroundsServerType__EBattlegroundsServerType_MAX = 2
};


// Enum Pavlov.EBombState
enum class EBombState : uint8_t
{
	EBombState__StandBy            = 0,
	EBombState__Armed              = 1,
	EBombState__Planted            = 2,
	EBombState__Detonating         = 3,
	EBombState__Detonated          = 4,
	EBombState__Defused            = 5,
	EBombState__EBombState_MAX     = 6
};


// Enum Pavlov.EGhostPointMode
enum class EGhostPointMode : uint8_t
{
	EGhostPointMode__Teleport      = 0,
	EGhostPointMode__PlayerCycle   = 1,
	EGhostPointMode__EGhostPointMode_MAX = 2
};


// Enum Pavlov.EPlayerEffectState
enum class EPlayerEffectState : uint8_t
{
	EPlayerEffectState__Normal     = 0,
	EPlayerEffectState__Flashed    = 1,
	EPlayerEffectState__Supressed  = 2,
	EPlayerEffectState__Ghost      = 3,
	EPlayerEffectState__EPlayerEffectState_MAX = 4
};


// Enum Pavlov.EGrenadeState
enum class EGrenadeState : uint8_t
{
	EGrenadeState__SafeWithPin     = 0,
	EGrenadeState__Safe            = 1,
	EGrenadeState__Cooking         = 2,
	EGrenadeState__Detonated       = 3,
	EGrenadeState__EGrenadeState_MAX = 4
};


// Enum Pavlov.EImpairedType
enum class EImpairedType : uint8_t
{
	EImpairedType__Flash           = 0,
	EImpairedType__Stun            = 1,
	EImpairedType__Frozen          = 2,
	EImpairedType__EImpairedType_MAX = 3
};


// Enum Pavlov.EModalMessageBoxType
enum class EModalMessageBoxType : uint8_t
{
	EModalMessageBoxType__None     = 0,
	EModalMessageBoxType__Accept   = 1,
	EModalMessageBoxType__Ok       = 2,
	EModalMessageBoxType__AcceptCancel = 3,
	EModalMessageBoxType__Cancel   = 4,
	EModalMessageBoxType__SpinnerCancel = 5,
	EModalMessageBoxType__EModalMessageBoxType_MAX = 6
};


// Enum Pavlov.EGestureType
enum class EGestureType : uint8_t
{
	EGestureType__AngularPitch     = 0,
	EGestureType__AngularYaw       = 1,
	EGestureType__AngularRoll      = 2,
	EGestureType__AngularVelocityPitch = 3,
	EGestureType__AngularVelocityYaw = 4,
	EGestureType__AngularVelocityRoll = 5,
	EGestureType__LinearVelocityX  = 6,
	EGestureType__LinearVelocityY  = 7,
	EGestureType__LinearVelocityZ  = 8,
	EGestureType__EGestureType_MAX = 9
};


// Enum Pavlov.ETwoHandStockState
enum class ETwoHandStockState : uint8_t
{
	ETwoHandStockState__Unstocked  = 0,
	ETwoHandStockState__Stocking   = 1,
	ETwoHandStockState__Stocked    = 2,
	ETwoHandStockState__Destocking = 3,
	ETwoHandStockState__ETwoHandStockState_MAX = 4
};


// Enum Pavlov.EAIEngageState
enum class EAIEngageState : uint8_t
{
	EAIEngageState__Reacting       = 0,
	EAIEngageState__Aiming         = 1,
	EAIEngageState__Shooting       = 2,
	EAIEngageState__Scanning       = 3,
	EAIEngageState__EAIEngageState_MAX = 4
};


// Enum Pavlov.EGameSessionState
enum class EGameSessionState : uint8_t
{
	EGameSessionState__Standby     = 0,
	EGameSessionState__Querying    = 1,
	EGameSessionState__Active      = 2,
	EGameSessionState__EGameSessionState_MAX = 3
};


// Enum Pavlov.EWeaponFilter
enum class EWeaponFilter : uint8_t
{
	EWeaponFilter__None            = 0,
	EWeaponFilter__RiflesOnly      = 1,
	EWeaponFilter__HandGunsOnly    = 2,
	EWeaponFilter__KnivesOnly      = 3,
	EWeaponFilter__GrenadesOnly    = 4,
	EWeaponFilter__EWeaponFilter_MAX = 5
};


// Enum Pavlov.EMatchType
enum class EMatchType : uint8_t
{
	EMatchType__Normal             = 0,
	EMatchType__NormalWithBots     = 1,
	EMatchType__Coop               = 2,
	EMatchType__EMatchType_MAX     = 3
};


// Enum Pavlov.ECompetitiveMode
enum class ECompetitiveMode : uint8_t
{
	ECompetitiveMode__Disabled     = 0,
	ECompetitiveMode__Normal       = 1,
	ECompetitiveMode__Enhanced     = 2,
	ECompetitiveMode__ECompetitiveMode_MAX = 3
};


// Enum Pavlov.EMatchResult
enum class EMatchResult : uint8_t
{
	EMatchResult__Victory          = 0,
	EMatchResult__Defeat           = 1,
	EMatchResult__Draw             = 2,
	EMatchResult__EMatchResult_MAX = 3
};


// Enum Pavlov.EGoreLevel
enum class EGoreLevel : uint8_t
{
	EGoreLevel__Disabled           = 0,
	EGoreLevel__Normal             = 1,
	EGoreLevel__Gruesome           = 2,
	EGoreLevel__EGoreLevel_MAX     = 3
};


// Enum Pavlov.EGripMode
enum class EGripMode : uint8_t
{
	EGripMode__Auto                = 0,
	EGripMode__Click               = 1,
	EGripMode__Hold                = 2,
	EGripMode__EGripMode_MAX       = 3
};


// Enum Pavlov.ECustomAction
enum class ECustomAction : uint8_t
{
	ECustomAction__None            = 0,
	ECustomAction__RotationReset   = 1,
	ECustomAction__RadioToggle     = 2,
	ECustomAction__MagBoltRelease  = 3,
	ECustomAction__ECustomAction_MAX = 4
};


// Enum Pavlov.ELocomotionMode
enum class ELocomotionMode : uint8_t
{
	ELocomotionMode__OutOfBody     = 0,
	ELocomotionMode__StandingOnly  = 1,
	ELocomotionMode__RoomScale     = 2,
	ELocomotionMode__ELocomotionMode_MAX = 3
};


// Enum Pavlov.EOnlineRegion
enum class EOnlineRegion : uint8_t
{
	EOnlineRegion__America         = 0,
	EOnlineRegion__Europe          = 1,
	EOnlineRegion__AsiaPacific     = 2,
	EOnlineRegion__EOnlineRegion_MAX = 3
};


// Enum Pavlov.EServerSearchType
enum class EServerSearchType : uint8_t
{
	EServerSearchType__ShowLobby   = 0,
	EServerSearchType__ShowCommunityServer = 1,
	EServerSearchType__ShowBoth    = 2,
	EServerSearchType__EServerSearchType_MAX = 3
};


// Enum Pavlov.EServerHostingType
enum class EServerHostingType : uint8_t
{
	EServerHostingType__Official   = 0,
	EServerHostingType__BestAvailable = 1,
	EServerHostingType__Local      = 2,
	EServerHostingType__EServerHostingType_MAX = 3
};


// Enum Pavlov.EParachuteState
enum class EParachuteState : uint8_t
{
	EParachuteState__Packed        = 0,
	EParachuteState__Deploying     = 1,
	EParachuteState__Deployed      = 2,
	EParachuteState__Ditched       = 3,
	EParachuteState__EParachuteState_MAX = 4
};


// Enum Pavlov.EHitFeedbackType
enum class EHitFeedbackType : uint8_t
{
	EHitFeedbackType__Body         = 0,
	EHitFeedbackType__BodyArmor    = 1,
	EHitFeedbackType__Helmet       = 2,
	EHitFeedbackType__Headshot     = 3,
	EHitFeedbackType__EHitFeedbackType_MAX = 4
};


// Enum Pavlov.EGameDifficulty
enum class EGameDifficulty : uint8_t
{
	EGameDifficulty__Easy          = 0,
	EGameDifficulty__Normal        = 1,
	EGameDifficulty__Hard          = 2,
	EGameDifficulty__EGameDifficulty_MAX = 3
};


// Enum Pavlov.EPlayerFlair
enum class EPlayerFlair : uint8_t
{
	EPlayerFlair__None             = 0,
	EPlayerFlair__Patron           = 1,
	EPlayerFlair__Moderator        = 2,
	EPlayerFlair__Developer        = 3,
	EPlayerFlair__EPlayerFlair_MAX = 4
};


// Enum Pavlov.EPliersState
enum class EPliersState : uint8_t
{
	EPliersState__Standby          = 0,
	EPliersState__Cutting          = 1,
	EPliersState__Cut              = 2,
	EPliersState__EPliersState_MAX = 3
};


// Enum Pavlov.EFinger
enum class EFinger : uint8_t
{
	EFinger__Index                 = 0,
	EFinger__Middle                = 1,
	EFinger__Ring                  = 2,
	EFinger__Pinky                 = 3,
	EFinger__Thumb                 = 4,
	EFinger__EFinger_MAX           = 5
};


// Enum Pavlov.EServerType
enum class EServerType : uint8_t
{
	EServerType__LobbyWaiting      = 0,
	EServerType__LobbyPlaying      = 1,
	EServerType__CommunityServer   = 2,
	EServerType__MatchMakingWaiting = 3,
	EServerType__MatchMakingConnecting = 4,
	EServerType__MatchMakingPlaying = 5,
	EServerType__EServerType_MAX   = 6
};


// Enum Pavlov.EStereoOverlayMode
enum class EStereoOverlayMode : uint8_t
{
	EStereoOverlayMode__SimpleFrontal = 0,
	EStereoOverlayMode__Frontal    = 1,
	EStereoOverlayMode__Sidearm    = 2,
	EStereoOverlayMode__EStereoOverlayMode_MAX = 3
};


// Enum Pavlov.EToolTipState
enum class EToolTipState : uint8_t
{
	EToolTipState__None            = 0,
	EToolTipState__ShowingUp       = 1,
	EToolTipState__Waiting         = 2,
	EToolTipState__Terminating     = 3,
	EToolTipState__EToolTipState_MAX = 4
};


// Enum Pavlov.EServerSortType
enum class EServerSortType : uint8_t
{
	EServerSortType__None          = 0,
	EServerSortType__PingAscending = 1,
	EServerSortType__PingDescending = 2,
	EServerSortType__PlayerCountAscending = 3,
	EServerSortType__PlayerCountDescending = 4,
	EServerSortType__EServerSortType_MAX = 5
};


// Enum Pavlov.EVoteState
enum class EVoteState : uint8_t
{
	EVoteState__Voting             = 0,
	EVoteState__Succeed            = 1,
	EVoteState__Failed             = 2,
	EVoteState__EVoteState_MAX     = 3
};


// Enum Pavlov.EWoundSeverity
enum class EWoundSeverity : uint8_t
{
	EWoundSeverity__None           = 0,
	EWoundSeverity__Small          = 1,
	EWoundSeverity__Medium         = 2,
	EWoundSeverity__Large          = 3,
	EWoundSeverity__Shotgun        = 4,
	EWoundSeverity__EWoundSeverity_MAX = 5
};


// Enum Pavlov.EWorkshopQueryType
enum class EWorkshopQueryType : uint8_t
{
	EWorkshopQueryType__Installed  = 0,
	EWorkshopQueryType__Favorite   = 1,
	EWorkshopQueryType__MostPopular = 2,
	EWorkshopQueryType__MostSubscribed = 3,
	EWorkshopQueryType__MostRecent = 4,
	EWorkshopQueryType__EWorkshopQueryType_MAX = 5
};


// Enum Pavlov.EAIZombieState
enum class EAIZombieState : uint8_t
{
	EAIZombieState__Idle           = 0,
	EAIZombieState__Alerted        = 1,
	EAIZombieState__Attacking      = 2,
	EAIZombieState__EAIZombieState_MAX = 3
};


// Enum Pavlov.EWoundMaterialType
enum class EWoundMaterialType : uint8_t
{
	EWoundMaterialType__None       = 0,
	EWoundMaterialType__Simple     = 1,
	EWoundMaterialType__Complex    = 2,
	EWoundMaterialType__EWoundMaterialType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Pavlov.AttachProxyInfo
// 0x0050
struct FAttachProxyInfo
{
	class USceneComponent*                             AttachParent;                                             // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  LocalOffset;                                              // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Pavlov.AIPersonality
// 0x0020 (0x0028 - 0x0008)
struct FAIPersonality : public FTableRowBase
{
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              Courage;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Reaction;                                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Strategy;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Skill;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.DamageTrackInfo
// 0x0038
struct FDamageTrackInfo
{
	class APavlovPlayerState*                          Instigator;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OriginLocation;                                           // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLastHit;                                                 // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBullet;                                                  // 0x0025(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FName                                       DamageCauser;                                             // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadshot;                                                // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Pavlov.GestureSetup
// 0x0028
struct FGestureSetup
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGestureType                                       Type;                                                     // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Threshold;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Pavlov.KillInfo
// 0x0070
struct FKillInfo
{
	struct FVector                                     BulletOrigin;                                             // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BulletImpact;                                             // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bByBullet;                                                // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class APavlovPlayerState*                          Killer;                                                   // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDamageTrackInfo                            LastHit;                                                  // 0x0028(0x0038) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FDamageTrackInfo>                    Assists;                                                  // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Pavlov.ShotConcurrencyQuality
// 0x0028
struct FShotConcurrencyQuality
{
	class USoundConcurrency*                           Default;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundConcurrency*                           High;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundConcurrency*                           Medium;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundConcurrency*                           Low;                                                      // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundConcurrency*                           Quest;                                                    // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Pavlov.GunAttachmentSetup
// 0x0020
struct FGunAttachmentSetup
{
	class UClass*                                      SuppresorClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SightClass;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PicatinnyOffset;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      GripClass;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.HitBox
// 0x0080
struct FHitBox
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       Bone;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneMirror;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BoxComponent;                                             // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct Pavlov.HitBoxHistory
// 0x0018
struct FHitBoxHistory
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FHitBox>                             Instances;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.MatchSettings
// 0x0020
struct FMatchSettings
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Map;                                                      // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Pavlov.RotatedMap
// 0x0020
struct FRotatedMap
{
	struct FString                                     MapId;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.ModalCommitParams
// 0x0010
struct FModalCommitParams
{
	int                                                Value;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     UserObject;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.ServerSettings
// 0x0030
struct FServerSettings
{
	EMatchType                                         MatchType;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MatchLength;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCompetitive;                                             // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHardcore;                                                // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponFilter                                      WeaponFilter;                                             // 0x000A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	TArray<struct FString>                             Team0;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Team1;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.PavlovServerInfo
// 0x00A0
struct FPavlovServerInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     LobbyIdString;                                            // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bPinProtected;                                            // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     Map;                                                      // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapLabel;                                                 // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                SlotLimit;                                                // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Slots;                                                    // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaying;                                                 // 0x0068(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFriendsOnly;                                             // 0x0069(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFriendLobby;                                             // 0x006A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x006B(0x0005) MISSED OFFSET
	struct FServerSettings                             Settings;                                                 // 0x0070(0x0030) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Pavlov.PavlovAdvancedMap
// 0x0010
struct FPavlovAdvancedMap
{
	class UPavlov_Map*                                 Map;                                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPublic;                                                  // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFavorite;                                                // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              Score;                                                    // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.ServerConnectParams
// 0x0038
struct FServerConnectParams
{
	struct FString                                     ConnectURL;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FName                                       MapId;                                                    // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConnectDelay;                                             // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     Pin;                                                      // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bReconnect;                                               // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Pavlov.KillfeedEntry
// 0x0078
struct FKillfeedEntry
{
	class APavlovPlayerState*                          Killer;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          Victim;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageCauser;                                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadshot;                                                // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     KillerName;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                KillerTeamId;                                             // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     KillerId;                                                 // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     VictimName;                                               // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                VictimTeamId;                                             // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     VictimId;                                                 // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              EntryLifespan;                                            // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLocalPlayer;                                             // 0x0074(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct Pavlov.EquipmentData
// 0x0038 (0x0040 - 0x0008)
struct FEquipmentData : public FTableRowBase
{
	int                                                MagazineCount;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KillBonus;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BaseDamage;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmourDamage;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmourPenetration;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelmetDamage;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HelmetBleed;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Penetration;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPassiveDamage;                                           // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	class UTexture*                                    Icon;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.FavoriteServer
// 0x0020
struct FFavoriteServer
{
	struct FString                                     ServerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ServerIdentifier;                                         // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.SpectatorViews
// 0x0018
struct FSpectatorViews
{
	struct FName                                       MapName;                                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Views;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Pavlov.EquipmentDefinition
// 0x0048
struct FEquipmentDefinition
{
	class UClass*                                      Primary;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Secondary;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Knife;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Nades;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      Other;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Inventory;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bByBuyMenu;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBundle;                                                  // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
};

// ScriptStruct Pavlov.HandFingerState
// 0x0001
struct FHandFingerState
{
	unsigned char                                      Index : 1;                                                // 0x0000(0x0001)
	unsigned char                                      Midle : 1;                                                // 0x0000(0x0001)
	unsigned char                                      Ring : 1;                                                 // 0x0000(0x0001)
	unsigned char                                      Pinky : 1;                                                // 0x0000(0x0001)
	unsigned char                                      Thumb : 1;                                                // 0x0000(0x0001)
};

// ScriptStruct Pavlov.FingerTracking
// 0x0003
struct FFingerTracking
{
	struct FHandFingerState                            LeftHand;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FHandFingerState                            RightHand;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Supported : 1;                                            // 0x0002(0x0001)
};

// ScriptStruct Pavlov.WoundInfo
// 0x0030
struct FWoundInfo
{
	struct FVector                                     HitLocation;                                              // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLastHit;                                                 // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WoundRate;                                                // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Pavlov.PlayerAvatar
// 0x0010
struct FPlayerAvatar
{
	class UClass*                                      AvatarSkinClass;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomMesh;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.ImpactDamage
// 0x0038
struct FImpactDamage
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseForce;                                             // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WoundRate;                                                // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              WoundScale;                                               // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.PreBakedWound
// 0x0048 (0x0050 - 0x0008)
struct FPreBakedWound : public FTableRowBase
{
	struct FName                                       SimulateBone;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BloodMap;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AuxClass;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Location;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                UProjection;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VProjection;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.GiveItemParams
// 0x0020
struct FGiveItemParams
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDominant;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                SkinId;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWithAttachments;                                         // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoaded;                                                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct Pavlov.EquipmentSnapshot
// 0x0070
struct FEquipmentSnapshot
{
	TArray<class UClass*>                              InventorySlots;                                           // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGunAttachmentSetup>                 InventorySlotsAttachments;                                // 0x0010(0x0010) (ZeroConstructor)
	class UClass*                                      LeftController;                                           // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGunAttachmentSetup                         LeftAttachments;                                          // 0x0028(0x0020)
	class UClass*                                      RightController;                                          // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGunAttachmentSetup                         RightAttachments;                                         // 0x0050(0x0020)
};

// ScriptStruct Pavlov.ClientZombieBulletHit
// 0x0020
struct FClientZombieBulletHit
{
	class AZombie*                                     Zombie;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0008(0x000C)
	unsigned char                                      TotalDamage;                                              // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0015(0x0001) MISSED OFFSET
	uint16_t                                           BoneIndex;                                                // 0x0016(0x0002) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      GunClass;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.ClientKnifeDamage
// 0x0050
struct FClientKnifeDamage
{
	class APavlovPawn*                                 Victim;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AKnife*                                      Knife;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       HitBone;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LocalOffset;                                              // 0x0020(0x0030) (IsPlainOldData)
};

// ScriptStruct Pavlov.ClientBulletHit
// 0x0040
struct FClientBulletHit
{
	class APavlovPawn*                                 Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Hit;                                                      // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bHeadshot;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPenetrated;                                              // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	class UClass*                                      BulletClass;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      GunClass;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.ServerPingInfo
// 0x0018
struct FServerPingInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Pavlov.ServerStatusInfo
// 0x0040
struct FServerStatusInfo
{
	struct FString                                     MapId;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                PlayerCount;                                              // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             PlayerNames;                                              // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bCanJoin;                                                 // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotating;                                                // 0x0039(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct Pavlov.ServerContainerInfo
// 0x00E8
struct FServerContainerInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EServerType                                        ServerType;                                               // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     IdString;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Ip;                                                       // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Port;                                                     // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bPasswordProtected;                                       // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     MapId;                                                    // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapLabel;                                                 // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Slots;                                                    // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxSlots;                                                 // 0x0084(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFriendsPlaying;                                          // 0x0088(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFavorite;                                                // 0x0089(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
	struct FServerSettings                             ServerSettings;                                           // 0x0090(0x0030) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FName>                               Tags;                                                     // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Ping;                                                     // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FString                                     Region;                                                   // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Pavlov.ServerDetails
// 0x00A0
struct FServerDetails
{
	struct FString                                     Hash;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Ip;                                                       // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapLabel;                                                 // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapId;                                                    // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Slots;                                                    // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxSlots;                                                 // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPasswordProtected;                                       // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSecured;                                                 // 0x0081(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
	TArray<struct FName>                               Tags;                                                     // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Ping;                                                     // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct Pavlov.CombinedServerList
// 0x0148
struct FCombinedServerList
{
	struct FServerDetails                              ServerDetails;                                            // 0x0000(0x00A0) (BlueprintVisible)
	struct FPavlovServerInfo                           LobbyDetails;                                             // 0x00A0(0x00A0) (BlueprintVisible)
	bool                                               bLobby;                                                   // 0x0140(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
};

// ScriptStruct Pavlov.ServerStatusMsg
// 0x0020
struct FServerStatusMsg
{
	TArray<unsigned char>                              Data;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Address;                                                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Pavlov.PlayerReport
// 0x0018
struct FPlayerReport
{
	struct FDateTime                                   Timestamp;                                                // 0x0000(0x0008) (ZeroConstructor)
	struct FString                                     ReportedById;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Pavlov.PlayerStats
// 0x0038
struct FPlayerStats
{
	struct FString                                     UniqueId;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Kills;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Deaths;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Assists;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Headshots;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamKills;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FPlayerReport>                       Reports;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Pavlov.KillEvent
// 0x0048
struct FKillEvent
{
	struct FDateTime                                   Timestamp;                                                // 0x0000(0x0008) (ZeroConstructor)
	struct FString                                     KillerId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     KilledId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bTK;                                                      // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FName                                       KilledByItem;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadshot;                                                // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FVector                                     KilledLocation;                                           // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.WheelSegment
// 0x0030
struct FWheelSegment
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       ID;                                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UClass*                                      ContentClass;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.PavlovVoicePacket
// 0x0010
struct FPavlovVoicePacket
{
	TArray<unsigned char>                              Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.WorkshopItem
// 0x0038
struct FWorkshopItem
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bSubscribed;                                              // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Score;                                                    // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Preview;                                                  // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.WoundBoneState
// 0x0020
struct FWoundBoneState
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WoundRatio;                                               // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MajorHitIndex;                                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWoundSeverity                                     CurrentSeverity;                                          // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
};

// ScriptStruct Pavlov.WoundMaterialSet
// 0x0020
struct FWoundMaterialSet
{
	class UMaterialInterface*                          Simple;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Complex;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SimpleInstance;                                           // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ComplexInstance;                                          // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Pavlov.WoundMeshInstance
// 0x0068
struct FWoundMeshInstance
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<int, struct FWoundMaterialSet>                MaterialSets;                                             // 0x0010(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UWoundComponent*                             WoundComponent;                                           // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Pavlov.MemberFX
// 0x0020
struct FMemberFX
{
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USurfaceFXAsset*                             DismemberSurfaceFX;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Bones;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Pavlov.ZombieHitInfo
// 0x0038
struct FZombieHitInfo
{
	struct FVector_NetQuantizeNormal                   Direction;                                                // 0x0000(0x000C)
	struct FVector_NetQuantize                         Location;                                                 // 0x000C(0x000C)
	unsigned char                                      TotalDamage;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Distance;                                                 // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WoundRate;                                                // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x001B(0x0005) MISSED OFFSET
	class UClass*                                      GunClass;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           BoneIndex;                                                // 0x0028(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	class AController*                                 Instigator;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.WaypointInfo
// 0x0018
struct FWaypointInfo
{
	class AWaypoint*                                   Waypoint;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.VoicePacketBunch
// 0x0020
struct FVoicePacketBunch
{
	TArray<class APlayerState*>                        Players;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FPavlovVoicePacket>                  Packets;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.ReplayInfo
// 0x0050
struct FReplayInfo
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bLive;                                                    // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FTimespan                                   Elapsed;                                                  // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             Users;                                                    // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Pavlov.SightZeroing
// 0x0010 (0x0018 - 0x0008)
struct FSightZeroing : public FTableRowBase
{
	int                                                ZeroDefault;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZeroAt25m;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZeroAt50m;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZeroAt100m;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.KnifeDamage
// 0x0008 (0x0010 - 0x0008)
struct FKnifeDamage : public FTableRowBase
{
	float                                              BodyPartDamage;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Pavlov.AvatarInfo
// 0x0008 (0x0010 - 0x0008)
struct FAvatarInfo : public FTableRowBase
{
	class UClass*                                      AvatarComponentClass;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.EquipmentCost
// 0x0008 (0x0010 - 0x0008)
struct FEquipmentCost : public FTableRowBase
{
	int                                                Cost;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Pavlov.HitboxInfo
// 0x0030 (0x0038 - 0x0008)
struct FHitboxInfo : public FTableRowBase
{
	float                                              DamageMul;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Slows;                                                    // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Demoralizes;                                              // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x000E(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Pavlov.HitboxInfo.HitSound
};

// ScriptStruct Pavlov.AllPlayerStats
// 0x0010
struct FAllPlayerStats
{
	TArray<struct FPlayerStats>                        AllStats;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.VoiceAudioBuffer
// 0x0010
struct FVoiceAudioBuffer
{
	TArray<unsigned char>                              Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.ZombieBalanceData
// 0x0008 (0x0010 - 0x0008)
struct FZombieBalanceData : public FTableRowBase
{
	unsigned char                                      Damage;                                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WoundRate;                                                // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
