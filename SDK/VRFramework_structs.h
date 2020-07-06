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

// Enum VRFramework.EVRControllerMode
enum class EVRControllerMode : uint8_t
{
	EVRControllerMode__Normal      = 0,
	EVRControllerMode__Teleport    = 1,
	EVRControllerMode__Menu        = 2,
	EVRControllerMode__EVRControllerMode_MAX = 3
};


// Enum VRFramework.EVRQuadrantButton
enum class EVRQuadrantButton : uint8_t
{
	EVRQuadrantButton__Left        = 0,
	EVRQuadrantButton__Up          = 1,
	EVRQuadrantButton__Right       = 2,
	EVRQuadrantButton__Down        = 3,
	EVRQuadrantButton__EVRQuadrantButton_MAX = 4
};


// Enum VRFramework.EVRGunChamberState
enum class EVRGunChamberState : uint8_t
{
	EVRGunChamberState__Empty      = 0,
	EVRGunChamberState__LiveRound  = 1,
	EVRGunChamberState__EmptyShell = 2,
	EVRGunChamberState__EVRGunChamberState_MAX = 3
};


// Enum VRFramework.EVRHapticType
enum class EVRHapticType : uint8_t
{
	EVRHapticType__Button1         = 0,
	EVRHapticType__Button2         = 1,
	EVRHapticType__InteractBegin   = 2,
	EVRHapticType__InteractEnd     = 3,
	EVRHapticType__SlowPulse       = 4,
	EVRHapticType__Custom1         = 5,
	EVRHapticType__Custom2         = 6,
	EVRHapticType__Custom4         = 7,
	EVRHapticType__EVRHapticType_MAX = 8
};


// Enum VRFramework.EVRGunFireMode
enum class EVRGunFireMode : uint8_t
{
	EVRGunFireMode__Semi           = 0,
	EVRGunFireMode__Automatic      = 1,
	EVRGunFireMode__Manual         = 2,
	EVRGunFireMode__Burst          = 3,
	EVRGunFireMode__EVRGunFireMode_MAX = 4
};


// Enum VRFramework.EVRHandleHapticMode
enum class EVRHandleHapticMode : uint8_t
{
	EVRHandleHapticMode__LinearX   = 0,
	EVRHandleHapticMode__LinearY   = 1,
	EVRHandleHapticMode__LinearZ   = 2,
	EVRHandleHapticMode__Combined  = 3,
	EVRHandleHapticMode__EVRHandleHapticMode_MAX = 4
};


// Enum VRFramework.EVRHandleRotationType
enum class EVRHandleRotationType : uint8_t
{
	EVRHandleRotationType__AroundAxisX = 0,
	EVRHandleRotationType__AroundAxisY = 1,
	EVRHandleRotationType__AroundAxisZ = 2,
	EVRHandleRotationType__EVRHandleRotationType_MAX = 3
};


// Enum VRFramework.EVRQuickSlotType
enum class EVRQuickSlotType : uint8_t
{
	EVRQuickSlotType__Left         = 0,
	EVRQuickSlotType__Right        = 1,
	EVRQuickSlotType__Back         = 2,
	EVRQuickSlotType__Chest        = 3,
	EVRQuickSlotType__EVRQuickSlotType_MAX = 4
};


// Enum VRFramework.EAmmoType
enum class EAmmoType : uint8_t
{
	EAmmoType__AmmoRifle           = 0,
	EAmmoType__AmmoSniper          = 1,
	EAmmoType__AmmoPistol          = 2,
	EAmmoType__AmmoShotgun         = 3,
	EAmmoType__AmmoSpecial         = 4,
	EAmmoType__AmmoSMG             = 5,
	EAmmoType__Other               = 6,
	EAmmoType__EAmmoType_MAX       = 7
};


// Enum VRFramework.EVRGrabState
enum class EVRGrabState : uint8_t
{
	EVRGrabState__Empty            = 0,
	EVRGrabState__Grabbing         = 1,
	EVRGrabState__Grabbed          = 2,
	EVRGrabState__Disabled         = 3,
	EVRGrabState__Custom1          = 4,
	EVRGrabState__Custom2          = 5,
	EVRGrabState__Custom3          = 6,
	EVRGrabState__Custom4          = 7,
	EVRGrabState__EVRGrabState_MAX = 8
};


// Enum VRFramework.EVRSmoothLocomotionMode
enum class EVRSmoothLocomotionMode : uint8_t
{
	EVRSmoothLocomotionMode__Head  = 0,
	EVRSmoothLocomotionMode__Dominant = 1,
	EVRSmoothLocomotionMode__Offhand = 2,
	EVRSmoothLocomotionMode__Pawn  = 3,
	EVRSmoothLocomotionMode__EVRSmoothLocomotionMode_MAX = 4
};


// Enum VRFramework.EVRTeleportSpace
enum class EVRTeleportSpace : uint8_t
{
	EVRTeleportSpace__Head         = 0,
	EVRTeleportSpace__Floor        = 1,
	EVRTeleportSpace__EVRTeleportSpace_MAX = 2
};


// Enum VRFramework.EVREmulatedPlayerRotation
enum class EVREmulatedPlayerRotation : uint8_t
{
	EVREmulatedPlayerRotation__None = 0,
	EVREmulatedPlayerRotation__Movement = 1,
	EVREmulatedPlayerRotation__Focus = 2,
	EVREmulatedPlayerRotation__EVREmulatedPlayerRotation_MAX = 3
};


// Enum VRFramework.EVRPlatform
enum class EVRPlatform : uint8_t
{
	EVRPlatform__SteamVR_Vive      = 0,
	EVRPlatform__SteamVR_Oculus    = 1,
	EVRPlatform__SteamVR_Index     = 2,
	EVRPlatform__SteamVR_WMR       = 3,
	EVRPlatform__Oculus            = 4,
	EVRPlatform__Oculus_Quest      = 5,
	EVRPlatform__EVRPlatform_MAX   = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VRFramework.VRBulletImpactEffect
// 0x0010
struct FVRBulletImpactEffect
{
	class UParticleSystem*                             Particle;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Sound;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRItemState
// 0x0018
struct FVRItemState
{
	class AVRItem*                                     Parent;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ParentSlot;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AVRItemController*                           Controller;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRCustomInventoryOffset
// 0x0040
struct FVRCustomInventoryOffset
{
	unsigned char                                      Slot;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0010(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct VRFramework.VRGunStateProxy
// 0x0010
struct FVRGunStateProxy
{
	TArray<unsigned char>                              Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct VRFramework.VRHandFingerJoint
// 0x0010
struct FVRHandFingerJoint
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct VRFramework.VRHandleSequenceSetup
// 0x0020
struct FVRHandleSequenceSetup
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct VRFramework.VRInventoryFilter
// 0x0018
struct FVRInventoryFilter
{
	unsigned char                                      Slot;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExclusive;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<class UClass*>                              List;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct VRFramework.VRInventorySlot
// 0x0010
struct FVRInventorySlot
{
	unsigned char                                      Index;                                                    // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AVRItem*                                     Pickup;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRItemControllerState
// 0x0050
struct FVRItemControllerState
{
	EVRGrabState                                       State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bFlag;                                                    // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct VRFramework.VRMovementSnapshot
// 0x0024
struct FVRMovementSnapshot
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Velocity;                                                 // 0x000C(0x000C)
	float                                              OffsetX;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRNetTransform
// 0x0018
struct FVRNetTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRNetSnapshot
// 0x0068
struct FVRNetSnapshot
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Velocity;                                                 // 0x000C(0x000C)
	float                                              Heading;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             Flags;                                                    // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FVRNetTransform                             HeadTX;                                                   // 0x0020(0x0018)
	struct FVRNetTransform                             HandTXLeft;                                               // 0x0038(0x0018)
	struct FVRNetTransform                             HandTXRight;                                              // 0x0050(0x0018)
};

// ScriptStruct VRFramework.VREmulatedPlayerPose
// 0x00A8 (0x00B0 - 0x0008)
struct FVREmulatedPlayerPose : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  LeftHand;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  RightHand;                                                // 0x0040(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  Head;                                                     // 0x0070(0x0030) (Edit, IsPlainOldData)
	float                                              LerpSpeed;                                                // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00A4(0x000C) MISSED OFFSET
};

// ScriptStruct VRFramework.VRSettings
// 0x0014
struct FVRSettings
{
	int                                                Scaling;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Detail;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AntiAlias;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Shading;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Effects;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRBulletDamageEvent
// 0x0020 (0x00C8 - 0x00A8)
struct FVRBulletDamageEvent : public FPointDamageEvent
{
	bool                                               bClient;                                                  // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x00AC(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ImpulsePower;                                             // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UClass*                                      GunClass;                                                 // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRFireBulletParams
// 0x0030
struct FVRFireBulletParams
{
	class UClass*                                      BulletClass;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      GunClass;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	class AController*                                 Instigator;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRNetSnapshotLerpInterface
// 0x00E4
struct FVRNetSnapshotLerpInterface
{
	unsigned char                                      UnknownData00[0xE4];                                      // 0x0000(0x00E4) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
