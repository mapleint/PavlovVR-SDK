#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class JsonUtils.JsonUtilsObj
// 0x0010 (0x0038 - 0x0028)
class UJsonUtilsObj : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class JsonUtils.JsonUtilsObj");
		return ptr;
	}


	void RemoveField(const struct FString& FieldName);
	bool HasField(const struct FString& FieldName);
	bool GetStringField(const struct FString& FieldName, struct FString* StringValue);
	class UJsonUtilsObj* GetObjField(const struct FString& FieldName, bool* bSuccessful);
	bool GetIntField(const struct FString& FieldName, int* NumberValue);
	bool GetFloatField(const struct FString& FieldName, float* NumberValue);
	TArray<struct FString> GetFieldNames();
	bool GetFieldAsTimeStamp(const struct FString& FieldName, struct FDateTime* DateTime);
	class UJsonUtilsValue* GetField(const struct FString& FieldName, bool* bSuccessful);
	bool GetBoolField(const struct FString& FieldName, bool* BoolValue);
	bool GetArrayFieldAsStrings(const struct FString& FieldName, TArray<struct FString>* StringArray);
	bool GetArrayFieldAsInts(const struct FString& FieldName, TArray<int>* Ints);
	bool GetArrayFieldAsFloats(const struct FString& FieldName, TArray<float>* Floats);
	bool GetArrayFieldAsBools(const struct FString& FieldName, TArray<bool>* Bools);
	TArray<class UJsonUtilsValue*> GetArrayField(const struct FString& FieldName, bool* bSuccessful);
	TArray<class UJsonUtilsObj*> GetArrayAsObjects(const struct FString& FieldName, bool* bSuccessful);
	void ClearObject();
	void AddTimestamp(const struct FString& FieldName, const struct FDateTime& DateTime);
	void AddStringField(const struct FString& FieldName, const struct FString& StringValue);
	bool AddStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray);
	void AddObjField(const struct FString& FieldName, class UJsonUtilsObj* JsonUtilsObj);
	bool AddObjectArrayField(const struct FString& FieldName, TArray<class UJsonUtilsObj*> JsonObjects);
	void AddIntField(const struct FString& FieldName, int NumberValue);
	bool AddIntArrayField(const struct FString& FieldName, TArray<int> IntArray);
	void AddFloatField(const struct FString& FieldName, float NumberValue);
	bool AddFloatArrayField(const struct FString& FieldName, TArray<float> FloatArray);
	void AddField(const struct FString& FieldName, class UJsonUtilsValue* JsonValue);
	void AddBoolField(const struct FString& FieldName, bool BoolValue);
	bool AddBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray);
	bool AddArrayField(const struct FString& FieldName, TArray<class UJsonUtilsValue*> JsonValues);
};


// Class JsonUtils.JsonUtilsRequest
// 0x0108 (0x0130 - 0x0028)
class UJsonUtilsRequest : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnResponseReceived;                                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bLogging;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     ResponseString;                                           // 0x0040(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              responseData;                                             // 0x0050(0x0010) (ZeroConstructor)
	class UJsonUtilsObj*                               ResponseObj;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasJsonResponse;                                         // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                ResponseCode;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // 0x0070(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FString>               RequestHeaders;                                           // 0x0080(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FString>               ResponseHeaders;                                          // 0x00D0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class JsonUtils.JsonUtilsRequest");
		return ptr;
	}


	void SetVerb(ERequestType RequestType);
	void SetURL(const struct FString& InURL);
	void SetRequestUserAgent(const struct FString& UserAgentValue);
	void SetCustomContentType(const struct FString& ContentType);
	void SetContentType(EContentType ContentType);
	void SetContentAsString(const struct FString& ContentString);
	void SetContentAsJson(class UJsonUtilsObj* ContentObj);
	void SetContent(TArray<unsigned char> Content);
	void ProcessRequest();
	struct FString GetUrl();
	TMap<struct FString, struct FString> GetResponseHeaders();
	int GetResponseCode();
	struct FString GetResponseAsString();
	TArray<class UJsonUtilsValue*> GetResponseAsJsonArray(bool* bSuccessful);
	class UJsonUtilsObj* GetResponseAsJson(bool* bSuccessful);
	TArray<unsigned char> GetResponse();
	TMap<struct FString, struct FString> GetRequestHeaders();
	void EnableLogging(bool bEnabled);
	void ClearRequestHeaders();
	void AddRequestHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
};


// Class JsonUtils.JsonUtilsValue
// 0x0010 (0x0038 - 0x0028)
class UJsonUtilsValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class JsonUtils.JsonUtilsValue");
		return ptr;
	}


	struct FString GetValueAsString();
	class UJsonUtilsObj* GetValueAsObj();
	int GetValueAsInt();
	float GetValueAsFloat();
	bool GetValueAsBool();
	EJsonValue GetType();
	TArray<class UJsonUtilsValue*> GetArray(bool* bSuccessful);
};


// Class JsonUtils.JsonUtilsLib
// 0x0000 (0x0028 - 0x0028)
class UJsonUtilsLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class JsonUtils.JsonUtilsLib");
		return ptr;
	}


	TArray<class UJsonUtilsValue*> STATIC_StringToJsonValueArray(const struct FString& JsonString, bool* bSuccessful);
	class UJsonUtilsObj* STATIC_StringToJson(const struct FString& JsonString, bool* bSuccessful);
	bool STATIC_SaveJsonToFile(class UJsonUtilsObj* JsonObj, const struct FString& Filename, bool bAllowOverwrite);
	class UJsonUtilsValue* STATIC_MakeJsonStringVal(const struct FString& ValueString);
	class UJsonUtilsObj* STATIC_MakeJsonObj();
	class UJsonUtilsValue* STATIC_MakeJsonIntValue(int ValueNumber);
	class UJsonUtilsValue* STATIC_MakeJsonFloatValue(float ValueNumber);
	class UJsonUtilsValue* STATIC_MakeJsonBoolVal(bool ValueBool);
	class UJsonUtilsRequest* STATIC_MakeHttpRequest();
	class UJsonUtilsObj* STATIC_LoadJsonFromFile(const struct FString& Filename, bool* bSuccessful);
	bool STATIC_JsonToString(class UJsonUtilsObj* JsonObj, struct FString* JsonAsString);
	bool STATIC_JsonToCompressedData(class UJsonUtilsObj* JsonObj, TArray<unsigned char>* Data);
	class UJsonUtilsObj* STATIC_CompressedDataToJson(TArray<unsigned char> Data, bool* bSuccessful);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
