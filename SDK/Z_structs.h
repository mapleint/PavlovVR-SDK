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

// Enum Z.EZKnockBackDirection
enum class EZKnockBackDirection : uint8_t
{
	EZKnockBackDirection__Back     = 0,
	EZKnockBackDirection__Left     = 1,
	EZKnockBackDirection__Right    = 2,
	EZKnockBackDirection__EZKnockBackDirection_MAX = 3
};


// Enum Z.EAIState
enum class EAIState : uint8_t
{
	EAIState__Idle                 = 0,
	EAIState__Active               = 1,
	EAIState__Pooled               = 2,
	EAIState__Spawning             = 3,
	EAIState__Dead                 = 4,
	EAIState__EAIState_MAX         = 5
};


// Enum Z.EZKnockBackState
enum class EZKnockBackState : uint8_t
{
	EZKnockBackState__None         = 0,
	EZKnockBackState__Knocking     = 1,
	EZKnockBackState__WallSlam     = 2,
	EZKnockBackState__EZKnockBackState_MAX = 3
};


// Enum Z.EAIAttackState
enum class EAIAttackState : uint8_t
{
	EAIAttackState__NotAttacking   = 0,
	EAIAttackState__Aproaching     = 1,
	EAIAttackState__Loop           = 2,
	EAIAttackState__EAIAttackState_MAX = 3
};


// Enum Z.EAISetDirectorResponse
enum class EAISetDirectorResponse : uint8_t
{
	EAISetDirectorResponse__Succesful = 0,
	EAISetDirectorResponse__AlreadyBelowDesiredAmount = 1,
	EAISetDirectorResponse__AlreadyAboveDesiredAmount = 2,
	EAISetDirectorResponse__InvalidParameters = 3,
	EAISetDirectorResponse__NotEnabled = 4,
	EAISetDirectorResponse__EAISetDirectorResponse_MAX = 5
};


// Enum Z.EAIDirectorMode
enum class EAIDirectorMode : uint8_t
{
	EAIDirectorMode__Pooled        = 0,
	EAIDirectorMode__Active        = 1,
	EAIDirectorMode__TrickleIn     = 2,
	EAIDirectorMode__TrickleOut_OnDeath = 3,
	EAIDirectorMode__TrickleOut_OverTime = 4,
	EAIDirectorMode__EAIDirectorMode_MAX = 5
};


// Enum Z.ENavAreaFlag
enum class ENavAreaFlag : uint8_t
{
	ENavAreaFlag__Default          = 0,
	ENavAreaFlag__Jump             = 1,
	ENavAreaFlag__Climb            = 2,
	ENavAreaFlag__NoSprinting      = 3,
	ENavAreaFlag__ENavAreaFlag_MAX = 4
};


// Enum Z.EAIClimbingState
enum class EAIClimbingState : uint8_t
{
	EAIClimbingState__NotClimbing  = 0,
	EAIClimbingState__StartingClimb = 1,
	EAIClimbingState__Climbing     = 2,
	EAIClimbingState__EndingClimb  = 3,
	EAIClimbingState__EAIClimbingState_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Z.AIDamageResult
// 0x0028
struct FAIDamageResult
{
	float                                              Amount;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Z.NeighborGroup
// 0x0018
struct FNeighborGroup
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Z.FlockingWeight
// 0x000C
struct FFlockingWeight
{
	float                                              AlignmentWeight;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CohesionWeight;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeparationWeight;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Z.MovementDirection
// 0x0008
struct FMovementDirection
{
	float                                              ForwardMovement;                                          // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RightMovement;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Z.ZProperties
// 0x0038
struct FZProperties
{
	TArray<class UAnimMontage*>                        KnockBackMontages;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                KnockLeftMontage;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                KnockRightMontage;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        WallSlamMontages;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundCue*                                   DeathSound;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Z.MovementTraceSettings
// 0x0020
struct FMovementTraceSettings
{
	float                                              InnerAngle;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerLength;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterAngle;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterLength;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForwardLength;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorOffset;                                             // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Z.AutoSpawnProperties
// 0x0010
struct FAutoSpawnProperties
{
	float                                              BatchTimeMin;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BatchTimeMax;                                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZBatchSize;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxZCount;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Z.LootCrateInfo
// 0x0008 (0x0010 - 0x0008)
struct FLootCrateInfo : public FTableRowBase
{
	class UClass*                                      LootCrateClass;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
