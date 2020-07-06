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

// Enum JsonUtils.EContentType
enum class EContentType : uint8_t
{
	EContentType__Json             = 0,
	EContentType__Binary           = 1,
	EContentType__EContentType_MAX = 2
};


// Enum JsonUtils.ERequestType
enum class ERequestType : uint8_t
{
	ERequestType__GET              = 0,
	ERequestType__PUT              = 1,
	ERequestType__POST             = 2,
	ERequestType__PATCH            = 3,
	ERequestType__DELETE           = 4,
	ERequestType__ERequestType_MAX = 5
};


// Enum JsonUtils.EJsonValue
enum class EJsonValue : uint8_t
{
	EJsonValue__None               = 0,
	EJsonValue__Null               = 1,
	EJsonValue__String             = 2,
	EJsonValue__Number             = 3,
	EJsonValue__Boolean            = 4,
	EJsonValue__Array              = 5,
	EJsonValue__Object             = 6,
	EJsonValue__EJsonValue_MAX     = 7
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
