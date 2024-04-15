#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.String
struct String_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// Cinemachine.UpdateTracker/UpdateStatus
struct UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B;
// Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent
struct TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Cinemachine.TargetPositionCache/TimeRange
struct TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C 
{
public:
	// System.Single Cinemachine.TargetPositionCache/TimeRange::Start
	float ___Start_0;
	// System.Single Cinemachine.TargetPositionCache/TimeRange::End
	float ___End_1;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C, ___Start_0)); }
	inline float get_Start_0() const { return ___Start_0; }
	inline float* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(float value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C, ___End_1)); }
	inline float get_End_1() const { return ___End_1; }
	inline float* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(float value)
	{
		___End_1 = value;
	}
};


// Cinemachine.TargetPositionCache/Mode
struct Mode_t0E8223D47B28BF57DC054FEE24CEDEA6E67BFD0E 
{
public:
	// System.Int32 Cinemachine.TargetPositionCache/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t0E8223D47B28BF57DC054FEE24CEDEA6E67BFD0E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.UpdateTracker/UpdateClock
struct UpdateClock_tAC77FB482A65400E9526AB615FCFB2D7936F4BF4 
{
public:
	// System.Int32 Cinemachine.UpdateTracker/UpdateClock::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateClock_tAC77FB482A65400E9526AB615FCFB2D7936F4BF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode
struct DirectionMode_tEAFCEDA22D8DA3C413D53421BA03A1FA4522594B 
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DirectionMode_tEAFCEDA22D8DA3C413D53421BA03A1FA4522594B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode
struct DissipationMode_t074A13150A88E7F7AE19FB05A8EE8D21BCDE186F 
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DissipationMode_t074A13150A88E7F7AE19FB05A8EE8D21BCDE186F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition
struct HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122 
{
public:
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTriggerAction/ActionSettings/Mode
struct Mode_tBCEED1F0072367C4C796DE014C5B33B0FC0B9A41 
{
public:
	// System.Int32 Cinemachine.CinemachineTriggerAction/ActionSettings/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tBCEED1F0072367C4C796DE014C5B33B0FC0B9A41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTriggerAction/ActionSettings/TimeMode
struct TimeMode_t008A84386C0EFF10B63D7D1232CE5D799B972179 
{
public:
	// System.Int32 Cinemachine.CinemachineTriggerAction/ActionSettings/TimeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeMode_t008A84386C0EFF10B63D7D1232CE5D799B972179, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent
struct TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// Cinemachine.TargetPositionCache/CacheCurve/Item
struct Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B 
{
public:
	// UnityEngine.Vector3 Cinemachine.TargetPositionCache/CacheCurve/Item::Pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Pos_0;
	// UnityEngine.Quaternion Cinemachine.TargetPositionCache/CacheCurve/Item::Rot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___Rot_1;

public:
	inline static int32_t get_offset_of_Pos_0() { return static_cast<int32_t>(offsetof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B, ___Pos_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Pos_0() const { return ___Pos_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Pos_0() { return &___Pos_0; }
	inline void set_Pos_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Pos_0 = value;
	}

	inline static int32_t get_offset_of_Rot_1() { return static_cast<int32_t>(offsetof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B, ___Rot_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_Rot_1() const { return ___Rot_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_Rot_1() { return &___Rot_1; }
	inline void set_Rot_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___Rot_1 = value;
	}
};


// Cinemachine.UpdateTracker/UpdateStatus
struct UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B  : public RuntimeObject
{
public:
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::windowStart
	int32_t ___windowStart_1;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::numWindowLateUpdateMoves
	int32_t ___numWindowLateUpdateMoves_2;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::numWindowFixedUpdateMoves
	int32_t ___numWindowFixedUpdateMoves_3;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::numWindows
	int32_t ___numWindows_4;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::lastFrameUpdated
	int32_t ___lastFrameUpdated_5;
	// UnityEngine.Matrix4x4 Cinemachine.UpdateTracker/UpdateStatus::lastPos
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lastPos_6;
	// Cinemachine.UpdateTracker/UpdateClock Cinemachine.UpdateTracker/UpdateStatus::<PreferredUpdate>k__BackingField
	int32_t ___U3CPreferredUpdateU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_windowStart_1() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___windowStart_1)); }
	inline int32_t get_windowStart_1() const { return ___windowStart_1; }
	inline int32_t* get_address_of_windowStart_1() { return &___windowStart_1; }
	inline void set_windowStart_1(int32_t value)
	{
		___windowStart_1 = value;
	}

	inline static int32_t get_offset_of_numWindowLateUpdateMoves_2() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___numWindowLateUpdateMoves_2)); }
	inline int32_t get_numWindowLateUpdateMoves_2() const { return ___numWindowLateUpdateMoves_2; }
	inline int32_t* get_address_of_numWindowLateUpdateMoves_2() { return &___numWindowLateUpdateMoves_2; }
	inline void set_numWindowLateUpdateMoves_2(int32_t value)
	{
		___numWindowLateUpdateMoves_2 = value;
	}

	inline static int32_t get_offset_of_numWindowFixedUpdateMoves_3() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___numWindowFixedUpdateMoves_3)); }
	inline int32_t get_numWindowFixedUpdateMoves_3() const { return ___numWindowFixedUpdateMoves_3; }
	inline int32_t* get_address_of_numWindowFixedUpdateMoves_3() { return &___numWindowFixedUpdateMoves_3; }
	inline void set_numWindowFixedUpdateMoves_3(int32_t value)
	{
		___numWindowFixedUpdateMoves_3 = value;
	}

	inline static int32_t get_offset_of_numWindows_4() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___numWindows_4)); }
	inline int32_t get_numWindows_4() const { return ___numWindows_4; }
	inline int32_t* get_address_of_numWindows_4() { return &___numWindows_4; }
	inline void set_numWindows_4(int32_t value)
	{
		___numWindows_4 = value;
	}

	inline static int32_t get_offset_of_lastFrameUpdated_5() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___lastFrameUpdated_5)); }
	inline int32_t get_lastFrameUpdated_5() const { return ___lastFrameUpdated_5; }
	inline int32_t* get_address_of_lastFrameUpdated_5() { return &___lastFrameUpdated_5; }
	inline void set_lastFrameUpdated_5(int32_t value)
	{
		___lastFrameUpdated_5 = value;
	}

	inline static int32_t get_offset_of_lastPos_6() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___lastPos_6)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_lastPos_6() const { return ___lastPos_6; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_lastPos_6() { return &___lastPos_6; }
	inline void set_lastPos_6(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___lastPos_6 = value;
	}

	inline static int32_t get_offset_of_U3CPreferredUpdateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___U3CPreferredUpdateU3Ek__BackingField_7)); }
	inline int32_t get_U3CPreferredUpdateU3Ek__BackingField_7() const { return ___U3CPreferredUpdateU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CPreferredUpdateU3Ek__BackingField_7() { return &___U3CPreferredUpdateU3Ek__BackingField_7; }
	inline void set_U3CPreferredUpdateU3Ek__BackingField_7(int32_t value)
	{
		___U3CPreferredUpdateU3Ek__BackingField_7 = value;
	}
};


// Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
struct RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB 
{
public:
	// System.Single Cinemachine.TargetPositionCache/CacheEntry/RecordingItem::Time
	float ___Time_0;
	// System.Boolean Cinemachine.TargetPositionCache/CacheEntry/RecordingItem::IsCut
	bool ___IsCut_1;
	// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheEntry/RecordingItem::Item
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___Item_2;

public:
	inline static int32_t get_offset_of_Time_0() { return static_cast<int32_t>(offsetof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB, ___Time_0)); }
	inline float get_Time_0() const { return ___Time_0; }
	inline float* get_address_of_Time_0() { return &___Time_0; }
	inline void set_Time_0(float value)
	{
		___Time_0 = value;
	}

	inline static int32_t get_offset_of_IsCut_1() { return static_cast<int32_t>(offsetof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB, ___IsCut_1)); }
	inline bool get_IsCut_1() const { return ___IsCut_1; }
	inline bool* get_address_of_IsCut_1() { return &___IsCut_1; }
	inline void set_IsCut_1(bool value)
	{
		___IsCut_1 = value;
	}

	inline static int32_t get_offset_of_Item_2() { return static_cast<int32_t>(offsetof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB, ___Item_2)); }
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  get_Item_2() const { return ___Item_2; }
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B * get_address_of_Item_2() { return &___Item_2; }
	inline void set_Item_2(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  value)
	{
		___Item_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
struct RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke
{
	float ___Time_0;
	int32_t ___IsCut_1;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___Item_2;
};
// Native definition for COM marshalling of Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
struct RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com
{
	float ___Time_0;
	int32_t ___IsCut_1;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___Item_2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Boolean Cinemachine.TargetPositionCache/TimeRange::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0 (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, const RuntimeMethod* method);
// System.Boolean Cinemachine.TargetPositionCache/TimeRange::Contains(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Cinemachine.TargetPositionCache/TimeRange::Include(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// System.Void Cinemachine.UpdateTracker/UpdateStatus::set_PreferredUpdate(Cinemachine.UpdateTracker/UpdateClock)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_op_Equality_mFCC23863C7DB90A5FEFA5F1D9ECD511D21E8C846 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// Cinemachine.UpdateTracker/UpdateClock Cinemachine.UpdateTracker/UpdateStatus::get_PreferredUpdate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::LerpUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_LerpUnclamped_m7096F8833FE606F7DB0E39E42D4C6FD1438CF73F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_SlerpUnclamped_m654DA9A5B418C2E18B2794BC0CE92E52DF96151F (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cinemachine.TargetPositionCache/TimeRange::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0 (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, const RuntimeMethod* method)
{
	{
		// public bool IsEmpty => End < Start;
		float L_0 = __this->get_End_1();
		float L_1 = __this->get_Start_0();
		return (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * _thisAdjusted = reinterpret_cast<TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C *>(__this + _offset);
	bool _returnValue;
	_returnValue = TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Cinemachine.TargetPositionCache/TimeRange::Contains(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method)
{
	{
		// public bool Contains(float time) => time >= Start && time <= End;
		float L_0 = ___time0;
		float L_1 = __this->get_Start_0();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		float L_2 = ___time0;
		float L_3 = __this->get_End_1();
		return (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA_AdjustorThunk (RuntimeObject * __this, float ___time0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * _thisAdjusted = reinterpret_cast<TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C *>(__this + _offset);
	bool _returnValue;
	_returnValue = TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA(_thisAdjusted, ___time0, method);
	return _returnValue;
}
// Cinemachine.TargetPositionCache/TimeRange Cinemachine.TargetPositionCache/TimeRange::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C  TimeRange_get_Empty_m273B20F7E14B9A0670F209E17316EC4EBDD7D053 (const RuntimeMethod* method)
{
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// { get => new TimeRange { Start = float.MaxValue, End = float.MinValue }; }
		il2cpp_codegen_initobj((&V_0), sizeof(TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C ));
		(&V_0)->set_Start_0(((std::numeric_limits<float>::max)()));
		(&V_0)->set_End_1((-(std::numeric_limits<float>::max)()));
		TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C  L_0 = V_0;
		return L_0;
	}
}
// System.Void Cinemachine.TargetPositionCache/TimeRange::Include(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method)
{
	{
		// Start = Mathf.Min(Start, time);
		float L_0 = __this->get_Start_0();
		float L_1 = ___time0;
		float L_2;
		L_2 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_0, L_1, /*hidden argument*/NULL);
		__this->set_Start_0(L_2);
		// End = Mathf.Max(End, time);
		float L_3 = __this->get_End_1();
		float L_4 = ___time0;
		float L_5;
		L_5 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_3, L_4, /*hidden argument*/NULL);
		__this->set_End_1(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E_AdjustorThunk (RuntimeObject * __this, float ___time0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * _thisAdjusted = reinterpret_cast<TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C *>(__this + _offset);
	TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E(_thisAdjusted, ___time0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Cinemachine.UpdateTracker/UpdateClock Cinemachine.UpdateTracker/UpdateStatus::get_PreferredUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = __this->get_U3CPreferredUpdateU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Cinemachine.UpdateTracker/UpdateStatus::set_PreferredUpdate(Cinemachine.UpdateTracker/UpdateClock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929 (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPreferredUpdateU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void Cinemachine.UpdateTracker/UpdateStatus::.ctor(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStatus__ctor_mDEAE275BFECF3D63AE2A93D74EABACD19FA21724 (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___currentFrame0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___pos1, const RuntimeMethod* method)
{
	{
		// public UpdateStatus(int currentFrame, Matrix4x4 pos)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// windowStart = currentFrame;
		int32_t L_0 = ___currentFrame0;
		__this->set_windowStart_1(L_0);
		// lastFrameUpdated = Time.frameCount;
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_lastFrameUpdated_5(L_1);
		// PreferredUpdate = UpdateClock.Late;
		UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline(__this, 1, /*hidden argument*/NULL);
		// lastPos = pos;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___pos1;
		__this->set_lastPos_6(L_2);
		// }
		return;
	}
}
// System.Void Cinemachine.UpdateTracker/UpdateStatus::OnUpdate(System.Int32,Cinemachine.UpdateTracker/UpdateClock,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStatus_OnUpdate_m22DED61941774ECFB0119BAAE3BD2C164D39D521 (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___currentFrame0, int32_t ___currentClock1, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___pos2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B15_0 = NULL;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B16_1 = NULL;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B18_0 = NULL;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B19_1 = NULL;
	{
		// if (lastPos == pos)
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = __this->get_lastPos_6();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1 = ___pos2;
		bool L_2;
		L_2 = Matrix4x4_op_Equality_mFCC23863C7DB90A5FEFA5F1D9ECD511D21E8C846(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (currentClock == UpdateClock.Late)
		int32_t L_3 = ___currentClock1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		// ++numWindowLateUpdateMoves;
		int32_t L_4 = __this->get_numWindowLateUpdateMoves_2();
		__this->set_numWindowLateUpdateMoves_2(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		goto IL_003a;
	}

IL_0023:
	{
		// else if (lastFrameUpdated != currentFrame) // only count 1 per rendered frame
		int32_t L_5 = __this->get_lastFrameUpdated_5();
		int32_t L_6 = ___currentFrame0;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		// ++numWindowFixedUpdateMoves;
		int32_t L_7 = __this->get_numWindowFixedUpdateMoves_3();
		__this->set_numWindowFixedUpdateMoves_3(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_003a:
	{
		// lastPos = pos;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = ___pos2;
		__this->set_lastPos_6(L_8);
		// if (numWindowFixedUpdateMoves > 3 && numWindowLateUpdateMoves < numWindowFixedUpdateMoves / 3)
		int32_t L_9 = __this->get_numWindowFixedUpdateMoves_3();
		if ((((int32_t)L_9) <= ((int32_t)3)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_10 = __this->get_numWindowLateUpdateMoves_2();
		int32_t L_11 = __this->get_numWindowFixedUpdateMoves_3();
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)((int32_t)L_11/(int32_t)3)))))
		{
			goto IL_005e;
		}
	}
	{
		// choice = UpdateClock.Fixed;
		V_0 = 0;
		goto IL_0060;
	}

IL_005e:
	{
		// choice =  UpdateClock.Late;
		V_0 = 1;
	}

IL_0060:
	{
		// if (numWindows == 0)
		int32_t L_12 = __this->get_numWindows_4();
		if (L_12)
		{
			goto IL_006f;
		}
	}
	{
		// PreferredUpdate = choice;
		int32_t L_13 = V_0;
		UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline(__this, L_13, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// if (windowStart + kWindowSize <= currentFrame)
		int32_t L_14 = __this->get_windowStart_1();
		int32_t L_15 = ___currentFrame0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)((int32_t)30)))) > ((int32_t)L_15)))
		{
			goto IL_00bc;
		}
	}
	{
		// PreferredUpdate = choice;
		int32_t L_16 = V_0;
		UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline(__this, L_16, /*hidden argument*/NULL);
		// ++numWindows;
		int32_t L_17 = __this->get_numWindows_4();
		__this->set_numWindows_4(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		// windowStart = currentFrame;
		int32_t L_18 = ___currentFrame0;
		__this->set_windowStart_1(L_18);
		// numWindowLateUpdateMoves = (PreferredUpdate == UpdateClock.Late) ? 1 : 0;
		int32_t L_19;
		L_19 = UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline(__this, /*hidden argument*/NULL);
		G_B14_0 = __this;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			G_B15_0 = __this;
			goto IL_00a4;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B16_0 = 1;
		G_B16_1 = G_B15_0;
	}

IL_00a5:
	{
		G_B16_1->set_numWindowLateUpdateMoves_2(G_B16_0);
		// numWindowFixedUpdateMoves = (PreferredUpdate == UpdateClock.Fixed) ? 1 : 0;
		int32_t L_20;
		L_20 = UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline(__this, /*hidden argument*/NULL);
		G_B17_0 = __this;
		if (!L_20)
		{
			G_B18_0 = __this;
			goto IL_00b6;
		}
	}
	{
		G_B19_0 = 0;
		G_B19_1 = G_B17_0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B19_0 = 1;
		G_B19_1 = G_B18_0;
	}

IL_00b7:
	{
		G_B19_1->set_numWindowFixedUpdateMoves_3(G_B19_0);
	}

IL_00bc:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent__ctor_m1B0E4D0D8DD5D925A7B5F502DECF073FBA41C266 (TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve/Item::Lerp(Cinemachine.TargetPositionCache/CacheCurve/Item,Cinemachine.TargetPositionCache/CacheCurve/Item,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  Item_Lerp_m729C3CBFCA75B42CC2799D491DEF4C17C53602DC (Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___a0, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___b1, float ___t2, const RuntimeMethod* method)
{
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Item
		// {
		//     Pos = Vector3.LerpUnclamped(a.Pos, b.Pos, t),
		//     Rot = Quaternion.SlerpUnclamped(a.Rot, b.Rot, t)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B ));
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_Pos_0();
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_Pos_0();
		float L_4 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_LerpUnclamped_m7096F8833FE606F7DB0E39E42D4C6FD1438CF73F_inline(L_1, L_3, L_4, /*hidden argument*/NULL);
		(&V_0)->set_Pos_0(L_5);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_6 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = L_6.get_Rot_1();
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_8 = ___b1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8.get_Rot_1();
		float L_10 = ___t2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_SlerpUnclamped_m654DA9A5B418C2E18B2794BC0CE92E52DF96151F(L_7, L_9, L_10, /*hidden argument*/NULL);
		(&V_0)->set_Rot_1(L_11);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_12 = V_0;
		return L_12;
	}
}
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve/Item::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  Item_get_Empty_m2209C3BE792AABD138C9A597718D01D2FF089CB3 (const RuntimeMethod* method)
{
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static Item Empty => new Item { Rot = Quaternion.identity };
		il2cpp_codegen_initobj((&V_0), sizeof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B ));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		(&V_0)->set_Rot_1(L_0);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_pinvoke(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke& marshaled)
{
	marshaled.___Time_0 = unmarshaled.get_Time_0();
	marshaled.___IsCut_1 = static_cast<int32_t>(unmarshaled.get_IsCut_1());
	marshaled.___Item_2 = unmarshaled.get_Item_2();
}
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_pinvoke_back(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke& marshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled)
{
	float unmarshaled_Time_temp_0 = 0.0f;
	unmarshaled_Time_temp_0 = marshaled.___Time_0;
	unmarshaled.set_Time_0(unmarshaled_Time_temp_0);
	bool unmarshaled_IsCut_temp_1 = false;
	unmarshaled_IsCut_temp_1 = static_cast<bool>(marshaled.___IsCut_1);
	unmarshaled.set_IsCut_1(unmarshaled_IsCut_temp_1);
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  unmarshaled_Item_temp_2;
	memset((&unmarshaled_Item_temp_2), 0, sizeof(unmarshaled_Item_temp_2));
	unmarshaled_Item_temp_2 = marshaled.___Item_2;
	unmarshaled.set_Item_2(unmarshaled_Item_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_pinvoke_cleanup(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_com(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com& marshaled)
{
	marshaled.___Time_0 = unmarshaled.get_Time_0();
	marshaled.___IsCut_1 = static_cast<int32_t>(unmarshaled.get_IsCut_1());
	marshaled.___Item_2 = unmarshaled.get_Item_2();
}
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_com_back(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com& marshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled)
{
	float unmarshaled_Time_temp_0 = 0.0f;
	unmarshaled_Time_temp_0 = marshaled.___Time_0;
	unmarshaled.set_Time_0(unmarshaled_Time_temp_0);
	bool unmarshaled_IsCut_temp_1 = false;
	unmarshaled_IsCut_temp_1 = static_cast<bool>(marshaled.___IsCut_1);
	unmarshaled.set_IsCut_1(unmarshaled_IsCut_temp_1);
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  unmarshaled_Item_temp_2;
	memset((&unmarshaled_Item_temp_2), 0, sizeof(unmarshaled_Item_temp_2));
	unmarshaled_Item_temp_2 = marshaled.___Item_2;
	unmarshaled.set_Item_2(unmarshaled_Item_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_com_cleanup(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPreferredUpdateU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = __this->get_U3CPreferredUpdateU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_LerpUnclamped_m7096F8833FE606F7DB0E39E42D4C6FD1438CF73F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_x_2();
		float L_6 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___a0;
		float L_8 = L_7.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___b1;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___a0;
		float L_12 = L_11.get_y_3();
		float L_13 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___a0;
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___b1;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___a0;
		float L_19 = L_18.get_z_4();
		float L_20 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), (float)L_6)))), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)), (float)L_13)))), ((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), (float)L_20)))), /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_004b;
	}

IL_004b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		return L_22;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
