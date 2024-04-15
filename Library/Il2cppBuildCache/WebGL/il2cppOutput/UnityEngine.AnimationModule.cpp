#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.HumanBone[]
struct HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3;
// UnityEngine.SkeletonBone[]
struct SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// UnityEngine.AnimationEvent
struct AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF;
// UnityEngine.AnimationState
struct AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Avatar
struct Avatar_t1A1B32874530475986346E2EED62F9DDEE8C45C6;
// UnityEngine.AvatarMask
struct AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.HumanBone
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Motion
struct Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.SkeletonBone
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F;
// System.String
struct String_t;
// UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Animation/Enumerator
struct Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876;

IL2CPP_EXTERN_C RuntimeClass* AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05ACCFE2F05290DF031B27B4C6B2AD1DC43CCDC6;
IL2CPP_EXTERN_C String_t* _stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E;
IL2CPP_EXTERN_C String_t* _stringLiteral2ED8CAF6321ED9631D3CB63C8A7096F3AB335255;
IL2CPP_EXTERN_C String_t* _stringLiteral35525FB236D9CB0ADE03D4D22EC8AB05BBCACEA3;
IL2CPP_EXTERN_C String_t* _stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286;
IL2CPP_EXTERN_C String_t* _stringLiteral51A170FF50F6F987DB39394B76A00962DAAC1D32;
IL2CPP_EXTERN_C String_t* _stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630;
IL2CPP_EXTERN_C String_t* _stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD022D19E88CF1C2E702FF8813F493923F8AC574;
IL2CPP_EXTERN_C String_t* _stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665;
IL2CPP_EXTERN_C String_t* _stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9;
IL2CPP_EXTERN_C String_t* _stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationClipPlayable__ctor_m1A220E926C6246E895CCAAE42EF14DFBB4E3DCC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_m5FA14E8076EF2462B8834875F3D4C21DFB68FDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPlayableBinding_CreateAnimationOutput_m7E0CAE6FBD9988D3D98BC42B8C143BC8ECB9A713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetCurrentAnimatorClipInfo_mA1061569ED175C2B54A3273EDB889E9D48DE5A2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetNextAnimatorClipInfo_mB5F0367EAC2C788CD5DB486C511B4F783339C066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D;;
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com;
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com;;
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke;
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke;;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke;;
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E;;
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com;
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com;;
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke;
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1;
struct SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3C417EDD55E853BAA084114A5B12880739B4473C 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02, ____items_1)); }
	inline AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* get__items_1() const { return ____items_1; }
	inline AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02_StaticFields, ____emptyArray_5)); }
	inline AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.Animations.AnimationPlayableBinding
struct AnimationPlayableBinding_tB5FC19DC19465E4176268CBA1FC8C4447C9FF22F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Animations.AnimationPlayableExtensions
struct AnimationPlayableExtensions_t850BEFB87A3BD990FAE359B6A3EFD32B7F9E4981  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct AnimationPlayableGraphExtensions_t3AB4F2463D4411C26A303E8A35FE1956414D6D0F  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
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

// UnityEngine.Animation/Enumerator
struct Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5  : public RuntimeObject
{
public:
	// UnityEngine.Animation UnityEngine.Animation/Enumerator::m_Outer
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___m_Outer_0;
	// System.Int32 UnityEngine.Animation/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_1;

public:
	inline static int32_t get_offset_of_m_Outer_0() { return static_cast<int32_t>(offsetof(Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5, ___m_Outer_0)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_m_Outer_0() const { return ___m_Outer_0; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_m_Outer_0() { return &___m_Outer_0; }
	inline void set_m_Outer_0(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___m_Outer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Outer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5, ___m_CurrentIndex_1)); }
	inline int32_t get_m_CurrentIndex_1() const { return ___m_CurrentIndex_1; }
	inline int32_t* get_address_of_m_CurrentIndex_1() { return &___m_CurrentIndex_1; }
	inline void set_m_CurrentIndex_1(int32_t value)
	{
		___m_CurrentIndex_1 = value;
	}
};


// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};


// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_HasFixedDuration_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_HasFixedDuration_3)); }
	inline bool get_m_HasFixedDuration_3() const { return ___m_HasFixedDuration_3; }
	inline bool* get_address_of_m_HasFixedDuration_3() { return &___m_HasFixedDuration_3; }
	inline void set_m_HasFixedDuration_3(bool value)
	{
		___m_HasFixedDuration_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_NormalizedTime_5)); }
	inline float get_m_NormalizedTime_5() const { return ___m_NormalizedTime_5; }
	inline float* get_address_of_m_NormalizedTime_5() { return &___m_NormalizedTime_5; }
	inline void set_m_NormalizedTime_5(float value)
	{
		___m_NormalizedTime_5 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_6() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_AnyState_6)); }
	inline bool get_m_AnyState_6() const { return ___m_AnyState_6; }
	inline bool* get_address_of_m_AnyState_6() { return &___m_AnyState_6; }
	inline void set_m_AnyState_6(bool value)
	{
		___m_AnyState_6 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_7() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_TransitionType_7)); }
	inline int32_t get_m_TransitionType_7() const { return ___m_TransitionType_7; }
	inline int32_t* get_address_of_m_TransitionType_7() { return &___m_TransitionType_7; }
	inline void set_m_TransitionType_7(int32_t value)
	{
		___m_TransitionType_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
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

// UnityEngine.HumanDescription
struct HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8 
{
public:
	// UnityEngine.HumanBone[] UnityEngine.HumanDescription::human
	HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1* ___human_0;
	// UnityEngine.SkeletonBone[] UnityEngine.HumanDescription::skeleton
	SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456* ___skeleton_1;
	// System.Single UnityEngine.HumanDescription::m_ArmTwist
	float ___m_ArmTwist_2;
	// System.Single UnityEngine.HumanDescription::m_ForeArmTwist
	float ___m_ForeArmTwist_3;
	// System.Single UnityEngine.HumanDescription::m_UpperLegTwist
	float ___m_UpperLegTwist_4;
	// System.Single UnityEngine.HumanDescription::m_LegTwist
	float ___m_LegTwist_5;
	// System.Single UnityEngine.HumanDescription::m_ArmStretch
	float ___m_ArmStretch_6;
	// System.Single UnityEngine.HumanDescription::m_LegStretch
	float ___m_LegStretch_7;
	// System.Single UnityEngine.HumanDescription::m_FeetSpacing
	float ___m_FeetSpacing_8;
	// System.Single UnityEngine.HumanDescription::m_GlobalScale
	float ___m_GlobalScale_9;
	// System.String UnityEngine.HumanDescription::m_RootMotionBoneName
	String_t* ___m_RootMotionBoneName_10;
	// System.Boolean UnityEngine.HumanDescription::m_HasTranslationDoF
	bool ___m_HasTranslationDoF_11;
	// System.Boolean UnityEngine.HumanDescription::m_HasExtraRoot
	bool ___m_HasExtraRoot_12;
	// System.Boolean UnityEngine.HumanDescription::m_SkeletonHasParents
	bool ___m_SkeletonHasParents_13;

public:
	inline static int32_t get_offset_of_human_0() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___human_0)); }
	inline HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1* get_human_0() const { return ___human_0; }
	inline HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1** get_address_of_human_0() { return &___human_0; }
	inline void set_human_0(HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1* value)
	{
		___human_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___human_0), (void*)value);
	}

	inline static int32_t get_offset_of_skeleton_1() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___skeleton_1)); }
	inline SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456* get_skeleton_1() const { return ___skeleton_1; }
	inline SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456** get_address_of_skeleton_1() { return &___skeleton_1; }
	inline void set_skeleton_1(SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456* value)
	{
		___skeleton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeleton_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ArmTwist_2() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_ArmTwist_2)); }
	inline float get_m_ArmTwist_2() const { return ___m_ArmTwist_2; }
	inline float* get_address_of_m_ArmTwist_2() { return &___m_ArmTwist_2; }
	inline void set_m_ArmTwist_2(float value)
	{
		___m_ArmTwist_2 = value;
	}

	inline static int32_t get_offset_of_m_ForeArmTwist_3() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_ForeArmTwist_3)); }
	inline float get_m_ForeArmTwist_3() const { return ___m_ForeArmTwist_3; }
	inline float* get_address_of_m_ForeArmTwist_3() { return &___m_ForeArmTwist_3; }
	inline void set_m_ForeArmTwist_3(float value)
	{
		___m_ForeArmTwist_3 = value;
	}

	inline static int32_t get_offset_of_m_UpperLegTwist_4() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_UpperLegTwist_4)); }
	inline float get_m_UpperLegTwist_4() const { return ___m_UpperLegTwist_4; }
	inline float* get_address_of_m_UpperLegTwist_4() { return &___m_UpperLegTwist_4; }
	inline void set_m_UpperLegTwist_4(float value)
	{
		___m_UpperLegTwist_4 = value;
	}

	inline static int32_t get_offset_of_m_LegTwist_5() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_LegTwist_5)); }
	inline float get_m_LegTwist_5() const { return ___m_LegTwist_5; }
	inline float* get_address_of_m_LegTwist_5() { return &___m_LegTwist_5; }
	inline void set_m_LegTwist_5(float value)
	{
		___m_LegTwist_5 = value;
	}

	inline static int32_t get_offset_of_m_ArmStretch_6() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_ArmStretch_6)); }
	inline float get_m_ArmStretch_6() const { return ___m_ArmStretch_6; }
	inline float* get_address_of_m_ArmStretch_6() { return &___m_ArmStretch_6; }
	inline void set_m_ArmStretch_6(float value)
	{
		___m_ArmStretch_6 = value;
	}

	inline static int32_t get_offset_of_m_LegStretch_7() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_LegStretch_7)); }
	inline float get_m_LegStretch_7() const { return ___m_LegStretch_7; }
	inline float* get_address_of_m_LegStretch_7() { return &___m_LegStretch_7; }
	inline void set_m_LegStretch_7(float value)
	{
		___m_LegStretch_7 = value;
	}

	inline static int32_t get_offset_of_m_FeetSpacing_8() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_FeetSpacing_8)); }
	inline float get_m_FeetSpacing_8() const { return ___m_FeetSpacing_8; }
	inline float* get_address_of_m_FeetSpacing_8() { return &___m_FeetSpacing_8; }
	inline void set_m_FeetSpacing_8(float value)
	{
		___m_FeetSpacing_8 = value;
	}

	inline static int32_t get_offset_of_m_GlobalScale_9() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_GlobalScale_9)); }
	inline float get_m_GlobalScale_9() const { return ___m_GlobalScale_9; }
	inline float* get_address_of_m_GlobalScale_9() { return &___m_GlobalScale_9; }
	inline void set_m_GlobalScale_9(float value)
	{
		___m_GlobalScale_9 = value;
	}

	inline static int32_t get_offset_of_m_RootMotionBoneName_10() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_RootMotionBoneName_10)); }
	inline String_t* get_m_RootMotionBoneName_10() const { return ___m_RootMotionBoneName_10; }
	inline String_t** get_address_of_m_RootMotionBoneName_10() { return &___m_RootMotionBoneName_10; }
	inline void set_m_RootMotionBoneName_10(String_t* value)
	{
		___m_RootMotionBoneName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootMotionBoneName_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasTranslationDoF_11() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_HasTranslationDoF_11)); }
	inline bool get_m_HasTranslationDoF_11() const { return ___m_HasTranslationDoF_11; }
	inline bool* get_address_of_m_HasTranslationDoF_11() { return &___m_HasTranslationDoF_11; }
	inline void set_m_HasTranslationDoF_11(bool value)
	{
		___m_HasTranslationDoF_11 = value;
	}

	inline static int32_t get_offset_of_m_HasExtraRoot_12() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_HasExtraRoot_12)); }
	inline bool get_m_HasExtraRoot_12() const { return ___m_HasExtraRoot_12; }
	inline bool* get_address_of_m_HasExtraRoot_12() { return &___m_HasExtraRoot_12; }
	inline void set_m_HasExtraRoot_12(bool value)
	{
		___m_HasExtraRoot_12 = value;
	}

	inline static int32_t get_offset_of_m_SkeletonHasParents_13() { return static_cast<int32_t>(offsetof(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8, ___m_SkeletonHasParents_13)); }
	inline bool get_m_SkeletonHasParents_13() const { return ___m_SkeletonHasParents_13; }
	inline bool* get_address_of_m_SkeletonHasParents_13() { return &___m_SkeletonHasParents_13; }
	inline void set_m_SkeletonHasParents_13(bool value)
	{
		___m_SkeletonHasParents_13 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.HumanDescription
struct HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshaled_pinvoke
{
	HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke* ___human_0;
	SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke* ___skeleton_1;
	float ___m_ArmTwist_2;
	float ___m_ForeArmTwist_3;
	float ___m_UpperLegTwist_4;
	float ___m_LegTwist_5;
	float ___m_ArmStretch_6;
	float ___m_LegStretch_7;
	float ___m_FeetSpacing_8;
	float ___m_GlobalScale_9;
	char* ___m_RootMotionBoneName_10;
	int32_t ___m_HasTranslationDoF_11;
	int32_t ___m_HasExtraRoot_12;
	int32_t ___m_SkeletonHasParents_13;
};
// Native definition for COM marshalling of UnityEngine.HumanDescription
struct HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshaled_com
{
	HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com* ___human_0;
	SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com* ___skeleton_1;
	float ___m_ArmTwist_2;
	float ___m_ForeArmTwist_3;
	float ___m_UpperLegTwist_4;
	float ___m_LegTwist_5;
	float ___m_ArmStretch_6;
	float ___m_LegStretch_7;
	float ___m_FeetSpacing_8;
	float ___m_GlobalScale_9;
	Il2CppChar* ___m_RootMotionBoneName_10;
	int32_t ___m_HasTranslationDoF_11;
	int32_t ___m_HasExtraRoot_12;
	int32_t ___m_SkeletonHasParents_13;
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


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Animations.NotKeyableAttribute
struct NotKeyableAttribute_tE0C94B5FF990C6B4BB118486BCA35CCDA91AA905  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// UnityEngine.SharedBetweenAnimatorsAttribute
struct SharedBetweenAnimatorsAttribute_t1F94A6AF21AC0F90F38FFEDE964054F34A117279  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.AnimationEventSource
struct AnimationEventSource_t1B170B0043F7F21E0AA3577B3220584CA3797630 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationEventSource_t1B170B0043F7F21E0AA3577B3220584CA3797630, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Animations.AnimationHumanStream
struct AnimationHumanStream_t98A25119C1A24795BA152F54CF9F0673EEDF1C3F 
{
public:
	// System.IntPtr UnityEngine.Animations.AnimationHumanStream::stream
	intptr_t ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(AnimationHumanStream_t98A25119C1A24795BA152F54CF9F0673EEDF1C3F, ___stream_0)); }
	inline intptr_t get_stream_0() const { return ___stream_0; }
	inline intptr_t* get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(intptr_t value)
	{
		___stream_0 = value;
	}
};


// UnityEngine.Animations.AnimationStream
struct AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 
{
public:
	// System.UInt32 UnityEngine.Animations.AnimationStream::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.IntPtr UnityEngine.Animations.AnimationStream::constant
	intptr_t ___constant_1;
	// System.IntPtr UnityEngine.Animations.AnimationStream::input
	intptr_t ___input_2;
	// System.IntPtr UnityEngine.Animations.AnimationStream::output
	intptr_t ___output_3;
	// System.IntPtr UnityEngine.Animations.AnimationStream::workspace
	intptr_t ___workspace_4;
	// System.IntPtr UnityEngine.Animations.AnimationStream::inputStreamAccessor
	intptr_t ___inputStreamAccessor_5;
	// System.IntPtr UnityEngine.Animations.AnimationStream::animationHandleBinder
	intptr_t ___animationHandleBinder_6;

public:
	inline static int32_t get_offset_of_m_AnimatorBindingsVersion_0() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___m_AnimatorBindingsVersion_0)); }
	inline uint32_t get_m_AnimatorBindingsVersion_0() const { return ___m_AnimatorBindingsVersion_0; }
	inline uint32_t* get_address_of_m_AnimatorBindingsVersion_0() { return &___m_AnimatorBindingsVersion_0; }
	inline void set_m_AnimatorBindingsVersion_0(uint32_t value)
	{
		___m_AnimatorBindingsVersion_0 = value;
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___constant_1)); }
	inline intptr_t get_constant_1() const { return ___constant_1; }
	inline intptr_t* get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(intptr_t value)
	{
		___constant_1 = value;
	}

	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___input_2)); }
	inline intptr_t get_input_2() const { return ___input_2; }
	inline intptr_t* get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(intptr_t value)
	{
		___input_2 = value;
	}

	inline static int32_t get_offset_of_output_3() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___output_3)); }
	inline intptr_t get_output_3() const { return ___output_3; }
	inline intptr_t* get_address_of_output_3() { return &___output_3; }
	inline void set_output_3(intptr_t value)
	{
		___output_3 = value;
	}

	inline static int32_t get_offset_of_workspace_4() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___workspace_4)); }
	inline intptr_t get_workspace_4() const { return ___workspace_4; }
	inline intptr_t* get_address_of_workspace_4() { return &___workspace_4; }
	inline void set_workspace_4(intptr_t value)
	{
		___workspace_4 = value;
	}

	inline static int32_t get_offset_of_inputStreamAccessor_5() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___inputStreamAccessor_5)); }
	inline intptr_t get_inputStreamAccessor_5() const { return ___inputStreamAccessor_5; }
	inline intptr_t* get_address_of_inputStreamAccessor_5() { return &___inputStreamAccessor_5; }
	inline void set_inputStreamAccessor_5(intptr_t value)
	{
		___inputStreamAccessor_5 = value;
	}

	inline static int32_t get_offset_of_animationHandleBinder_6() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___animationHandleBinder_6)); }
	inline intptr_t get_animationHandleBinder_6() const { return ___animationHandleBinder_6; }
	inline intptr_t* get_address_of_animationHandleBinder_6() { return &___animationHandleBinder_6; }
	inline void set_animationHandleBinder_6(intptr_t value)
	{
		___animationHandleBinder_6 = value;
	}
};


// UnityEngine.AvatarMaskBodyPart
struct AvatarMaskBodyPart_t20568B4DEC283B9E4977C66FF13E15090B07BF83 
{
public:
	// System.Int32 UnityEngine.AvatarMaskBodyPart::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvatarMaskBodyPart_t20568B4DEC283B9E4977C66FF13E15090B07BF83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.HumanLimit
struct HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_Min_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_Max_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_Center_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.PlayMode
struct PlayMode_tB7ABFA16A3D0582F8EF40752140263F632FBBD68 
{
public:
	// System.Int32 UnityEngine.PlayMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayMode_tB7ABFA16A3D0582F8EF40752140263F632FBBD68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Null_2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.SkeletonBone
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_2() const { return ___position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___rotation_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___scale_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_4() const { return ___scale_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_4;
};

// UnityEngine.StateInfoIndex
struct StateInfoIndex_t96A27EE74F87F915E3B8C246F2DAC129093492EE 
{
public:
	// System.Int32 UnityEngine.StateInfoIndex::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StateInfoIndex_t96A27EE74F87F915E3B8C246F2DAC129093492EE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Animations.AnimationClipPlayable
struct AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.AnimationEvent
struct AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FunctionName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringParameter_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_ObjectReferenceParameter_3)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObjectReferenceParameter_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_StateSender_8)); }
	inline AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateSender_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * ___m_StateSender_8;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * ___m_StateSender_8;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  ___m_AnimatorClipInfo_10;
};

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationMixerPlayable
struct AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationOffsetPlayable
struct AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationPlayableOutput
struct AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17, ___m_Handle_0)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Animations.AnimationPosePlayable
struct AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_StaticFields
{
public:
	// UnityEngine.Animations.AnimationPosePlayable UnityEngine.Animations.AnimationPosePlayable::m_NullPlayable
	AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationRemoveScalePlayable
struct AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_StaticFields
{
public:
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationScriptPlayable
struct AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_StaticFields
{
public:
	// UnityEngine.Animations.AnimationScriptPlayable UnityEngine.Animations.AnimationScriptPlayable::m_NullPlayable
	AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.AnimationState
struct AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD  : public TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514
{
public:

public:
};


// UnityEngine.Animations.AnimatorControllerPlayable
struct AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Avatar
struct Avatar_t1A1B32874530475986346E2EED62F9DDEE8C45C6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.AvatarMask
struct AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.HumanBone
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BoneName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HumanName_1), (void*)value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D, ___limit_2)); }
	inline HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  value)
	{
		___limit_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  ___limit_2;
};

// UnityEngine.Motion
struct Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67, ___U3CisAnimatorMotionU3Ek__BackingField_4)); }
	inline bool get_U3CisAnimatorMotionU3Ek__BackingField_4() const { return ___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return &___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline void set_U3CisAnimatorMotionU3Ek__BackingField_4(bool value)
	{
		___U3CisAnimatorMotionU3Ek__BackingField_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Playables.Playable
struct Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 
{
public:
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t * ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * ___m_CreateOutputMethod_3;

public:
	inline static int32_t get_offset_of_m_StreamName_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_StreamName_0)); }
	inline String_t* get_m_StreamName_0() const { return ___m_StreamName_0; }
	inline String_t** get_address_of_m_StreamName_0() { return &___m_StreamName_0; }
	inline void set_m_StreamName_0(String_t* value)
	{
		___m_StreamName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceObject_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_SourceObject_1)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_SourceObject_1() const { return ___m_SourceObject_1; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_SourceObject_1() { return &___m_SourceObject_1; }
	inline void set_m_SourceObject_1(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_SourceObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceBindingType_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_SourceBindingType_2)); }
	inline Type_t * get_m_SourceBindingType_2() const { return ___m_SourceBindingType_2; }
	inline Type_t ** get_address_of_m_SourceBindingType_2() { return &___m_SourceBindingType_2; }
	inline void set_m_SourceBindingType_2(Type_t * value)
	{
		___m_SourceBindingType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceBindingType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CreateOutputMethod_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_CreateOutputMethod_3)); }
	inline CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * get_m_CreateOutputMethod_3() const { return ___m_CreateOutputMethod_3; }
	inline CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 ** get_address_of_m_CreateOutputMethod_3() { return &___m_CreateOutputMethod_3; }
	inline void set_m_CreateOutputMethod_3(CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * value)
	{
		___m_CreateOutputMethod_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CreateOutputMethod_3), (void*)value);
	}
};

struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;

public:
	inline static int32_t get_offset_of_None_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields, ___None_4)); }
	inline PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* get_None_4() const { return ___None_4; }
	inline PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3** get_address_of_None_4() { return &___None_4; }
	inline void set_None_4(PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* value)
	{
		___None_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_4), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDuration_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields, ___DefaultDuration_5)); }
	inline double get_DefaultDuration_5() const { return ___DefaultDuration_5; }
	inline double* get_address_of_DefaultDuration_5() { return &___DefaultDuration_5; }
	inline void set_DefaultDuration_5(double value)
	{
		___DefaultDuration_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82, ___m_Handle_0)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};


// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178  : public Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67
{
public:

public:
};


// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA  : public RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB
{
public:
	// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * ___OnOverrideControllerDirty_4;

public:
	inline static int32_t get_offset_of_OnOverrideControllerDirty_4() { return static_cast<int32_t>(offsetof(AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA, ___OnOverrideControllerDirty_4)); }
	inline OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * get_OnOverrideControllerDirty_4() const { return ___OnOverrideControllerDirty_4; }
	inline OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C ** get_address_of_OnOverrideControllerDirty_4() { return &___OnOverrideControllerDirty_4; }
	inline void set_OnOverrideControllerDirty_4(OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * value)
	{
		___OnOverrideControllerDirty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOverrideControllerDirty_4), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.HumanBone[]
struct HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D  m_Items[1];

public:
	inline HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_BoneName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_HumanName_1), (void*)NULL);
		#endif
	}
	inline HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_BoneName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_HumanName_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.SkeletonBone[]
struct SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E  m_Items[1];

public:
	inline SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parentName_1), (void*)NULL);
		#endif
	}
	inline SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parentName_1), (void*)NULL);
		#endif
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_back(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_cleanup(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com_back(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com_cleanup(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_back(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke& marshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled);
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_cleanup(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_back(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke& marshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled);
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_cleanup(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com& marshaled);
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com_back(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com& marshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled);
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com_cleanup(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com_back(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com& marshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled);
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com_cleanup(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com& marshaled);

// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationClipPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_gshared (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_mE768E71A80625EBCE4577FA5F82E2A6E6FE4F9F8 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_mF95A24563D8A4517F75A8149D0961C2024DE8DAB (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC97A2B142004D7B757AAF61F6F069FB102372DBA (Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5 * __this, Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___outer0, const RuntimeMethod* method);
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mDC0BDF6F52E99C4A69EFDAC157CC29D0C1A4F9E6 (Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_mA9F511FF346799F0F2672D64998CD38D7CB2E168 (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___self0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationClipPlayable_CreateHandle_mE3E3433174125E35F12E1D4A42AA5AF169546365 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___clip1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable__ctor_m1A220E926C6246E895CCAAE42EF14DFBB4E3DCC1 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_mA9B66D86E89910C84F295E66E47F7F6F81244EC3 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___clip1, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationClipPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3 (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8 (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___x0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m73BDBE0839B6AA4782C37B21DD58D3388B5EC814 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIKInternal_m376E304479CB33B7B5C0092C313166B8A60B3531 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIK_mDBE078CB1B20FA2BEA7EA2B7E09E58A1634E7B7F (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffsetInternal_m12EBF37E195326DA733D51C74995558AACC20EED (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffset_m73DB1A5D3CC6BF59C22B21D03E5302B9EB0209F3 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTimeInternal_mE20DA12E7F9572BD44600181008FEA5FCF4A8DC2 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTime_mBCFA868575001C853C19010861AF5C6311B68310 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTimeInternal_m6F8B9A90AC99F67140389A9606E9B37FD927396B (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTime_mFD32FA01F6540E5889725ED3573F33EEE8BB6A93 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_Injected_mEA0239D188A0831BD081E4C0D466AA816C7705F0 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___clip1, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationLayerMixerPlayable_CreateHandle_mB3FE5C222C1B89138CD5EC5D4280DB192BA0AB11 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_m657989C039C98EAE2A6F1543283BC8F10003BE5A (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_mF476D7A0B1D1086914BB87ABF80D478740A97E8E (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439 (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m018BD27B24B3EDC5101A475A14F13F753F2323AA (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___other0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Playables.PlayableHandle::GetInputCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetInputCount_m210B285B1EDB6D92D55108E009E09B1BF3590EF9 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine.Playables.PlayableHandle&,System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mB347301D17724A44D9397DE09AE3EDB58259FDBC (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, uint32_t ___layerIndex1, AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * ___mask2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMask(System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_m5FA14E8076EF2462B8834875F3D4C21DFB68FDA8 (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, uint32_t ___layerIndex0, AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * ___mask1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9C7D828B364355D6D47239E7937DA62DD22B2E7C (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMixerPlayable_CreateHandle_mC4DD43DE200BFF08646B1652AEAE1024266CA53C (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, int32_t ___inputCount1, bool ___normalizeWeights2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0 (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_mD601FACDE2EC4E03A4CD758E7213F50695D954EA (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, bool ___normalizeWeights1, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3 (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m8979D90ED92FF553B5D6AB0BDD616C544352816B (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_Injected_m59CD57FEB89C3AAB210D0260108003F8D0917F2C (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, bool ___normalizeWeights1, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle2, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMotionXToDeltaPlayable_CreateHandle_m972E9F77790A9729AE882539ECE02737C89126E1 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93 (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_m5B6DE8A40F89B27DF2ACAADBBF9AA77ACC5B4A1B (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_mB08A41C628755AF909489716A1D62AECC2BFDD9E (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m95525069244C217A437DA266C1B38698AB6610D4 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_m79A247B4122FAF7D47D110C83E91FC5B58A0DFCB (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mDBD9C918C8E21DA852C85B4AEF8A268942DC9AA3 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationOffsetPlayable_CreateHandle_mDF087FC2097062CE31C534A102E75D4E04B1EFCB (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, int32_t ___inputCount3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_mA3A5755B797FED3552D6769B37D00D57D0CAAA1B (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049 (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m9AFE60B035481569924E20C6953B4B21EF7734AA (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_Injected_m9FC81070E3F856A7CCEE5AE7CBAF53E7812666D5 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle3, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m944A1B790F35F52E108EF2CC13BA02BD8DE62EB3 (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableBinding UnityEngine.Playables.PlayableBinding::CreateInternal(System.String,UnityEngine.Object,System.Type,UnityEngine.Playables.PlayableBinding/CreateOutputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  PlayableBinding_CreateInternal_mB7307A5C46672D3A7D00AF6A6EC66608ADE2B671 (String_t* ___name0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___sourceObject1, Type_t * ___sourceType2, CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * ___createFunction3, const RuntimeMethod* method);
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  AnimationPlayableOutput_Create_m421CC6D39B79DD5C1E2A88EA4B7F98E433AE8AFC (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, String_t* ___name1, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___target2, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutput UnityEngine.Animations.AnimationPlayableOutput::op_Implicit(UnityEngine.Animations.AnimationPlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  AnimationPlayableOutput_op_Implicit_m550C471087B94BA3E472329E0F593B577ADA1C57 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  ___output0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, String_t* ___name1, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___handle2, const RuntimeMethod* method);
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  AnimationPlayableOutput_get_Null_mD616AD43B83AF5726C08ED5C8BDB7B3B728A579F (const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m7641CA468712BC658E3493162F10FC145F021118 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_m23C6528BCD9B9D2A1CE03D7600523F09A5F9A34F (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  PlayableOutputHandle_get_Null_m33F7D36A76BFDC0B58633BF931E55FA5BBFFD93D (const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m69B5F29DF2D785051B714CFEAAAF09A237978297 (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * __this, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  PlayableOutput_GetHandle_mC56A4F912A7AC8640DE78F95DD6C4F346E36820E (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___handle0, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___target1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57 (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationPosePlayable_GetHandle_m0354C54EB680FC70D4B48D95F7FC4BA4700A0DCE (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_mECC5FA256AAA5334C38DBB6D00EE8AC1BDC015A1 (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  ___other0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationRemoveScalePlayable_CreateHandle_m9FED88FE1BBBD7696FC64E5F3F99048FF011A080 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_m8E93084CF2EEAA9A70B91547AA68C694369DF488 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8 (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m7FE9E55B027861A0B91347F18DAC7E11E2740397 (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_Injected_mA840580A532A02B4BA49A6FB3B3C5233F341767D (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_m1705DCC80312E3D34E17B32BDBAF4BBB78D435D8 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.TrackedReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedReference__ctor_m7E082F3A77162102770CCB781B5EAE437AB373CD (TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_m623172399D38470B4C5EB7DE06A3106AB6958657 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, int32_t ___stateInfoIndex1, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * ___info2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_m7369503B85FAE6630B97209D4F3A7492BD31EA39 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, bool ___isCurrent1, RuntimeObject * ___clips2, const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mDA532C9ADE4056E3577FD254944CAF65767DC58B (int32_t ___instanceID0, const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95 (AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA (AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBD4E1368EB671F6349C5740B1BF131F97BD12CC8 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m9D2F918EE07AE657A11C13F285317C05BB257730 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m21DB79300E852ED93F2521FFC03EC4D858F6B330 (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Avatar::get_humanDescription_Injected(UnityEngine.HumanDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_get_humanDescription_Injected_mD14A11754B6E0CE0788F8BCA6962673A7EC0BC55 (Avatar_t1A1B32874530475986346E2EED62F9DDEE8C45C6 * __this, HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8 * ___ret0, const RuntimeMethod* method);
// System.Single UnityEngine.AvatarMask::GetTransformWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AvatarMask_GetTransformWeight_m3F68A30AB74D655628BEA96B11BE3DACFA40AE51 (AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * Animation_GetStateAtIndex_m436707B278555E5B3AD4FB8F7B1A04F532CDC679 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_mBFB004C6182E7243A2DFA09D7E378A94AC61AABA (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
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
// System.Void UnityEngine.Animation::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Stop_m06283FD9F64A3B05A2A248AE2B86C7F88D479DE9 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method)
{
	typedef void (*Animation_Stop_m06283FD9F64A3B05A2A248AE2B86C7F88D479DE9_ftn) (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 *);
	static Animation_Stop_m06283FD9F64A3B05A2A248AE2B86C7F88D479DE9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Stop_m06283FD9F64A3B05A2A248AE2B86C7F88D479DE9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Animation_Play_mE768E71A80625EBCE4577FA5F82E2A6E6FE4F9F8(__this, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_mE768E71A80625EBCE4577FA5F82E2A6E6FE4F9F8 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___mode0;
		bool L_1;
		L_1 = Animation_PlayDefaultAnimation_mF95A24563D8A4517F75A8149D0961C2024DE8DAB(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_mF95A24563D8A4517F75A8149D0961C2024DE8DAB (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	typedef bool (*Animation_PlayDefaultAnimation_mF95A24563D8A4517F75A8149D0961C2024DE8DAB_ftn) (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 *, int32_t);
	static Animation_PlayDefaultAnimation_mF95A24563D8A4517F75A8149D0961C2024DE8DAB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayDefaultAnimation_mF95A24563D8A4517F75A8149D0961C2024DE8DAB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___mode0);
	return icallRetVal;
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m7F0049CCE49D9F5963AFB5552CDEAD51793891F7 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5 * L_0 = (Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5 *)il2cpp_codegen_object_new(Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5_il2cpp_TypeInfo_var);
		Enumerator__ctor_mC97A2B142004D7B757AAF61F6F069FB102372DBA(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * Animation_GetStateAtIndex_m436707B278555E5B3AD4FB8F7B1A04F532CDC679 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * (*Animation_GetStateAtIndex_m436707B278555E5B3AD4FB8F7B1A04F532CDC679_ftn) (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 *, int32_t);
	static Animation_GetStateAtIndex_m436707B278555E5B3AD4FB8F7B1A04F532CDC679_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_m436707B278555E5B3AD4FB8F7B1A04F532CDC679_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_mBFB004C6182E7243A2DFA09D7E378A94AC61AABA (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animation_GetStateCount_mBFB004C6182E7243A2DFA09D7E378A94AC61AABA_ftn) (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 *);
	static Animation_GetStateCount_mBFB004C6182E7243A2DFA09D7E378A94AC61AABA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_mBFB004C6182E7243A2DFA09D7E378A94AC61AABA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimationClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip__ctor_m1678D7A0D58F768C92690BABB01DBDE64F12D09E (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, const RuntimeMethod* method)
{
	{
		Motion__ctor_mDC0BDF6F52E99C4A69EFDAC157CC29D0C1A4F9E6(__this, /*hidden argument*/NULL);
		AnimationClip_Internal_CreateAnimationClip_mA9F511FF346799F0F2672D64998CD38D7CB2E168(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_mA9F511FF346799F0F2672D64998CD38D7CB2E168 (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___self0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_Internal_CreateAnimationClip_mA9F511FF346799F0F2672D64998CD38D7CB2E168_ftn) (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *);
	static AnimationClip_Internal_CreateAnimationClip_mA9F511FF346799F0F2672D64998CD38D7CB2E168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_Internal_CreateAnimationClip_mA9F511FF346799F0F2672D64998CD38D7CB2E168_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___self0);
}
// System.Single UnityEngine.AnimationClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_length_m7917C4C333DD8083A5395581652C227E0CECC82B (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationClip_get_length_m7917C4C333DD8083A5395581652C227E0CECC82B_ftn) (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *);
	static AnimationClip_get_length_m7917C4C333DD8083A5395581652C227E0CECC82B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_length_m7917C4C333DD8083A5395581652C227E0CECC82B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_length()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.AnimationClip::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_frameRate_mCC11724CA29880EE9659FD07520896FF76F0C950 (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationClip_get_frameRate_mCC11724CA29880EE9659FD07520896FF76F0C950_ftn) (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *);
	static AnimationClip_get_frameRate_mCC11724CA29880EE9659FD07520896FF76F0C950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_frameRate_mCC11724CA29880EE9659FD07520896FF76F0C950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_frameRate()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::set_frameRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_frameRate_mD0329B67F782D6CA95C21A9455CE6F1B2C391E03 (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_set_frameRate_mD0329B67F782D6CA95C21A9455CE6F1B2C391E03_ftn) (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *, float);
	static AnimationClip_set_frameRate_mD0329B67F782D6CA95C21A9455CE6F1B2C391E03_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_frameRate_mD0329B67F782D6CA95C21A9455CE6F1B2C391E03_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_frameRate(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AnimationClip::get_legacy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_legacy_mCA817A75C0DA2EC33EF8ED2572DAD8308F3E9AC4 (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_legacy_mCA817A75C0DA2EC33EF8ED2572DAD8308F3E9AC4_ftn) (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *);
	static AnimationClip_get_legacy_mCA817A75C0DA2EC33EF8ED2572DAD8308F3E9AC4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_legacy_mCA817A75C0DA2EC33EF8ED2572DAD8308F3E9AC4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_legacy()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_legacy_m350699605A47D4D7D2EAF4B6B864405681273CA3 (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_set_legacy_m350699605A47D4D7D2EAF4B6B864405681273CA3_ftn) (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *, bool);
	static AnimationClip_set_legacy_m350699605A47D4D7D2EAF4B6B864405681273CA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_legacy_m350699605A47D4D7D2EAF4B6B864405681273CA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_legacy(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AnimationClip::get_empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_empty_m4579156FCC5C3958D879A088C9A73BBF8EE527CB (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_empty_m4579156FCC5C3958D879A088C9A73BBF8EE527CB_ftn) (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *);
	static AnimationClip_get_empty_m4579156FCC5C3958D879A088C9A73BBF8EE527CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_empty_m4579156FCC5C3958D879A088C9A73BBF8EE527CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_empty()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasGenericRootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasGenericRootTransform_m2E86B853D6F46942691845264A6E33CA0440F85F (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasGenericRootTransform_m2E86B853D6F46942691845264A6E33CA0440F85F_ftn) (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *);
	static AnimationClip_get_hasGenericRootTransform_m2E86B853D6F46942691845264A6E33CA0440F85F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasGenericRootTransform_m2E86B853D6F46942691845264A6E33CA0440F85F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasGenericRootTransform()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasMotionCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasMotionCurves_m4E568486AC2D02F0E2CED7A02F251FAAEE6E54F3 (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasMotionCurves_m4E568486AC2D02F0E2CED7A02F251FAAEE6E54F3_ftn) (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *);
	static AnimationClip_get_hasMotionCurves_m4E568486AC2D02F0E2CED7A02F251FAAEE6E54F3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasMotionCurves_m4E568486AC2D02F0E2CED7A02F251FAAEE6E54F3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasMotionCurves()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasRootCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasRootCurves_mF03EAEC6D37C882C8A5BA2E8ECF7A48B643EE524 (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasRootCurves_mF03EAEC6D37C882C8A5BA2E8ECF7A48B643EE524_ftn) (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *);
	static AnimationClip_get_hasRootCurves_mF03EAEC6D37C882C8A5BA2E8ECF7A48B643EE524_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasRootCurves_mF03EAEC6D37C882C8A5BA2E8ECF7A48B643EE524_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasRootCurves()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasRootMotion_m18C17AAF4B0EB862BE3F1D0B32B61B362564BFDF (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasRootMotion_m18C17AAF4B0EB862BE3F1D0B32B61B362564BFDF_ftn) (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *);
	static AnimationClip_get_hasRootMotion_m18C17AAF4B0EB862BE3F1D0B32B61B362564BFDF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasRootMotion_m18C17AAF4B0EB862BE3F1D0B32B61B362564BFDF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasRootMotion()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationClipPlayable UnityEngine.Animations.AnimationClipPlayable::Create(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953  AnimationClipPlayable_Create_mEB660B81F10778CE974F987D2C42C9921FB6A468 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___clip1, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_0 = ___graph0;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_1 = ___clip1;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_2;
		L_2 = AnimationClipPlayable_CreateHandle_mE3E3433174125E35F12E1D4A42AA5AF169546365(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_3 = V_0;
		AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953  L_4;
		memset((&L_4), 0, sizeof(L_4));
		AnimationClipPlayable__ctor_m1A220E926C6246E895CCAAE42EF14DFBB4E3DCC1((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953  L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationClipPlayable_CreateHandle_mE3E3433174125E35F12E1D4A42AA5AF169546365 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___clip1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_1 = ___graph0;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_2 = ___clip1;
		bool L_3;
		L_3 = AnimationClipPlayable_CreateHandleInternal_mA9B66D86E89910C84F295E66E47F7F6F81244EC3(L_1, L_2, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5;
		L_5 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0023;
	}

IL_001f:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_6 = V_0;
		V_2 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable__ctor_m1A220E926C6246E895CCAAE42EF14DFBB4E3DCC1 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD022D19E88CF1C2E702FF8813F493923F8AC574)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationClipPlayable__ctor_m1A220E926C6246E895CCAAE42EF14DFBB4E3DCC1_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable__ctor_m1A220E926C6246E895CCAAE42EF14DFBB4E3DCC1_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *>(__this + _offset);
	AnimationClipPlayable__ctor_m1A220E926C6246E895CCAAE42EF14DFBB4E3DCC1(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationClipPlayable::op_Implicit(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  AnimationClipPlayable_op_Implicit_m0F3399FF5562E305AF80515DF0609E78AECE05C4 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953  ___playable0, const RuntimeMethod* method)
{
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122((AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *)(&___playable0), /*hidden argument*/NULL);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m73BDBE0839B6AA4782C37B21DD58D3388B5EC814 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122((AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122((AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationClipPlayable_Equals_m73BDBE0839B6AA4782C37B21DD58D3388B5EC814_AdjustorThunk (RuntimeObject * __this, AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationClipPlayable_Equals_m73BDBE0839B6AA4782C37B21DD58D3388B5EC814(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIK_mDBE078CB1B20FA2BEA7EA2B7E09E58A1634E7B7F (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = ___value0;
		AnimationClipPlayable_SetApplyFootIKInternal_m376E304479CB33B7B5C0092C313166B8A60B3531((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetApplyFootIK_mDBE078CB1B20FA2BEA7EA2B7E09E58A1634E7B7F_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *>(__this + _offset);
	AnimationClipPlayable_SetApplyFootIK_mDBE078CB1B20FA2BEA7EA2B7E09E58A1634E7B7F(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffset_m73DB1A5D3CC6BF59C22B21D03E5302B9EB0209F3 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = ___value0;
		AnimationClipPlayable_SetRemoveStartOffsetInternal_m12EBF37E195326DA733D51C74995558AACC20EED((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetRemoveStartOffset_m73DB1A5D3CC6BF59C22B21D03E5302B9EB0209F3_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *>(__this + _offset);
	AnimationClipPlayable_SetRemoveStartOffset_m73DB1A5D3CC6BF59C22B21D03E5302B9EB0209F3(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTime_mBCFA868575001C853C19010861AF5C6311B68310 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = ___value0;
		AnimationClipPlayable_SetOverrideLoopTimeInternal_mE20DA12E7F9572BD44600181008FEA5FCF4A8DC2((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetOverrideLoopTime_mBCFA868575001C853C19010861AF5C6311B68310_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *>(__this + _offset);
	AnimationClipPlayable_SetOverrideLoopTime_mBCFA868575001C853C19010861AF5C6311B68310(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTime_mFD32FA01F6540E5889725ED3573F33EEE8BB6A93 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = ___value0;
		AnimationClipPlayable_SetLoopTimeInternal_m6F8B9A90AC99F67140389A9606E9B37FD927396B((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetLoopTime_mFD32FA01F6540E5889725ED3573F33EEE8BB6A93_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *>(__this + _offset);
	AnimationClipPlayable_SetLoopTime_mFD32FA01F6540E5889725ED3573F33EEE8BB6A93(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_mA9B66D86E89910C84F295E66E47F7F6F81244EC3 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___clip1, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle2, const RuntimeMethod* method)
{
	{
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_0 = ___clip1;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_1 = ___handle2;
		bool L_2;
		L_2 = AnimationClipPlayable_CreateHandleInternal_Injected_mEA0239D188A0831BD081E4C0D466AA816C7705F0((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(&___graph0), L_0, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIKInternal_m376E304479CB33B7B5C0092C313166B8A60B3531 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*AnimationClipPlayable_SetApplyFootIKInternal_m376E304479CB33B7B5C0092C313166B8A60B3531_ftn) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, bool);
	static AnimationClipPlayable_SetApplyFootIKInternal_m376E304479CB33B7B5C0092C313166B8A60B3531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetApplyFootIKInternal_m376E304479CB33B7B5C0092C313166B8A60B3531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffsetInternal_m12EBF37E195326DA733D51C74995558AACC20EED (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*AnimationClipPlayable_SetRemoveStartOffsetInternal_m12EBF37E195326DA733D51C74995558AACC20EED_ftn) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, bool);
	static AnimationClipPlayable_SetRemoveStartOffsetInternal_m12EBF37E195326DA733D51C74995558AACC20EED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetRemoveStartOffsetInternal_m12EBF37E195326DA733D51C74995558AACC20EED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTimeInternal_mE20DA12E7F9572BD44600181008FEA5FCF4A8DC2 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*AnimationClipPlayable_SetOverrideLoopTimeInternal_mE20DA12E7F9572BD44600181008FEA5FCF4A8DC2_ftn) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, bool);
	static AnimationClipPlayable_SetOverrideLoopTimeInternal_mE20DA12E7F9572BD44600181008FEA5FCF4A8DC2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetOverrideLoopTimeInternal_mE20DA12E7F9572BD44600181008FEA5FCF4A8DC2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTimeInternal_m6F8B9A90AC99F67140389A9606E9B37FD927396B (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*AnimationClipPlayable_SetLoopTimeInternal_m6F8B9A90AC99F67140389A9606E9B37FD927396B_ftn) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, bool);
	static AnimationClipPlayable_SetLoopTimeInternal_m6F8B9A90AC99F67140389A9606E9B37FD927396B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetLoopTimeInternal_m6F8B9A90AC99F67140389A9606E9B37FD927396B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_Injected_mEA0239D188A0831BD081E4C0D466AA816C7705F0 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___clip1, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle2, const RuntimeMethod* method)
{
	typedef bool (*AnimationClipPlayable_CreateHandleInternal_Injected_mEA0239D188A0831BD081E4C0D466AA816C7705F0_ftn) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *);
	static AnimationClipPlayable_CreateHandleInternal_Injected_mEA0239D188A0831BD081E4C0D466AA816C7705F0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_CreateHandleInternal_Injected_mEA0239D188A0831BD081E4C0D466AA816C7705F0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___clip1, ___handle2);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke(const AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF& unmarshaled, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_back(const AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_pinvoke& marshaled, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_cleanup(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_com(const AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF& unmarshaled, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_com& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_com_back(const AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_com& marshaled, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_com_cleanup(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationEvent__ctor_mA2780A113EA8DD56C3C2EDD0D60BBA78047BACDE (AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_m_Time_0((0.0f));
		__this->set_m_FunctionName_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_m_StringParameter_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_m_ObjectReferenceParameter_3((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL);
		__this->set_m_FloatParameter_4((0.0f));
		__this->set_m_IntParameter_5(0);
		__this->set_m_MessageOptions_6(0);
		__this->set_m_Source_7(0);
		__this->set_m_StateSender_8((AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD *)NULL);
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
// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  AnimationLayerMixerPlayable_Create_m1F65EDF50D175B13F47F0580AC64B2566C80DC02 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_2;
		L_2 = AnimationLayerMixerPlayable_CreateHandle_mB3FE5C222C1B89138CD5EC5D4280DB192BA0AB11(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_3 = V_0;
		AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  L_4;
		memset((&L_4), 0, sizeof(L_4));
		AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationLayerMixerPlayable_CreateHandle_mB3FE5C222C1B89138CD5EC5D4280DB192BA0AB11 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_1 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AnimationLayerMixerPlayable_CreateHandleInternal_m657989C039C98EAE2A6F1543283BC8F10003BE5A(L_1, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_4;
		L_4 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_002b;
	}

IL_001e:
	{
		int32_t L_5 = ___inputCount1;
		PlayableHandle_SetInputCount_mF476D7A0B1D1086914BB87ABF80D478740A97E8E((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), L_5, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_6 = V_0;
		V_2 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *>(__this + _offset);
	AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439 (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationLayerMixerPlayable::op_Implicit(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  AnimationLayerMixerPlayable_op_Implicit_mFB58A4EF007903C478B8A3B674C0AA3994EFB042 (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___playable0, const RuntimeMethod* method)
{
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439((AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *)(&___playable0), /*hidden argument*/NULL);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m018BD27B24B3EDC5101A475A14F13F753F2323AA (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439((AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439((AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationLayerMixerPlayable_Equals_m018BD27B24B3EDC5101A475A14F13F753F2323AA_AdjustorThunk (RuntimeObject * __this, AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationLayerMixerPlayable_Equals_m018BD27B24B3EDC5101A475A14F13F753F2323AA(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMask(System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_m5FA14E8076EF2462B8834875F3D4C21DFB68FDA8 (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, uint32_t ___layerIndex0, AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * ___mask1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint32_t L_0 = ___layerIndex0;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_1 = __this->get_address_of_m_Handle_0();
		int32_t L_2;
		L_2 = PlayableHandle_GetInputCount_m210B285B1EDB6D92D55108E009E09B1BF3590EF9((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int64_t)((int64_t)((uint64_t)L_0))) < ((int64_t)((int64_t)((int64_t)L_2))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		uint32_t L_4 = ___layerIndex0;
		uint32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)), &L_5);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_7 = __this->get_address_of_m_Handle_0();
		int32_t L_8;
		L_8 = PlayableHandle_GetInputCount_m210B285B1EDB6D92D55108E009E09B1BF3590EF9((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_7, /*hidden argument*/NULL);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		RuntimeObject * L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral35525FB236D9CB0ADE03D4D22EC8AB05BBCACEA3)), L_6, L_10, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_12 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51A170FF50F6F987DB39394B76A00962DAAC1D32)), L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_m5FA14E8076EF2462B8834875F3D4C21DFB68FDA8_RuntimeMethod_var)));
	}

IL_0045:
	{
		AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * L_13 = ___mask1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_14;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_16 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ED8CAF6321ED9631D3CB63C8A7096F3AB335255)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_m5FA14E8076EF2462B8834875F3D4C21DFB68FDA8_RuntimeMethod_var)));
	}

IL_005b:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_17 = __this->get_address_of_m_Handle_0();
		uint32_t L_18 = ___layerIndex0;
		AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * L_19 = ___mask1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var);
		AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mB347301D17724A44D9397DE09AE3EDB58259FDBC((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_17, L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_m5FA14E8076EF2462B8834875F3D4C21DFB68FDA8_AdjustorThunk (RuntimeObject * __this, uint32_t ___layerIndex0, AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * ___mask1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *>(__this + _offset);
	AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_m5FA14E8076EF2462B8834875F3D4C21DFB68FDA8(_thisAdjusted, ___layerIndex0, ___mask1, method);
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_m657989C039C98EAE2A6F1543283BC8F10003BE5A (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = ___handle1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9C7D828B364355D6D47239E7937DA62DD22B2E7C((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(&___graph0), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine.Playables.PlayableHandle&,System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mB347301D17724A44D9397DE09AE3EDB58259FDBC (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, uint32_t ___layerIndex1, AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * ___mask2, const RuntimeMethod* method)
{
	typedef void (*AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mB347301D17724A44D9397DE09AE3EDB58259FDBC_ftn) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, uint32_t, AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE *);
	static AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mB347301D17724A44D9397DE09AE3EDB58259FDBC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mB347301D17724A44D9397DE09AE3EDB58259FDBC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine.Playables.PlayableHandle&,System.UInt32,UnityEngine.AvatarMask)");
	_il2cpp_icall_func(___handle0, ___layerIndex1, ___mask2);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__cctor_mBE9F47E968D356F7BB549E705A4E91E1AEAEE807 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9C7D828B364355D6D47239E7937DA62DD22B2E7C (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method)
{
	typedef bool (*AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9C7D828B364355D6D47239E7937DA62DD22B2E7C_ftn) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *);
	static AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9C7D828B364355D6D47239E7937DA62DD22B2E7C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9C7D828B364355D6D47239E7937DA62DD22B2E7C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___handle1);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::Create(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  AnimationMixerPlayable_Create_mA961D86F5F73ADCA1F0650088B6214CEB5A86F1F (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, int32_t ___inputCount1, bool ___normalizeWeights2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		bool L_2 = ___normalizeWeights2;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_3;
		L_3 = AnimationMixerPlayable_CreateHandle_mC4DD43DE200BFF08646B1652AEAE1024266CA53C(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_4 = V_0;
		AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  L_5;
		memset((&L_5), 0, sizeof(L_5));
		AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0((&L_5), L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMixerPlayable_CreateHandle_mC4DD43DE200BFF08646B1652AEAE1024266CA53C (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, int32_t ___inputCount1, bool ___normalizeWeights2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_1 = ___graph0;
		bool L_2 = ___normalizeWeights2;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = AnimationMixerPlayable_CreateHandleInternal_mD601FACDE2EC4E03A4CD758E7213F50695D954EA(L_1, L_2, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5;
		L_5 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_6 = ___inputCount1;
		PlayableHandle_SetInputCount_mF476D7A0B1D1086914BB87ABF80D478740A97E8E((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), L_6, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_7 = V_0;
		V_2 = L_7;
		goto IL_002c;
	}

IL_002c:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0 (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *>(__this + _offset);
	AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3 (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationMixerPlayable::op_Implicit(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  AnimationMixerPlayable_op_Implicit_m0134359D02D110C2F3A6D679FF1C2763DEE65B2A (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___playable0, const RuntimeMethod* method)
{
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3((AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *)(&___playable0), /*hidden argument*/NULL);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m8979D90ED92FF553B5D6AB0BDD616C544352816B (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3((AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3((AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMixerPlayable_Equals_m8979D90ED92FF553B5D6AB0BDD616C544352816B_AdjustorThunk (RuntimeObject * __this, AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMixerPlayable_Equals_m8979D90ED92FF553B5D6AB0BDD616C544352816B(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_mD601FACDE2EC4E03A4CD758E7213F50695D954EA (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, bool ___normalizeWeights1, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___normalizeWeights1;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_1 = ___handle2;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AnimationMixerPlayable_CreateHandleInternal_Injected_m59CD57FEB89C3AAB210D0260108003F8D0917F2C((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(&___graph0), L_0, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__cctor_m8DB71DF60AD75D3274E24FDB9DAC8F4D8FDD5C1D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_Injected_m59CD57FEB89C3AAB210D0260108003F8D0917F2C (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, bool ___normalizeWeights1, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle2, const RuntimeMethod* method)
{
	typedef bool (*AnimationMixerPlayable_CreateHandleInternal_Injected_m59CD57FEB89C3AAB210D0260108003F8D0917F2C_ftn) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, bool, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *);
	static AnimationMixerPlayable_CreateHandleInternal_Injected_m59CD57FEB89C3AAB210D0260108003F8D0917F2C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationMixerPlayable_CreateHandleInternal_Injected_m59CD57FEB89C3AAB210D0260108003F8D0917F2C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Boolean,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___normalizeWeights1, ___handle2);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Create(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  AnimationMotionXToDeltaPlayable_Create_m105F1AA83E68FB1ECC9F13756670A5D10AED535D (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_0 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimationMotionXToDeltaPlayable_CreateHandle_m972E9F77790A9729AE882539ECE02737C89126E1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_2 = V_0;
		AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  L_3;
		memset((&L_3), 0, sizeof(L_3));
		AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93((&L_3), L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMotionXToDeltaPlayable_CreateHandle_m972E9F77790A9729AE882539ECE02737C89126E1 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_1 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AnimationMotionXToDeltaPlayable_CreateHandleInternal_m5B6DE8A40F89B27DF2ACAADBBF9AA77ACC5B4A1B(L_1, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_4;
		L_4 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_002b;
	}

IL_001e:
	{
		PlayableHandle_SetInputCount_mF476D7A0B1D1086914BB87ABF80D478740A97E8E((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), 1, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = V_0;
		V_2 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_6 = V_2;
		return L_6;
	}
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93 (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *>(__this + _offset);
	AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::op_Implicit(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  AnimationMotionXToDeltaPlayable_op_Implicit_m65514EF9B93BD082539CFC87D8F8E40BCAF0D3E2 (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___playable0, const RuntimeMethod* method)
{
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA((AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *)(&___playable0), /*hidden argument*/NULL);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_mB08A41C628755AF909489716A1D62AECC2BFDD9E (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA((AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA((AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMotionXToDeltaPlayable_Equals_mB08A41C628755AF909489716A1D62AECC2BFDD9E_AdjustorThunk (RuntimeObject * __this, AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_Equals_mB08A41C628755AF909489716A1D62AECC2BFDD9E(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_m79A247B4122FAF7D47D110C83E91FC5B58A0DFCB (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var);
		AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m95525069244C217A437DA266C1B38698AB6610D4((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_m79A247B4122FAF7D47D110C83E91FC5B58A0DFCB_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *>(__this + _offset);
	AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_m79A247B4122FAF7D47D110C83E91FC5B58A0DFCB(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_m5B6DE8A40F89B27DF2ACAADBBF9AA77ACC5B4A1B (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = ___handle1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mDBD9C918C8E21DA852C85B4AEF8A268942DC9AA3((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(&___graph0), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m95525069244C217A437DA266C1B38698AB6610D4 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m95525069244C217A437DA266C1B38698AB6610D4_ftn) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, bool);
	static AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m95525069244C217A437DA266C1B38698AB6610D4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m95525069244C217A437DA266C1B38698AB6610D4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__cctor_m0C46BAE776A8D7FAB7CEE08C4D6EBC63B08708FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mDBD9C918C8E21DA852C85B4AEF8A268942DC9AA3 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method)
{
	typedef bool (*AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mDBD9C918C8E21DA852C85B4AEF8A268942DC9AA3_ftn) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *);
	static AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mDBD9C918C8E21DA852C85B4AEF8A268942DC9AA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mDBD9C918C8E21DA852C85B4AEF8A268942DC9AA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___handle1);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::Create(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  AnimationOffsetPlayable_Create_mF16E55485912F042CA01604267796D8133906939 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, int32_t ___inputCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_0 = ___graph0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ___rotation2;
		int32_t L_3 = ___inputCount3;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_4;
		L_4 = AnimationOffsetPlayable_CreateHandle_mDF087FC2097062CE31C534A102E75D4E04B1EFCB(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = V_0;
		AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  L_6;
		memset((&L_6), 0, sizeof(L_6));
		AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E((&L_6), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0014;
	}

IL_0014:
	{
		AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationOffsetPlayable_CreateHandle_mDF087FC2097062CE31C534A102E75D4E04B1EFCB (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, int32_t ___inputCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_1 = ___graph0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = ___rotation2;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AnimationOffsetPlayable_CreateHandleInternal_mA3A5755B797FED3552D6769B37D00D57D0CAAA1B(L_1, L_2, L_3, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_6;
		L_6 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_002d;
	}

IL_0020:
	{
		int32_t L_7 = ___inputCount3;
		PlayableHandle_SetInputCount_mF476D7A0B1D1086914BB87ABF80D478740A97E8E((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), L_7, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_8 = V_0;
		V_2 = L_8;
		goto IL_002d;
	}

IL_002d:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_9 = V_2;
		return L_9;
	}
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *>(__this + _offset);
	AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049 (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationOffsetPlayable::op_Implicit(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  AnimationOffsetPlayable_op_Implicit_m20167E3DDFC6AA8F45F791908828653673D29DEA (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___playable0, const RuntimeMethod* method)
{
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049((AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *)(&___playable0), /*hidden argument*/NULL);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m9AFE60B035481569924E20C6953B4B21EF7734AA (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049((AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationOffsetPlayable_Equals_m9AFE60B035481569924E20C6953B4B21EF7734AA_AdjustorThunk (RuntimeObject * __this, AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationOffsetPlayable_Equals_m9AFE60B035481569924E20C6953B4B21EF7734AA(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_mA3A5755B797FED3552D6769B37D00D57D0CAAA1B (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = ___handle3;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AnimationOffsetPlayable_CreateHandleInternal_Injected_m9FC81070E3F856A7CCEE5AE7CBAF53E7812666D5((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(&___graph0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___position1), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&___rotation2), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__cctor_m00251ED10BD7F52F20BC9D0A36B9C8AC52F15FA6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_Injected_m9FC81070E3F856A7CCEE5AE7CBAF53E7812666D5 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle3, const RuntimeMethod* method)
{
	typedef bool (*AnimationOffsetPlayable_CreateHandleInternal_Injected_m9FC81070E3F856A7CCEE5AE7CBAF53E7812666D5_ftn) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *);
	static AnimationOffsetPlayable_CreateHandleInternal_Injected_m9FC81070E3F856A7CCEE5AE7CBAF53E7812666D5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationOffsetPlayable_CreateHandleInternal_Injected_m9FC81070E3F856A7CCEE5AE7CBAF53E7812666D5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___position1, ___rotation2, ___handle3);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableBinding UnityEngine.Animations.AnimationPlayableBinding::Create(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  AnimationPlayableBinding_Create_m2624B49FBCC9B306B0D2C8608CDAD6A96A165DF4 (String_t* ___name0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPlayableBinding_CreateAnimationOutput_m7E0CAE6FBD9988D3D98BC42B8C143BC8ECB9A713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___name0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = ___key1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * L_4 = (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 *)il2cpp_codegen_object_new(CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876_il2cpp_TypeInfo_var);
		CreateOutputMethod__ctor_m944A1B790F35F52E108EF2CC13BA02BD8DE62EB3(L_4, NULL, (intptr_t)((intptr_t)AnimationPlayableBinding_CreateAnimationOutput_m7E0CAE6FBD9988D3D98BC42B8C143BC8ECB9A713_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var);
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_5;
		L_5 = PlayableBinding_CreateInternal_mB7307A5C46672D3A7D00AF6A6EC66608ADE2B671(L_0, L_1, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Animations.AnimationPlayableBinding::CreateAnimationOutput(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  AnimationPlayableBinding_CreateAnimationOutput_m7E0CAE6FBD9988D3D98BC42B8C143BC8ECB9A713 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_0 = ___graph0;
		String_t* L_1 = ___name1;
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_2;
		L_2 = AnimationPlayableOutput_Create_m421CC6D39B79DD5C1E2A88EA4B7F98E433AE8AFC(L_0, L_1, (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *)NULL, /*hidden argument*/NULL);
		PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  L_3;
		L_3 = AnimationPlayableOutput_op_Implicit_m550C471087B94BA3E472329E0F593B577ADA1C57(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  L_4 = V_0;
		return L_4;
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
// System.Void UnityEngine.Animations.AnimationPlayableExtensions::SetAnimatedPropertiesInternal(UnityEngine.Playables.PlayableHandle&,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableExtensions_SetAnimatedPropertiesInternal_mC79FF20E24589C40853C67E22B29F1C7679076B6 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___playable0, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___animatedProperties1, const RuntimeMethod* method)
{
	typedef void (*AnimationPlayableExtensions_SetAnimatedPropertiesInternal_mC79FF20E24589C40853C67E22B29F1C7679076B6_ftn) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *);
	static AnimationPlayableExtensions_SetAnimatedPropertiesInternal_mC79FF20E24589C40853C67E22B29F1C7679076B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableExtensions_SetAnimatedPropertiesInternal_mC79FF20E24589C40853C67E22B29F1C7679076B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableExtensions::SetAnimatedPropertiesInternal(UnityEngine.Playables.PlayableHandle&,UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___playable0, ___animatedProperties1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, String_t* ___name1, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___handle2, const RuntimeMethod* method)
{
	typedef bool (*AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A_ftn) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, String_t*, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *);
	static AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___name1, ___handle2);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  AnimationPlayableOutput_Create_m421CC6D39B79DD5C1E2A88EA4B7F98E433AE8AFC (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, String_t* ___name1, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___target2, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___name1;
		bool L_1;
		L_1 = AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(&___graph0), L_0, (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_3;
		L_3 = AnimationPlayableOutput_get_Null_mD616AD43B83AF5726C08ED5C8BDB7B3B728A579F(/*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_002f;
	}

IL_001a:
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_4 = V_0;
		AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD((AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(&V_1), L_4, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = ___target2;
		AnimationPlayableOutput_SetTarget_m7641CA468712BC658E3493162F10FC145F021118((AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(&V_1), L_5, /*hidden argument*/NULL);
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_6 = V_1;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_7 = V_3;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_m23C6528BCD9B9D2A1CE03D7600523F09A5F9A34F((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&___handle0), /*hidden argument*/PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD_AdjustorThunk (RuntimeObject * __this, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * _thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *>(__this + _offset);
	AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  AnimationPlayableOutput_get_Null_mD616AD43B83AF5726C08ED5C8BDB7B3B728A579F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_il2cpp_TypeInfo_var);
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = PlayableOutputHandle_get_Null_m33F7D36A76BFDC0B58633BF931E55FA5BBFFD93D(/*hidden argument*/NULL);
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * _thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *>(__this + _offset);
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  _returnValue;
	_returnValue = AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Animations.AnimationPlayableOutput::op_Implicit(UnityEngine.Animations.AnimationPlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  AnimationPlayableOutput_op_Implicit_m550C471087B94BA3E472329E0F593B577ADA1C57 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  ___output0, const RuntimeMethod* method)
{
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0((AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(&___output0), /*hidden argument*/NULL);
		PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m69B5F29DF2D785051B714CFEAAAF09A237978297((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::op_Explicit(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  AnimationPlayableOutput_op_Explicit_m003A23ECD599D740A7BCDDA3F18861849F923D9B (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___output0, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = PlayableOutput_GetHandle_mC56A4F912A7AC8640DE78F95DD6C4F346E36820E((PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(&___output0), /*hidden argument*/NULL);
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m7641CA468712BC658E3493162F10FC145F021118 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___value0, const RuntimeMethod* method)
{
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * L_0 = __this->get_address_of_m_Handle_0();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ___value0;
		AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput_SetTarget_m7641CA468712BC658E3493162F10FC145F021118_AdjustorThunk (RuntimeObject * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * _thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *>(__this + _offset);
	AnimationPlayableOutput_SetTarget_m7641CA468712BC658E3493162F10FC145F021118(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___handle0, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___target1, const RuntimeMethod* method)
{
	typedef void (*AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F_ftn) (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *);
	static AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)");
	_il2cpp_icall_func(___handle0, ___target1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57 (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 *>(__this + _offset);
	AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationPosePlayable_GetHandle_m0354C54EB680FC70D4B48D95F7FC4BA4700A0DCE (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationPosePlayable_GetHandle_m0354C54EB680FC70D4B48D95F7FC4BA4700A0DCE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationPosePlayable_GetHandle_m0354C54EB680FC70D4B48D95F7FC4BA4700A0DCE(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_mECC5FA256AAA5334C38DBB6D00EE8AC1BDC015A1 (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationPosePlayable_GetHandle_m0354C54EB680FC70D4B48D95F7FC4BA4700A0DCE((AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationPosePlayable_Equals_mECC5FA256AAA5334C38DBB6D00EE8AC1BDC015A1_AdjustorThunk (RuntimeObject * __this, AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationPosePlayable_Equals_mECC5FA256AAA5334C38DBB6D00EE8AC1BDC015A1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__cctor_m61B5F097B084BBB3CD21AE5E565AB35450C85B1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  AnimationRemoveScalePlayable_Create_mA626A4CC21763E702BABB0027A2864DED4AEF53B (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_2;
		L_2 = AnimationRemoveScalePlayable_CreateHandle_m9FED88FE1BBBD7696FC64E5F3F99048FF011A080(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_3 = V_0;
		AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  L_4;
		memset((&L_4), 0, sizeof(L_4));
		AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationRemoveScalePlayable_CreateHandle_m9FED88FE1BBBD7696FC64E5F3F99048FF011A080 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_1 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AnimationRemoveScalePlayable_CreateHandleInternal_m8E93084CF2EEAA9A70B91547AA68C694369DF488(L_1, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_4;
		L_4 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_002b;
	}

IL_001e:
	{
		int32_t L_5 = ___inputCount1;
		PlayableHandle_SetInputCount_mF476D7A0B1D1086914BB87ABF80D478740A97E8E((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), L_5, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_6 = V_0;
		V_2 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *>(__this + _offset);
	AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8 (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationRemoveScalePlayable::op_Implicit(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  AnimationRemoveScalePlayable_op_Implicit_mBAB1582E27EC405ED0EA2046DF1F75D03B41D7DC (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___playable0, const RuntimeMethod* method)
{
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8((AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *)(&___playable0), /*hidden argument*/NULL);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m7FE9E55B027861A0B91347F18DAC7E11E2740397 (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8((AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationRemoveScalePlayable_Equals_m7FE9E55B027861A0B91347F18DAC7E11E2740397_AdjustorThunk (RuntimeObject * __this, AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationRemoveScalePlayable_Equals_m7FE9E55B027861A0B91347F18DAC7E11E2740397(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_m8E93084CF2EEAA9A70B91547AA68C694369DF488 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = ___handle1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AnimationRemoveScalePlayable_CreateHandleInternal_Injected_mA840580A532A02B4BA49A6FB3B3C5233F341767D((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(&___graph0), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__cctor_mA35B93BA4FDEDAA98ACE6A314BF0ED50839B8A98 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_StaticFields*)il2cpp_codegen_static_fields_for(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_Injected_mA840580A532A02B4BA49A6FB3B3C5233F341767D (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, const RuntimeMethod* method)
{
	typedef bool (*AnimationRemoveScalePlayable_CreateHandleInternal_Injected_mA840580A532A02B4BA49A6FB3B3C5233F341767D_ftn) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *);
	static AnimationRemoveScalePlayable_CreateHandleInternal_Injected_mA840580A532A02B4BA49A6FB3B3C5233F341767D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationRemoveScalePlayable_CreateHandleInternal_Injected_mA840580A532A02B4BA49A6FB3B3C5233F341767D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___handle1);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B *>(__this + _offset);
	AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_m1705DCC80312E3D34E17B32BDBAF4BBB78D435D8 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18((AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18((AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationScriptPlayable_Equals_m1705DCC80312E3D34E17B32BDBAF4BBB78D435D8_AdjustorThunk (RuntimeObject * __this, AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationScriptPlayable_Equals_m1705DCC80312E3D34E17B32BDBAF4BBB78D435D8(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__cctor_m2E7AD0269606C2EB23E1A6A1407E53ACAE1C6F31 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_StaticFields*)il2cpp_codegen_static_fields_for(AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.AnimationState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState__ctor_m5ECFF9F10ACFB838138F1E33E3D55EEAF891D217 (AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * __this, const RuntimeMethod* method)
{
	{
		TrackedReference__ctor_m7E082F3A77162102770CCB781B5EAE437AB373CD(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Animator::get_isHuman()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isHuman_mF84D8FCA931AD30C3ED79723A0FF42643161A969 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isHuman_mF84D8FCA931AD30C3ED79723A0FF42643161A969_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *);
	static Animator_get_isHuman_mF84D8FCA931AD30C3ED79723A0FF42643161A969_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isHuman_mF84D8FCA931AD30C3ED79723A0FF42643161A969_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isHuman()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_hasRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasRootMotion_m762D8451875C8F017E966C09263D38FEF984171F (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasRootMotion_m762D8451875C8F017E966C09263D38FEF984171F_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *);
	static Animator_get_hasRootMotion_m762D8451875C8F017E966C09263D38FEF984171F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasRootMotion_m762D8451875C8F017E966C09263D38FEF984171F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasRootMotion()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animator::get_layerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *);
	static Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layerCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_m623172399D38470B4C5EB7DE06A3106AB6958657 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, int32_t ___stateInfoIndex1, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * ___info2, const RuntimeMethod* method)
{
	typedef void (*Animator_GetAnimatorStateInfo_m623172399D38470B4C5EB7DE06A3106AB6958657_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, int32_t, int32_t, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *);
	static Animator_GetAnimatorStateInfo_m623172399D38470B4C5EB7DE06A3106AB6958657_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorStateInfo_m623172399D38470B4C5EB7DE06A3106AB6958657_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___stateInfoIndex1, ___info2);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorStateInfo_m623172399D38470B4C5EB7DE06A3106AB6958657(__this, L_0, 0, (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), /*hidden argument*/NULL);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetNextAnimatorStateInfo_m0CE4DD9BD652C6C8C691C308FF86ACF650A91C62 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorStateInfo_m623172399D38470B4C5EB7DE06A3106AB6958657(__this, L_0, 1, (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), /*hidden argument*/NULL);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetCurrentAnimatorClipInfo_mA1061569ED175C2B54A3273EDB889E9D48DE5A2C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * ___clips1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_0 = ___clips1;
		V_0 = (bool)((((RuntimeObject*)(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05ACCFE2F05290DF031B27B4C6B2AD1DC43CCDC6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetCurrentAnimatorClipInfo_mA1061569ED175C2B54A3273EDB889E9D48DE5A2C_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___layerIndex0;
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_4 = ___clips1;
		Animator_GetAnimatorClipInfoInternal_m7369503B85FAE6630B97209D4F3A7492BD31EA39(__this, L_3, (bool)1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_m7369503B85FAE6630B97209D4F3A7492BD31EA39 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, bool ___isCurrent1, RuntimeObject * ___clips2, const RuntimeMethod* method)
{
	typedef void (*Animator_GetAnimatorClipInfoInternal_m7369503B85FAE6630B97209D4F3A7492BD31EA39_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, int32_t, bool, RuntimeObject *);
	static Animator_GetAnimatorClipInfoInternal_m7369503B85FAE6630B97209D4F3A7492BD31EA39_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorClipInfoInternal_m7369503B85FAE6630B97209D4F3A7492BD31EA39_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___isCurrent1, ___clips2);
}
// System.Void UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetNextAnimatorClipInfo_mB5F0367EAC2C788CD5DB486C511B4F783339C066 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * ___clips1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_0 = ___clips1;
		V_0 = (bool)((((RuntimeObject*)(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05ACCFE2F05290DF031B27B4C6B2AD1DC43CCDC6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetNextAnimatorClipInfo_mB5F0367EAC2C788CD5DB486C511B4F783339C066_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___layerIndex0;
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_4 = ___clips1;
		Animator_GetAnimatorClipInfoInternal_m7369503B85FAE6630B97209D4F3A7492BD31EA39(__this, L_3, (bool)0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mA37A7575AA127459175230011F2BA7560E0E44B9 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsInTransition_mA37A7575AA127459175230011F2BA7560E0E44B9_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, int32_t);
	static Animator_IsInTransition_mA37A7575AA127459175230011F2BA7560E0E44B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInTransition_mA37A7575AA127459175230011F2BA7560E0E44B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInTransition(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return icallRetVal;
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * Animator_get_runtimeAnimatorController_mA31EAB2AB6CA23B48FA70155CA399DFA2EE525CC (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, const RuntimeMethod* method)
{
	typedef RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * (*Animator_get_runtimeAnimatorController_mA31EAB2AB6CA23B48FA70155CA399DFA2EE525CC_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *);
	static Animator_get_runtimeAnimatorController_mA31EAB2AB6CA23B48FA70155CA399DFA2EE525CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_mA31EAB2AB6CA23B48FA70155CA399DFA2EE525CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasBoundPlayables_m1ADEF28BC77A4C8DBC707DA02A1B72E00AC0C88A (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasBoundPlayables_m1ADEF28BC77A4C8DBC707DA02A1B72E00AC0C88A_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *);
	static Animator_get_hasBoundPlayables_m1ADEF28BC77A4C8DBC707DA02A1B72E00AC0C88A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_m1ADEF28BC77A4C8DBC707DA02A1B72E00AC0C88A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668 (String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668_ftn) (String_t*);
	static Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___name0);
	return icallRetVal;
}
// UnityEngine.Avatar UnityEngine.Animator::get_avatar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t1A1B32874530475986346E2EED62F9DDEE8C45C6 * Animator_get_avatar_m489DDC713148AB3DCCCDE5DBEA432E967DFAB28C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, const RuntimeMethod* method)
{
	typedef Avatar_t1A1B32874530475986346E2EED62F9DDEE8C45C6 * (*Animator_get_avatar_m489DDC713148AB3DCCCDE5DBEA432E967DFAB28C_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *);
	static Animator_get_avatar_m489DDC713148AB3DCCCDE5DBEA432E967DFAB28C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_avatar_m489DDC713148AB3DCCCDE5DBEA432E967DFAB28C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_avatar()");
	Avatar_t1A1B32874530475986346E2EED62F9DDEE8C45C6 * icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, String_t*);
	static Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, String_t*);
	static Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95 (AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * __this, const RuntimeMethod* method)
{
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * V_0 = NULL;
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_m_ClipInstanceID_0();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *)(NULL));
		goto IL_0017;
	}

IL_000c:
	{
		int32_t L_1 = __this->get_m_ClipInstanceID_0();
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_2;
		L_2 = AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mDA532C9ADE4056E3577FD254944CAF65767DC58B(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * _thisAdjusted = reinterpret_cast<AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *>(__this + _offset);
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * _returnValue;
	_returnValue = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA (AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Weight_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * _thisAdjusted = reinterpret_cast<AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *>(__this + _offset);
	float _returnValue;
	_returnValue = AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mDA532C9ADE4056E3577FD254944CAF65767DC58B (int32_t ___instanceID0, const RuntimeMethod* method)
{
	typedef AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * (*AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mDA532C9ADE4056E3577FD254944CAF65767DC58B_ftn) (int32_t);
	static AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mDA532C9ADE4056E3577FD254944CAF65767DC58B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mDA532C9ADE4056E3577FD254944CAF65767DC58B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)");
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * icallRetVal = _il2cpp_icall_func(___instanceID0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBD4E1368EB671F6349C5740B1BF131F97BD12CC8 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		__this->set_m_Handle_0(L_0);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = ___handle0;
		AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38((AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable__ctor_mBD4E1368EB671F6349C5740B1BF131F97BD12CC8_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *>(__this + _offset);
	AnimatorControllerPlayable__ctor_mBD4E1368EB671F6349C5740B1BF131F97BD12CC8(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1;
		L_1 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38_RuntimeMethod_var)));
	}

IL_001b:
	{
		bool L_4;
		L_4 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		bool L_6;
		L_6 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_8 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38_RuntimeMethod_var)));
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_9 = ___handle0;
		__this->set_m_Handle_0(L_9);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *>(__this + _offset);
	AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38(_thisAdjusted, ___handle0, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m9D2F918EE07AE657A11C13F285317C05BB257730 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C((AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C((AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimatorControllerPlayable_Equals_m9D2F918EE07AE657A11C13F285317C05BB257730_AdjustorThunk (RuntimeObject * __this, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorControllerPlayable_Equals_m9D2F918EE07AE657A11C13F285317C05BB257730(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__cctor_m82C2FF3AEAD5D042648E50B513269EF367C51EB4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_mBD4E1368EB671F6349C5740B1BF131F97BD12CC8((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.AnimatorOverrideController::OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_OnInvalidateOverrideController_m579571520B7C607B6983D4973EBAE982EAC9AA40 (AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA * ___controller0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA * L_0 = ___controller0;
		OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * L_1 = L_0->get_OnOverrideControllerDirty_4();
		V_0 = (bool)((!(((RuntimeObject*)(OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA * L_3 = ___controller0;
		OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * L_4 = L_3->get_OnOverrideControllerDirty_4();
		OnOverrideControllerDirtyCallback_Invoke_m21DB79300E852ED93F2521FFC03EC4D858F6B330(L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
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
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_FullPath_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke(const AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0& unmarshaled, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_back(const AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_com(const AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0& unmarshaled, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_com_back(const AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_com& marshaled, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_com_cleanup(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Avatar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar__ctor_mCC21D82CD9B57803A22B8A866B1B006DA0CA50BE (Avatar_t1A1B32874530475986346E2EED62F9DDEE8C45C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.HumanDescription UnityEngine.Avatar::get_humanDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8  Avatar_get_humanDescription_mCABAC1F1CAF90785FA9289B67C0E08E67DFF48B7 (Avatar_t1A1B32874530475986346E2EED62F9DDEE8C45C6 * __this, const RuntimeMethod* method)
{
	HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Avatar_get_humanDescription_Injected_mD14A11754B6E0CE0788F8BCA6962673A7EC0BC55(__this, (HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8 *)(&V_0), /*hidden argument*/NULL);
		HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Avatar::get_humanDescription_Injected(UnityEngine.HumanDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_get_humanDescription_Injected_mD14A11754B6E0CE0788F8BCA6962673A7EC0BC55 (Avatar_t1A1B32874530475986346E2EED62F9DDEE8C45C6 * __this, HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Avatar_get_humanDescription_Injected_mD14A11754B6E0CE0788F8BCA6962673A7EC0BC55_ftn) (Avatar_t1A1B32874530475986346E2EED62F9DDEE8C45C6 *, HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8 *);
	static Avatar_get_humanDescription_Injected_mD14A11754B6E0CE0788F8BCA6962673A7EC0BC55_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_get_humanDescription_Injected_mD14A11754B6E0CE0788F8BCA6962673A7EC0BC55_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::get_humanDescription_Injected(UnityEngine.HumanDescription&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AvatarMask::GetHumanoidBodyPartActive(UnityEngine.AvatarMaskBodyPart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AvatarMask_GetHumanoidBodyPartActive_mB97040A2C7626C04A03509E98C24AA5816625425 (AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef bool (*AvatarMask_GetHumanoidBodyPartActive_mB97040A2C7626C04A03509E98C24AA5816625425_ftn) (AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE *, int32_t);
	static AvatarMask_GetHumanoidBodyPartActive_mB97040A2C7626C04A03509E98C24AA5816625425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AvatarMask_GetHumanoidBodyPartActive_mB97040A2C7626C04A03509E98C24AA5816625425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AvatarMask::GetHumanoidBodyPartActive(UnityEngine.AvatarMaskBodyPart)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// System.Int32 UnityEngine.AvatarMask::get_transformCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AvatarMask_get_transformCount_mB31B1569FF87AB4BF2349C84E163C3F3D1CCBA5C (AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AvatarMask_get_transformCount_mB31B1569FF87AB4BF2349C84E163C3F3D1CCBA5C_ftn) (AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE *);
	static AvatarMask_get_transformCount_mB31B1569FF87AB4BF2349C84E163C3F3D1CCBA5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AvatarMask_get_transformCount_mB31B1569FF87AB4BF2349C84E163C3F3D1CCBA5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AvatarMask::get_transformCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.AvatarMask::GetTransformPath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AvatarMask_GetTransformPath_m46404EAA68EF48A4789C01145BEAD8456FC6A15B (AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef String_t* (*AvatarMask_GetTransformPath_m46404EAA68EF48A4789C01145BEAD8456FC6A15B_ftn) (AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE *, int32_t);
	static AvatarMask_GetTransformPath_m46404EAA68EF48A4789C01145BEAD8456FC6A15B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AvatarMask_GetTransformPath_m46404EAA68EF48A4789C01145BEAD8456FC6A15B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AvatarMask::GetTransformPath(System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// System.Single UnityEngine.AvatarMask::GetTransformWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AvatarMask_GetTransformWeight_m3F68A30AB74D655628BEA96B11BE3DACFA40AE51 (AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef float (*AvatarMask_GetTransformWeight_m3F68A30AB74D655628BEA96B11BE3DACFA40AE51_ftn) (AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE *, int32_t);
	static AvatarMask_GetTransformWeight_m3F68A30AB74D655628BEA96B11BE3DACFA40AE51_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AvatarMask_GetTransformWeight_m3F68A30AB74D655628BEA96B11BE3DACFA40AE51_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AvatarMask::GetTransformWeight(System.Int32)");
	float icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// System.Boolean UnityEngine.AvatarMask::GetTransformActive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AvatarMask_GetTransformActive_mA0E8C89948780BD85E9A3DB5CD8F14087A7C0A0C (AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___index0;
		float L_1;
		L_1 = AvatarMask_GetTransformWeight_m3F68A30AB74D655628BEA96B11BE3DACFA40AE51(__this, L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((float)L_1) > ((float)(0.5f)))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
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
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_back(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke& marshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  unmarshaled_limit_temp_2;
	memset((&unmarshaled_limit_temp_2), 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_cleanup(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com_back(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com& marshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  unmarshaled_limit_temp_2;
	memset((&unmarshaled_limit_temp_2), 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com_cleanup(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif




// Conversion methods for marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshal_pinvoke(const HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8& unmarshaled, HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_human_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_human_Length = (unmarshaled.get_human_0())->max_length;
		marshaled.___human_0 = il2cpp_codegen_marshal_allocate_array<HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke>(_unmarshaled_human_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_human_Length); i++)
		{
			HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke((unmarshaled.get_human_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___human_0)[i]);
		}
	}
	else
	{
		marshaled.___human_0 = NULL;
	}
	if (unmarshaled.get_skeleton_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_skeleton_Length = (unmarshaled.get_skeleton_1())->max_length;
		marshaled.___skeleton_1 = il2cpp_codegen_marshal_allocate_array<SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke>(_unmarshaled_skeleton_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_skeleton_Length); i++)
		{
			SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke((unmarshaled.get_skeleton_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___skeleton_1)[i]);
		}
	}
	else
	{
		marshaled.___skeleton_1 = NULL;
	}
	marshaled.___m_ArmTwist_2 = unmarshaled.get_m_ArmTwist_2();
	marshaled.___m_ForeArmTwist_3 = unmarshaled.get_m_ForeArmTwist_3();
	marshaled.___m_UpperLegTwist_4 = unmarshaled.get_m_UpperLegTwist_4();
	marshaled.___m_LegTwist_5 = unmarshaled.get_m_LegTwist_5();
	marshaled.___m_ArmStretch_6 = unmarshaled.get_m_ArmStretch_6();
	marshaled.___m_LegStretch_7 = unmarshaled.get_m_LegStretch_7();
	marshaled.___m_FeetSpacing_8 = unmarshaled.get_m_FeetSpacing_8();
	marshaled.___m_GlobalScale_9 = unmarshaled.get_m_GlobalScale_9();
	marshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_string(unmarshaled.get_m_RootMotionBoneName_10());
	marshaled.___m_HasTranslationDoF_11 = static_cast<int32_t>(unmarshaled.get_m_HasTranslationDoF_11());
	marshaled.___m_HasExtraRoot_12 = static_cast<int32_t>(unmarshaled.get_m_HasExtraRoot_12());
	marshaled.___m_SkeletonHasParents_13 = static_cast<int32_t>(unmarshaled.get_m_SkeletonHasParents_13());
}
IL2CPP_EXTERN_C void HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshal_pinvoke_back(const HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshaled_pinvoke& marshaled, HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___human_0 != NULL)
	{
		if (unmarshaled.get_human_0() == NULL)
		{
			unmarshaled.set_human_0(reinterpret_cast<HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1*>((HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1*)SZArrayNew(HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_human_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D  _marshaled____human_0_i__unmarshaled;
			memset((&_marshaled____human_0_i__unmarshaled), 0, sizeof(_marshaled____human_0_i__unmarshaled));
			HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_back((marshaled.___human_0)[i], _marshaled____human_0_i__unmarshaled);
			(unmarshaled.get_human_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____human_0_i__unmarshaled);
		}
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		if (unmarshaled.get_skeleton_1() == NULL)
		{
			unmarshaled.set_skeleton_1(reinterpret_cast<SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456*>((SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456*)SZArrayNew(SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_skeleton_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E  _marshaled____skeleton_1_i__unmarshaled;
			memset((&_marshaled____skeleton_1_i__unmarshaled), 0, sizeof(_marshaled____skeleton_1_i__unmarshaled));
			SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_back((marshaled.___skeleton_1)[i], _marshaled____skeleton_1_i__unmarshaled);
			(unmarshaled.get_skeleton_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____skeleton_1_i__unmarshaled);
		}
	}
	float unmarshaled_m_ArmTwist_temp_2 = 0.0f;
	unmarshaled_m_ArmTwist_temp_2 = marshaled.___m_ArmTwist_2;
	unmarshaled.set_m_ArmTwist_2(unmarshaled_m_ArmTwist_temp_2);
	float unmarshaled_m_ForeArmTwist_temp_3 = 0.0f;
	unmarshaled_m_ForeArmTwist_temp_3 = marshaled.___m_ForeArmTwist_3;
	unmarshaled.set_m_ForeArmTwist_3(unmarshaled_m_ForeArmTwist_temp_3);
	float unmarshaled_m_UpperLegTwist_temp_4 = 0.0f;
	unmarshaled_m_UpperLegTwist_temp_4 = marshaled.___m_UpperLegTwist_4;
	unmarshaled.set_m_UpperLegTwist_4(unmarshaled_m_UpperLegTwist_temp_4);
	float unmarshaled_m_LegTwist_temp_5 = 0.0f;
	unmarshaled_m_LegTwist_temp_5 = marshaled.___m_LegTwist_5;
	unmarshaled.set_m_LegTwist_5(unmarshaled_m_LegTwist_temp_5);
	float unmarshaled_m_ArmStretch_temp_6 = 0.0f;
	unmarshaled_m_ArmStretch_temp_6 = marshaled.___m_ArmStretch_6;
	unmarshaled.set_m_ArmStretch_6(unmarshaled_m_ArmStretch_temp_6);
	float unmarshaled_m_LegStretch_temp_7 = 0.0f;
	unmarshaled_m_LegStretch_temp_7 = marshaled.___m_LegStretch_7;
	unmarshaled.set_m_LegStretch_7(unmarshaled_m_LegStretch_temp_7);
	float unmarshaled_m_FeetSpacing_temp_8 = 0.0f;
	unmarshaled_m_FeetSpacing_temp_8 = marshaled.___m_FeetSpacing_8;
	unmarshaled.set_m_FeetSpacing_8(unmarshaled_m_FeetSpacing_temp_8);
	float unmarshaled_m_GlobalScale_temp_9 = 0.0f;
	unmarshaled_m_GlobalScale_temp_9 = marshaled.___m_GlobalScale_9;
	unmarshaled.set_m_GlobalScale_9(unmarshaled_m_GlobalScale_temp_9);
	unmarshaled.set_m_RootMotionBoneName_10(il2cpp_codegen_marshal_string_result(marshaled.___m_RootMotionBoneName_10));
	bool unmarshaled_m_HasTranslationDoF_temp_11 = false;
	unmarshaled_m_HasTranslationDoF_temp_11 = static_cast<bool>(marshaled.___m_HasTranslationDoF_11);
	unmarshaled.set_m_HasTranslationDoF_11(unmarshaled_m_HasTranslationDoF_temp_11);
	bool unmarshaled_m_HasExtraRoot_temp_12 = false;
	unmarshaled_m_HasExtraRoot_temp_12 = static_cast<bool>(marshaled.___m_HasExtraRoot_12);
	unmarshaled.set_m_HasExtraRoot_12(unmarshaled_m_HasExtraRoot_temp_12);
	bool unmarshaled_m_SkeletonHasParents_temp_13 = false;
	unmarshaled_m_SkeletonHasParents_temp_13 = static_cast<bool>(marshaled.___m_SkeletonHasParents_13);
	unmarshaled.set_m_SkeletonHasParents_13(unmarshaled_m_SkeletonHasParents_temp_13);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshal_pinvoke_cleanup(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshaled_pinvoke& marshaled)
{
	if (marshaled.___human_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____human_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____human_0_CleanupLoopCount); i++)
		{
			HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_cleanup((marshaled.___human_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___human_0);
		marshaled.___human_0 = NULL;
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____skeleton_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____skeleton_1_CleanupLoopCount); i++)
		{
			SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_cleanup((marshaled.___skeleton_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___skeleton_1);
		marshaled.___skeleton_1 = NULL;
	}
	il2cpp_codegen_marshal_free(marshaled.___m_RootMotionBoneName_10);
	marshaled.___m_RootMotionBoneName_10 = NULL;
}




// Conversion methods for marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshal_com(const HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8& unmarshaled, HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshaled_com& marshaled)
{
	if (unmarshaled.get_human_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_human_Length = (unmarshaled.get_human_0())->max_length;
		marshaled.___human_0 = il2cpp_codegen_marshal_allocate_array<HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com>(_unmarshaled_human_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_human_Length); i++)
		{
			HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com((unmarshaled.get_human_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___human_0)[i]);
		}
	}
	else
	{
		marshaled.___human_0 = NULL;
	}
	if (unmarshaled.get_skeleton_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_skeleton_Length = (unmarshaled.get_skeleton_1())->max_length;
		marshaled.___skeleton_1 = il2cpp_codegen_marshal_allocate_array<SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com>(_unmarshaled_skeleton_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_skeleton_Length); i++)
		{
			SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com((unmarshaled.get_skeleton_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___skeleton_1)[i]);
		}
	}
	else
	{
		marshaled.___skeleton_1 = NULL;
	}
	marshaled.___m_ArmTwist_2 = unmarshaled.get_m_ArmTwist_2();
	marshaled.___m_ForeArmTwist_3 = unmarshaled.get_m_ForeArmTwist_3();
	marshaled.___m_UpperLegTwist_4 = unmarshaled.get_m_UpperLegTwist_4();
	marshaled.___m_LegTwist_5 = unmarshaled.get_m_LegTwist_5();
	marshaled.___m_ArmStretch_6 = unmarshaled.get_m_ArmStretch_6();
	marshaled.___m_LegStretch_7 = unmarshaled.get_m_LegStretch_7();
	marshaled.___m_FeetSpacing_8 = unmarshaled.get_m_FeetSpacing_8();
	marshaled.___m_GlobalScale_9 = unmarshaled.get_m_GlobalScale_9();
	marshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_RootMotionBoneName_10());
	marshaled.___m_HasTranslationDoF_11 = static_cast<int32_t>(unmarshaled.get_m_HasTranslationDoF_11());
	marshaled.___m_HasExtraRoot_12 = static_cast<int32_t>(unmarshaled.get_m_HasExtraRoot_12());
	marshaled.___m_SkeletonHasParents_13 = static_cast<int32_t>(unmarshaled.get_m_SkeletonHasParents_13());
}
IL2CPP_EXTERN_C void HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshal_com_back(const HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshaled_com& marshaled, HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___human_0 != NULL)
	{
		if (unmarshaled.get_human_0() == NULL)
		{
			unmarshaled.set_human_0(reinterpret_cast<HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1*>((HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1*)SZArrayNew(HumanBoneU5BU5D_t14692080F98E661E41D9C3D5F232550999B4E3E1_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_human_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D  _marshaled____human_0_i__unmarshaled;
			memset((&_marshaled____human_0_i__unmarshaled), 0, sizeof(_marshaled____human_0_i__unmarshaled));
			HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com_back((marshaled.___human_0)[i], _marshaled____human_0_i__unmarshaled);
			(unmarshaled.get_human_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____human_0_i__unmarshaled);
		}
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		if (unmarshaled.get_skeleton_1() == NULL)
		{
			unmarshaled.set_skeleton_1(reinterpret_cast<SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456*>((SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456*)SZArrayNew(SkeletonBoneU5BU5D_tA656B5188175DF90CA749186755F6CF9A056C456_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_skeleton_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E  _marshaled____skeleton_1_i__unmarshaled;
			memset((&_marshaled____skeleton_1_i__unmarshaled), 0, sizeof(_marshaled____skeleton_1_i__unmarshaled));
			SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com_back((marshaled.___skeleton_1)[i], _marshaled____skeleton_1_i__unmarshaled);
			(unmarshaled.get_skeleton_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____skeleton_1_i__unmarshaled);
		}
	}
	float unmarshaled_m_ArmTwist_temp_2 = 0.0f;
	unmarshaled_m_ArmTwist_temp_2 = marshaled.___m_ArmTwist_2;
	unmarshaled.set_m_ArmTwist_2(unmarshaled_m_ArmTwist_temp_2);
	float unmarshaled_m_ForeArmTwist_temp_3 = 0.0f;
	unmarshaled_m_ForeArmTwist_temp_3 = marshaled.___m_ForeArmTwist_3;
	unmarshaled.set_m_ForeArmTwist_3(unmarshaled_m_ForeArmTwist_temp_3);
	float unmarshaled_m_UpperLegTwist_temp_4 = 0.0f;
	unmarshaled_m_UpperLegTwist_temp_4 = marshaled.___m_UpperLegTwist_4;
	unmarshaled.set_m_UpperLegTwist_4(unmarshaled_m_UpperLegTwist_temp_4);
	float unmarshaled_m_LegTwist_temp_5 = 0.0f;
	unmarshaled_m_LegTwist_temp_5 = marshaled.___m_LegTwist_5;
	unmarshaled.set_m_LegTwist_5(unmarshaled_m_LegTwist_temp_5);
	float unmarshaled_m_ArmStretch_temp_6 = 0.0f;
	unmarshaled_m_ArmStretch_temp_6 = marshaled.___m_ArmStretch_6;
	unmarshaled.set_m_ArmStretch_6(unmarshaled_m_ArmStretch_temp_6);
	float unmarshaled_m_LegStretch_temp_7 = 0.0f;
	unmarshaled_m_LegStretch_temp_7 = marshaled.___m_LegStretch_7;
	unmarshaled.set_m_LegStretch_7(unmarshaled_m_LegStretch_temp_7);
	float unmarshaled_m_FeetSpacing_temp_8 = 0.0f;
	unmarshaled_m_FeetSpacing_temp_8 = marshaled.___m_FeetSpacing_8;
	unmarshaled.set_m_FeetSpacing_8(unmarshaled_m_FeetSpacing_temp_8);
	float unmarshaled_m_GlobalScale_temp_9 = 0.0f;
	unmarshaled_m_GlobalScale_temp_9 = marshaled.___m_GlobalScale_9;
	unmarshaled.set_m_GlobalScale_9(unmarshaled_m_GlobalScale_temp_9);
	unmarshaled.set_m_RootMotionBoneName_10(il2cpp_codegen_marshal_bstring_result(marshaled.___m_RootMotionBoneName_10));
	bool unmarshaled_m_HasTranslationDoF_temp_11 = false;
	unmarshaled_m_HasTranslationDoF_temp_11 = static_cast<bool>(marshaled.___m_HasTranslationDoF_11);
	unmarshaled.set_m_HasTranslationDoF_11(unmarshaled_m_HasTranslationDoF_temp_11);
	bool unmarshaled_m_HasExtraRoot_temp_12 = false;
	unmarshaled_m_HasExtraRoot_temp_12 = static_cast<bool>(marshaled.___m_HasExtraRoot_12);
	unmarshaled.set_m_HasExtraRoot_12(unmarshaled_m_HasExtraRoot_temp_12);
	bool unmarshaled_m_SkeletonHasParents_temp_13 = false;
	unmarshaled_m_SkeletonHasParents_temp_13 = static_cast<bool>(marshaled.___m_SkeletonHasParents_13);
	unmarshaled.set_m_SkeletonHasParents_13(unmarshaled_m_SkeletonHasParents_temp_13);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshal_com_cleanup(HumanDescription_t1303C28262BB11EFADB4C8FF329B62EC809AFBA8_marshaled_com& marshaled)
{
	if (marshaled.___human_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____human_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____human_0_CleanupLoopCount); i++)
		{
			HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com_cleanup((marshaled.___human_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___human_0);
		marshaled.___human_0 = NULL;
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____skeleton_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____skeleton_1_CleanupLoopCount); i++)
		{
			SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com_cleanup((marshaled.___skeleton_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___skeleton_1);
		marshaled.___skeleton_1 = NULL;
	}
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_RootMotionBoneName_10);
	marshaled.___m_RootMotionBoneName_10 = NULL;
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
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mDC0BDF6F52E99C4A69EFDAC157CC29D0C1A4F9E6 (Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Motion::get_isLooping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Motion_get_isLooping_m599512CAC6C62DF964850DE4CE2719537D176B3C (Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67 * __this, const RuntimeMethod* method)
{
	typedef bool (*Motion_get_isLooping_m599512CAC6C62DF964850DE4CE2719537D176B3C_ftn) (Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67 *);
	static Motion_get_isLooping_m599512CAC6C62DF964850DE4CE2719537D176B3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Motion_get_isLooping_m599512CAC6C62DF964850DE4CE2719537D176B3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Motion::get_isLooping()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
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
// System.Void UnityEngine.RuntimeAnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeAnimatorController__ctor_m974DD22EB55FCAE168AE41718C2BD48B008C7CB3 (RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_back(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke& marshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_position_temp_2;
	memset((&unmarshaled_position_temp_2), 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_rotation_temp_3;
	memset((&unmarshaled_rotation_temp_3), 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_scale_temp_4;
	memset((&unmarshaled_scale_temp_4), 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_cleanup(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com_back(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com& marshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_position_temp_2;
	memset((&unmarshaled_position_temp_2), 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_rotation_temp_3;
	memset((&unmarshaled_rotation_temp_3), 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_scale_temp_4;
	memset((&unmarshaled_scale_temp_4), 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com_cleanup(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
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
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_m0B5055A01EEF9070E7611D3C3165AAA118D22953 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_m2FF9D5AD07DF99860C7B0033791FE08F2EF919F1 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mE8EADFCEA482A101BF13AFB773A06C3C2C8B3208 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_mB51A6EA16DA5038BF7C4E46863C8ECA1338EFBDD (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m2BB5A0CD4B083CCDFAC7EE2F8233D2B11825197F (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m8696CC6EE9DC7577A07023F84DCF6E4F80E75ACC (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m7FD170C30229751A93F64C26AFFF9C9BA057BF3D (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_m0027D5548D58C0E2777A4CF9420F015FD56CEC18 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mF81F7D0AB02EB31012A7C50E75295C40301A5055 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_m795DAE1099CF045D5E61ABBBAD017455F48B0707 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m29F850CE0258906408520515E4E157D43AFEB181 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m96E18AE1A75046F85EB7FEB5C05CEC7377F72C1F (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_mF2DF6E7A25D30F05E99984F3E8D4083D695F23CA (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m8AC70A1160FE329D0E1EC31F08B1E85B59DB516D (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC97A2B142004D7B757AAF61F6F069FB102372DBA (Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5 * __this, Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___outer0, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentIndex_1((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_0 = ___outer0;
		__this->set_m_Outer_0(L_0);
		return;
	}
}
// System.Object UnityEngine.Animation/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mAB7913C42CA7EB7EFE4AE1F7B9BEAA6B5F44C1A9 (Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_0 = __this->get_m_Outer_0();
		int32_t L_1 = __this->get_m_CurrentIndex_1();
		AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * L_2;
		L_2 = Animation_GetStateAtIndex_m436707B278555E5B3AD4FB8F7B1A04F532CDC679(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m46EE9A2B09C10531425A6CFA6FD305CCDB4B3101 (Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_0 = __this->get_m_Outer_0();
		int32_t L_1;
		L_1 = Animation_GetStateCount_mBFB004C6182E7243A2DFA09D7E378A94AC61AABA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_m_CurrentIndex_1();
		__this->set_m_CurrentIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = __this->get_m_CurrentIndex_1();
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Animation/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mFC24132D3D5F334C8892F799D3B8B92971CBE6C0 (Enumerator_tD70E33E0A88A86F184E3CA32E532974A65CA2FC5 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentIndex_1((-1));
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback__ctor_mA35F55BEB8A4BD57D109684E857F85C1F0A6C1B5 (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m21DB79300E852ED93F2521FFC03EC4D858F6B330 (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOverrideControllerDirtyCallback_BeginInvoke_m40D5810BF8C5066DB2C7987E7C76FD23D2AC47E3 (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_EndInvoke_mAF3C7805FADE63999DC2121032B11DF86668E9F4 (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
