#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityEngine.Collider
struct Collider_t1773347010;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// ObjectPooler
struct ObjectPooler_t521731848;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t1276799816;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Camera
struct Camera_t4157153871;
// EnemyController
struct EnemyController_t2191660454;
// DamageBall/OnCollision
struct OnCollision_t3747687736;
// UnityEngine.Transform
struct Transform_t3600365921;
// Joystick
struct Joystick_t9498292;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// BulletSpawner
struct BulletSpawner_t3795733773;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// System.Collections.Generic.List`1<ObjectPooler/Pool>
struct List_1_t1270283955;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct Dictionary_2_t745152412;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ANIMATIONSTATE_T3973623788_H
#define ANIMATIONSTATE_T3973623788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/AnimationState
struct  AnimationState_t3973623788  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T3973623788_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CONTRIGGEREXITU3EC__ANONSTOREY0_T2021806301_H
#define U3CONTRIGGEREXITU3EC__ANONSTOREY0_T2021806301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<OnTriggerExit>c__AnonStorey0
struct  U3COnTriggerExitU3Ec__AnonStorey0_t2021806301  : public RuntimeObject
{
public:
	// UnityEngine.Collider PlayerController/<OnTriggerExit>c__AnonStorey0::other
	Collider_t1773347010 * ___other_0;

public:
	inline static int32_t get_offset_of_other_0() { return static_cast<int32_t>(offsetof(U3COnTriggerExitU3Ec__AnonStorey0_t2021806301, ___other_0)); }
	inline Collider_t1773347010 * get_other_0() const { return ___other_0; }
	inline Collider_t1773347010 ** get_address_of_other_0() { return &___other_0; }
	inline void set_other_0(Collider_t1773347010 * value)
	{
		___other_0 = value;
		Il2CppCodeGenWriteBarrier((&___other_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONTRIGGEREXITU3EC__ANONSTOREY0_T2021806301_H
#ifndef POOL_T4093176509_H
#define POOL_T4093176509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPooler/Pool
struct  Pool_t4093176509  : public RuntimeObject
{
public:
	// System.String ObjectPooler/Pool::tag
	String_t* ___tag_0;
	// UnityEngine.GameObject ObjectPooler/Pool::prefab
	GameObject_t1113636619 * ___prefab_1;
	// System.Int32 ObjectPooler/Pool::size
	int32_t ___size_2;

public:
	inline static int32_t get_offset_of_tag_0() { return static_cast<int32_t>(offsetof(Pool_t4093176509, ___tag_0)); }
	inline String_t* get_tag_0() const { return ___tag_0; }
	inline String_t** get_address_of_tag_0() { return &___tag_0; }
	inline void set_tag_0(String_t* value)
	{
		___tag_0 = value;
		Il2CppCodeGenWriteBarrier((&___tag_0), value);
	}

	inline static int32_t get_offset_of_prefab_1() { return static_cast<int32_t>(offsetof(Pool_t4093176509, ___prefab_1)); }
	inline GameObject_t1113636619 * get_prefab_1() const { return ___prefab_1; }
	inline GameObject_t1113636619 ** get_address_of_prefab_1() { return &___prefab_1; }
	inline void set_prefab_1(GameObject_t1113636619 * value)
	{
		___prefab_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefab_1), value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(Pool_t4093176509, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POOL_T4093176509_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef JOYSTICKMODE_T3732604888_H
#define JOYSTICKMODE_T3732604888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JoystickMode
struct  JoystickMode_t3732604888 
{
public:
	// System.Int32 JoystickMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JoystickMode_t3732604888, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICKMODE_T3732604888_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef ONCOLLISION_T3747687736_H
#define ONCOLLISION_T3747687736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DamageBall/OnCollision
struct  OnCollision_t3747687736  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCOLLISION_T3747687736_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ENEMYSPAWNER_T2006493939_H
#define ENEMYSPAWNER_T2006493939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawner
struct  EnemySpawner_t2006493939  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 EnemySpawner::maxEnemy
	int32_t ___maxEnemy_2;
	// System.Single EnemySpawner::spawnTime
	float ___spawnTime_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> EnemySpawner::spawnPosList
	List_1_t777473367 * ___spawnPosList_4;
	// System.Single EnemySpawner::timeCount
	float ___timeCount_5;
	// System.Int32 EnemySpawner::enemyCount
	int32_t ___enemyCount_6;
	// System.Boolean EnemySpawner::enemyIsFull
	bool ___enemyIsFull_7;

public:
	inline static int32_t get_offset_of_maxEnemy_2() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___maxEnemy_2)); }
	inline int32_t get_maxEnemy_2() const { return ___maxEnemy_2; }
	inline int32_t* get_address_of_maxEnemy_2() { return &___maxEnemy_2; }
	inline void set_maxEnemy_2(int32_t value)
	{
		___maxEnemy_2 = value;
	}

	inline static int32_t get_offset_of_spawnTime_3() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___spawnTime_3)); }
	inline float get_spawnTime_3() const { return ___spawnTime_3; }
	inline float* get_address_of_spawnTime_3() { return &___spawnTime_3; }
	inline void set_spawnTime_3(float value)
	{
		___spawnTime_3 = value;
	}

	inline static int32_t get_offset_of_spawnPosList_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___spawnPosList_4)); }
	inline List_1_t777473367 * get_spawnPosList_4() const { return ___spawnPosList_4; }
	inline List_1_t777473367 ** get_address_of_spawnPosList_4() { return &___spawnPosList_4; }
	inline void set_spawnPosList_4(List_1_t777473367 * value)
	{
		___spawnPosList_4 = value;
		Il2CppCodeGenWriteBarrier((&___spawnPosList_4), value);
	}

	inline static int32_t get_offset_of_timeCount_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___timeCount_5)); }
	inline float get_timeCount_5() const { return ___timeCount_5; }
	inline float* get_address_of_timeCount_5() { return &___timeCount_5; }
	inline void set_timeCount_5(float value)
	{
		___timeCount_5 = value;
	}

	inline static int32_t get_offset_of_enemyCount_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___enemyCount_6)); }
	inline int32_t get_enemyCount_6() const { return ___enemyCount_6; }
	inline int32_t* get_address_of_enemyCount_6() { return &___enemyCount_6; }
	inline void set_enemyCount_6(int32_t value)
	{
		___enemyCount_6 = value;
	}

	inline static int32_t get_offset_of_enemyIsFull_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___enemyIsFull_7)); }
	inline bool get_enemyIsFull_7() const { return ___enemyIsFull_7; }
	inline bool* get_address_of_enemyIsFull_7() { return &___enemyIsFull_7; }
	inline void set_enemyIsFull_7(bool value)
	{
		___enemyIsFull_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYSPAWNER_T2006493939_H
#ifndef SINGLETON_1_T1698578593_H
#define SINGLETON_1_T1698578593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<ObjectPooler>
struct  Singleton_1_t1698578593  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t1698578593_StaticFields
{
public:
	// T Singleton`1::_instance
	ObjectPooler_t521731848 * ____instance_2;
	// System.Object Singleton`1::_lock
	RuntimeObject * ____lock_3;
	// System.Boolean Singleton`1::applicationIsQuitting
	bool ___applicationIsQuitting_4;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t1698578593_StaticFields, ____instance_2)); }
	inline ObjectPooler_t521731848 * get__instance_2() const { return ____instance_2; }
	inline ObjectPooler_t521731848 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(ObjectPooler_t521731848 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier((&____instance_2), value);
	}

	inline static int32_t get_offset_of__lock_3() { return static_cast<int32_t>(offsetof(Singleton_1_t1698578593_StaticFields, ____lock_3)); }
	inline RuntimeObject * get__lock_3() const { return ____lock_3; }
	inline RuntimeObject ** get_address_of__lock_3() { return &____lock_3; }
	inline void set__lock_3(RuntimeObject * value)
	{
		____lock_3 = value;
		Il2CppCodeGenWriteBarrier((&____lock_3), value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_4() { return static_cast<int32_t>(offsetof(Singleton_1_t1698578593_StaticFields, ___applicationIsQuitting_4)); }
	inline bool get_applicationIsQuitting_4() const { return ___applicationIsQuitting_4; }
	inline bool* get_address_of_applicationIsQuitting_4() { return &___applicationIsQuitting_4; }
	inline void set_applicationIsQuitting_4(bool value)
	{
		___applicationIsQuitting_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T1698578593_H
#ifndef ENEMYCONTROLLER_T2191660454_H
#define ENEMYCONTROLLER_T2191660454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController
struct  EnemyController_t2191660454  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean EnemyController::lookAtTarget
	bool ___lookAtTarget_2;
	// UnityEngine.AI.NavMeshAgent EnemyController::agent
	NavMeshAgent_t1276799816 * ___agent_3;
	// UnityEngine.GameObject EnemyController::target
	GameObject_t1113636619 * ___target_4;
	// UnityEngine.Animator EnemyController::animator
	Animator_t434523843 * ___animator_5;
	// UnityEngine.Collider EnemyController::collider
	Collider_t1773347010 * ___collider_6;

public:
	inline static int32_t get_offset_of_lookAtTarget_2() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___lookAtTarget_2)); }
	inline bool get_lookAtTarget_2() const { return ___lookAtTarget_2; }
	inline bool* get_address_of_lookAtTarget_2() { return &___lookAtTarget_2; }
	inline void set_lookAtTarget_2(bool value)
	{
		___lookAtTarget_2 = value;
	}

	inline static int32_t get_offset_of_agent_3() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___agent_3)); }
	inline NavMeshAgent_t1276799816 * get_agent_3() const { return ___agent_3; }
	inline NavMeshAgent_t1276799816 ** get_address_of_agent_3() { return &___agent_3; }
	inline void set_agent_3(NavMeshAgent_t1276799816 * value)
	{
		___agent_3 = value;
		Il2CppCodeGenWriteBarrier((&___agent_3), value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___target_4)); }
	inline GameObject_t1113636619 * get_target_4() const { return ___target_4; }
	inline GameObject_t1113636619 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_t1113636619 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((&___target_4), value);
	}

	inline static int32_t get_offset_of_animator_5() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___animator_5)); }
	inline Animator_t434523843 * get_animator_5() const { return ___animator_5; }
	inline Animator_t434523843 ** get_address_of_animator_5() { return &___animator_5; }
	inline void set_animator_5(Animator_t434523843 * value)
	{
		___animator_5 = value;
		Il2CppCodeGenWriteBarrier((&___animator_5), value);
	}

	inline static int32_t get_offset_of_collider_6() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___collider_6)); }
	inline Collider_t1773347010 * get_collider_6() const { return ___collider_6; }
	inline Collider_t1773347010 ** get_address_of_collider_6() { return &___collider_6; }
	inline void set_collider_6(Collider_t1773347010 * value)
	{
		___collider_6 = value;
		Il2CppCodeGenWriteBarrier((&___collider_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYCONTROLLER_T2191660454_H
#ifndef BULLET_T1042140031_H
#define BULLET_T1042140031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bullet
struct  Bullet_t1042140031  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody Bullet::rigidbody
	Rigidbody_t3916780224 * ___rigidbody_2;

public:
	inline static int32_t get_offset_of_rigidbody_2() { return static_cast<int32_t>(offsetof(Bullet_t1042140031, ___rigidbody_2)); }
	inline Rigidbody_t3916780224 * get_rigidbody_2() const { return ___rigidbody_2; }
	inline Rigidbody_t3916780224 ** get_address_of_rigidbody_2() { return &___rigidbody_2; }
	inline void set_rigidbody_2(Rigidbody_t3916780224 * value)
	{
		___rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___rigidbody_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BULLET_T1042140031_H
#ifndef CAMERACONTROLLER_T3346819214_H
#define CAMERACONTROLLER_T3346819214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3346819214  : public MonoBehaviour_t3962482529
{
public:
	// System.Single CameraController::m_dampTime
	float ___m_dampTime_2;
	// System.Single CameraController::m_screenEdgeBuffer
	float ___m_screenEdgeBuffer_3;
	// System.Single CameraController::m_minSize
	float ___m_minSize_4;
	// System.Collections.Generic.List`1<UnityEngine.Transform> CameraController::m_targets
	List_1_t777473367 * ___m_targets_5;
	// UnityEngine.Vector3 CameraController::m_moveVelocity
	Vector3_t3722313464  ___m_moveVelocity_6;
	// UnityEngine.Vector3 CameraController::m_desiredPosition
	Vector3_t3722313464  ___m_desiredPosition_7;
	// System.Single CameraController::m_zoomSpeed
	float ___m_zoomSpeed_8;
	// UnityEngine.Camera CameraController::m_Camera
	Camera_t4157153871 * ___m_Camera_9;

public:
	inline static int32_t get_offset_of_m_dampTime_2() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___m_dampTime_2)); }
	inline float get_m_dampTime_2() const { return ___m_dampTime_2; }
	inline float* get_address_of_m_dampTime_2() { return &___m_dampTime_2; }
	inline void set_m_dampTime_2(float value)
	{
		___m_dampTime_2 = value;
	}

	inline static int32_t get_offset_of_m_screenEdgeBuffer_3() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___m_screenEdgeBuffer_3)); }
	inline float get_m_screenEdgeBuffer_3() const { return ___m_screenEdgeBuffer_3; }
	inline float* get_address_of_m_screenEdgeBuffer_3() { return &___m_screenEdgeBuffer_3; }
	inline void set_m_screenEdgeBuffer_3(float value)
	{
		___m_screenEdgeBuffer_3 = value;
	}

	inline static int32_t get_offset_of_m_minSize_4() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___m_minSize_4)); }
	inline float get_m_minSize_4() const { return ___m_minSize_4; }
	inline float* get_address_of_m_minSize_4() { return &___m_minSize_4; }
	inline void set_m_minSize_4(float value)
	{
		___m_minSize_4 = value;
	}

	inline static int32_t get_offset_of_m_targets_5() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___m_targets_5)); }
	inline List_1_t777473367 * get_m_targets_5() const { return ___m_targets_5; }
	inline List_1_t777473367 ** get_address_of_m_targets_5() { return &___m_targets_5; }
	inline void set_m_targets_5(List_1_t777473367 * value)
	{
		___m_targets_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_targets_5), value);
	}

	inline static int32_t get_offset_of_m_moveVelocity_6() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___m_moveVelocity_6)); }
	inline Vector3_t3722313464  get_m_moveVelocity_6() const { return ___m_moveVelocity_6; }
	inline Vector3_t3722313464 * get_address_of_m_moveVelocity_6() { return &___m_moveVelocity_6; }
	inline void set_m_moveVelocity_6(Vector3_t3722313464  value)
	{
		___m_moveVelocity_6 = value;
	}

	inline static int32_t get_offset_of_m_desiredPosition_7() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___m_desiredPosition_7)); }
	inline Vector3_t3722313464  get_m_desiredPosition_7() const { return ___m_desiredPosition_7; }
	inline Vector3_t3722313464 * get_address_of_m_desiredPosition_7() { return &___m_desiredPosition_7; }
	inline void set_m_desiredPosition_7(Vector3_t3722313464  value)
	{
		___m_desiredPosition_7 = value;
	}

	inline static int32_t get_offset_of_m_zoomSpeed_8() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___m_zoomSpeed_8)); }
	inline float get_m_zoomSpeed_8() const { return ___m_zoomSpeed_8; }
	inline float* get_address_of_m_zoomSpeed_8() { return &___m_zoomSpeed_8; }
	inline void set_m_zoomSpeed_8(float value)
	{
		___m_zoomSpeed_8 = value;
	}

	inline static int32_t get_offset_of_m_Camera_9() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___m_Camera_9)); }
	inline Camera_t4157153871 * get_m_Camera_9() const { return ___m_Camera_9; }
	inline Camera_t4157153871 ** get_address_of_m_Camera_9() { return &___m_Camera_9; }
	inline void set_m_Camera_9(Camera_t4157153871 * value)
	{
		___m_Camera_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Camera_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACONTROLLER_T3346819214_H
#ifndef CHARACTER_T2781798988_H
#define CHARACTER_T2781798988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Character
struct  Character_t2781798988  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Character::hp
	float ___hp_2;
	// EnemyController Character::enemyController
	EnemyController_t2191660454 * ___enemyController_3;

public:
	inline static int32_t get_offset_of_hp_2() { return static_cast<int32_t>(offsetof(Character_t2781798988, ___hp_2)); }
	inline float get_hp_2() const { return ___hp_2; }
	inline float* get_address_of_hp_2() { return &___hp_2; }
	inline void set_hp_2(float value)
	{
		___hp_2 = value;
	}

	inline static int32_t get_offset_of_enemyController_3() { return static_cast<int32_t>(offsetof(Character_t2781798988, ___enemyController_3)); }
	inline EnemyController_t2191660454 * get_enemyController_3() const { return ___enemyController_3; }
	inline EnemyController_t2191660454 ** get_address_of_enemyController_3() { return &___enemyController_3; }
	inline void set_enemyController_3(EnemyController_t2191660454 * value)
	{
		___enemyController_3 = value;
		Il2CppCodeGenWriteBarrier((&___enemyController_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTER_T2781798988_H
#ifndef DAMAGEBALL_T2634014875_H
#define DAMAGEBALL_T2634014875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DamageBall
struct  DamageBall_t2634014875  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean DamageBall::isDisableOnCollision
	bool ___isDisableOnCollision_2;
	// System.Boolean DamageBall::isDestroyOnCollision
	bool ___isDestroyOnCollision_3;
	// System.Single DamageBall::damageValue
	float ___damageValue_4;
	// UnityEngine.Collider DamageBall::colliderCom
	Collider_t1773347010 * ___colliderCom_5;
	// DamageBall/OnCollision DamageBall::onCollisionEnter
	OnCollision_t3747687736 * ___onCollisionEnter_6;

public:
	inline static int32_t get_offset_of_isDisableOnCollision_2() { return static_cast<int32_t>(offsetof(DamageBall_t2634014875, ___isDisableOnCollision_2)); }
	inline bool get_isDisableOnCollision_2() const { return ___isDisableOnCollision_2; }
	inline bool* get_address_of_isDisableOnCollision_2() { return &___isDisableOnCollision_2; }
	inline void set_isDisableOnCollision_2(bool value)
	{
		___isDisableOnCollision_2 = value;
	}

	inline static int32_t get_offset_of_isDestroyOnCollision_3() { return static_cast<int32_t>(offsetof(DamageBall_t2634014875, ___isDestroyOnCollision_3)); }
	inline bool get_isDestroyOnCollision_3() const { return ___isDestroyOnCollision_3; }
	inline bool* get_address_of_isDestroyOnCollision_3() { return &___isDestroyOnCollision_3; }
	inline void set_isDestroyOnCollision_3(bool value)
	{
		___isDestroyOnCollision_3 = value;
	}

	inline static int32_t get_offset_of_damageValue_4() { return static_cast<int32_t>(offsetof(DamageBall_t2634014875, ___damageValue_4)); }
	inline float get_damageValue_4() const { return ___damageValue_4; }
	inline float* get_address_of_damageValue_4() { return &___damageValue_4; }
	inline void set_damageValue_4(float value)
	{
		___damageValue_4 = value;
	}

	inline static int32_t get_offset_of_colliderCom_5() { return static_cast<int32_t>(offsetof(DamageBall_t2634014875, ___colliderCom_5)); }
	inline Collider_t1773347010 * get_colliderCom_5() const { return ___colliderCom_5; }
	inline Collider_t1773347010 ** get_address_of_colliderCom_5() { return &___colliderCom_5; }
	inline void set_colliderCom_5(Collider_t1773347010 * value)
	{
		___colliderCom_5 = value;
		Il2CppCodeGenWriteBarrier((&___colliderCom_5), value);
	}

	inline static int32_t get_offset_of_onCollisionEnter_6() { return static_cast<int32_t>(offsetof(DamageBall_t2634014875, ___onCollisionEnter_6)); }
	inline OnCollision_t3747687736 * get_onCollisionEnter_6() const { return ___onCollisionEnter_6; }
	inline OnCollision_t3747687736 ** get_address_of_onCollisionEnter_6() { return &___onCollisionEnter_6; }
	inline void set_onCollisionEnter_6(OnCollision_t3747687736 * value)
	{
		___onCollisionEnter_6 = value;
		Il2CppCodeGenWriteBarrier((&___onCollisionEnter_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAMAGEBALL_T2634014875_H
#ifndef PLAYERCONTROLLER_T2064355688_H
#define PLAYERCONTROLLER_T2064355688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2064355688  : public MonoBehaviour_t3962482529
{
public:
	// System.Single PlayerController::m_Speed
	float ___m_Speed_2;
	// System.Single PlayerController::m_turnSpeed
	float ___m_turnSpeed_3;
	// System.Single PlayerController::rotateSpeed
	float ___rotateSpeed_4;
	// System.Single PlayerController::transitionDuration
	float ___transitionDuration_5;
	// UnityEngine.Transform PlayerController::bulletBornPos
	Transform_t3600365921 * ___bulletBornPos_6;
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_7;
	// System.Single PlayerController::shootSpeed
	float ___shootSpeed_8;
	// Joystick PlayerController::moveJoystick
	Joystick_t9498292 * ___moveJoystick_9;
	// Joystick PlayerController::rotateJoystick
	Joystick_t9498292 * ___rotateJoystick_10;
	// UnityEngine.Collider PlayerController::detectionTrigger
	Collider_t1773347010 * ___detectionTrigger_11;
	// System.Single PlayerController::triggerSize
	float ___triggerSize_12;
	// System.Boolean PlayerController::drawLine
	bool ___drawLine_13;
	// UnityEngine.Animator PlayerController::m_animator
	Animator_t434523843 * ___m_animator_14;
	// System.Single PlayerController::m_movementInputValue
	float ___m_movementInputValue_15;
	// System.Single PlayerController::m_turnInputValue
	float ___m_turnInputValue_16;
	// UnityEngine.GameObject PlayerController::closeTarget
	GameObject_t1113636619 * ___closeTarget_17;
	// System.Single PlayerController::shootTimeCount
	float ___shootTimeCount_18;
	// System.Boolean PlayerController::shooting
	bool ___shooting_19;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PlayerController::aroundMeList
	List_1_t2585711361 * ___aroundMeList_20;
	// UnityEngine.LineRenderer PlayerController::lineRenderer
	LineRenderer_t3154350270 * ___lineRenderer_21;

public:
	inline static int32_t get_offset_of_m_Speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___m_Speed_2)); }
	inline float get_m_Speed_2() const { return ___m_Speed_2; }
	inline float* get_address_of_m_Speed_2() { return &___m_Speed_2; }
	inline void set_m_Speed_2(float value)
	{
		___m_Speed_2 = value;
	}

	inline static int32_t get_offset_of_m_turnSpeed_3() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___m_turnSpeed_3)); }
	inline float get_m_turnSpeed_3() const { return ___m_turnSpeed_3; }
	inline float* get_address_of_m_turnSpeed_3() { return &___m_turnSpeed_3; }
	inline void set_m_turnSpeed_3(float value)
	{
		___m_turnSpeed_3 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_4() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___rotateSpeed_4)); }
	inline float get_rotateSpeed_4() const { return ___rotateSpeed_4; }
	inline float* get_address_of_rotateSpeed_4() { return &___rotateSpeed_4; }
	inline void set_rotateSpeed_4(float value)
	{
		___rotateSpeed_4 = value;
	}

	inline static int32_t get_offset_of_transitionDuration_5() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___transitionDuration_5)); }
	inline float get_transitionDuration_5() const { return ___transitionDuration_5; }
	inline float* get_address_of_transitionDuration_5() { return &___transitionDuration_5; }
	inline void set_transitionDuration_5(float value)
	{
		___transitionDuration_5 = value;
	}

	inline static int32_t get_offset_of_bulletBornPos_6() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___bulletBornPos_6)); }
	inline Transform_t3600365921 * get_bulletBornPos_6() const { return ___bulletBornPos_6; }
	inline Transform_t3600365921 ** get_address_of_bulletBornPos_6() { return &___bulletBornPos_6; }
	inline void set_bulletBornPos_6(Transform_t3600365921 * value)
	{
		___bulletBornPos_6 = value;
		Il2CppCodeGenWriteBarrier((&___bulletBornPos_6), value);
	}

	inline static int32_t get_offset_of_moveSpeed_7() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___moveSpeed_7)); }
	inline float get_moveSpeed_7() const { return ___moveSpeed_7; }
	inline float* get_address_of_moveSpeed_7() { return &___moveSpeed_7; }
	inline void set_moveSpeed_7(float value)
	{
		___moveSpeed_7 = value;
	}

	inline static int32_t get_offset_of_shootSpeed_8() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___shootSpeed_8)); }
	inline float get_shootSpeed_8() const { return ___shootSpeed_8; }
	inline float* get_address_of_shootSpeed_8() { return &___shootSpeed_8; }
	inline void set_shootSpeed_8(float value)
	{
		___shootSpeed_8 = value;
	}

	inline static int32_t get_offset_of_moveJoystick_9() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___moveJoystick_9)); }
	inline Joystick_t9498292 * get_moveJoystick_9() const { return ___moveJoystick_9; }
	inline Joystick_t9498292 ** get_address_of_moveJoystick_9() { return &___moveJoystick_9; }
	inline void set_moveJoystick_9(Joystick_t9498292 * value)
	{
		___moveJoystick_9 = value;
		Il2CppCodeGenWriteBarrier((&___moveJoystick_9), value);
	}

	inline static int32_t get_offset_of_rotateJoystick_10() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___rotateJoystick_10)); }
	inline Joystick_t9498292 * get_rotateJoystick_10() const { return ___rotateJoystick_10; }
	inline Joystick_t9498292 ** get_address_of_rotateJoystick_10() { return &___rotateJoystick_10; }
	inline void set_rotateJoystick_10(Joystick_t9498292 * value)
	{
		___rotateJoystick_10 = value;
		Il2CppCodeGenWriteBarrier((&___rotateJoystick_10), value);
	}

	inline static int32_t get_offset_of_detectionTrigger_11() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___detectionTrigger_11)); }
	inline Collider_t1773347010 * get_detectionTrigger_11() const { return ___detectionTrigger_11; }
	inline Collider_t1773347010 ** get_address_of_detectionTrigger_11() { return &___detectionTrigger_11; }
	inline void set_detectionTrigger_11(Collider_t1773347010 * value)
	{
		___detectionTrigger_11 = value;
		Il2CppCodeGenWriteBarrier((&___detectionTrigger_11), value);
	}

	inline static int32_t get_offset_of_triggerSize_12() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___triggerSize_12)); }
	inline float get_triggerSize_12() const { return ___triggerSize_12; }
	inline float* get_address_of_triggerSize_12() { return &___triggerSize_12; }
	inline void set_triggerSize_12(float value)
	{
		___triggerSize_12 = value;
	}

	inline static int32_t get_offset_of_drawLine_13() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___drawLine_13)); }
	inline bool get_drawLine_13() const { return ___drawLine_13; }
	inline bool* get_address_of_drawLine_13() { return &___drawLine_13; }
	inline void set_drawLine_13(bool value)
	{
		___drawLine_13 = value;
	}

	inline static int32_t get_offset_of_m_animator_14() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___m_animator_14)); }
	inline Animator_t434523843 * get_m_animator_14() const { return ___m_animator_14; }
	inline Animator_t434523843 ** get_address_of_m_animator_14() { return &___m_animator_14; }
	inline void set_m_animator_14(Animator_t434523843 * value)
	{
		___m_animator_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_animator_14), value);
	}

	inline static int32_t get_offset_of_m_movementInputValue_15() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___m_movementInputValue_15)); }
	inline float get_m_movementInputValue_15() const { return ___m_movementInputValue_15; }
	inline float* get_address_of_m_movementInputValue_15() { return &___m_movementInputValue_15; }
	inline void set_m_movementInputValue_15(float value)
	{
		___m_movementInputValue_15 = value;
	}

	inline static int32_t get_offset_of_m_turnInputValue_16() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___m_turnInputValue_16)); }
	inline float get_m_turnInputValue_16() const { return ___m_turnInputValue_16; }
	inline float* get_address_of_m_turnInputValue_16() { return &___m_turnInputValue_16; }
	inline void set_m_turnInputValue_16(float value)
	{
		___m_turnInputValue_16 = value;
	}

	inline static int32_t get_offset_of_closeTarget_17() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___closeTarget_17)); }
	inline GameObject_t1113636619 * get_closeTarget_17() const { return ___closeTarget_17; }
	inline GameObject_t1113636619 ** get_address_of_closeTarget_17() { return &___closeTarget_17; }
	inline void set_closeTarget_17(GameObject_t1113636619 * value)
	{
		___closeTarget_17 = value;
		Il2CppCodeGenWriteBarrier((&___closeTarget_17), value);
	}

	inline static int32_t get_offset_of_shootTimeCount_18() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___shootTimeCount_18)); }
	inline float get_shootTimeCount_18() const { return ___shootTimeCount_18; }
	inline float* get_address_of_shootTimeCount_18() { return &___shootTimeCount_18; }
	inline void set_shootTimeCount_18(float value)
	{
		___shootTimeCount_18 = value;
	}

	inline static int32_t get_offset_of_shooting_19() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___shooting_19)); }
	inline bool get_shooting_19() const { return ___shooting_19; }
	inline bool* get_address_of_shooting_19() { return &___shooting_19; }
	inline void set_shooting_19(bool value)
	{
		___shooting_19 = value;
	}

	inline static int32_t get_offset_of_aroundMeList_20() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___aroundMeList_20)); }
	inline List_1_t2585711361 * get_aroundMeList_20() const { return ___aroundMeList_20; }
	inline List_1_t2585711361 ** get_address_of_aroundMeList_20() { return &___aroundMeList_20; }
	inline void set_aroundMeList_20(List_1_t2585711361 * value)
	{
		___aroundMeList_20 = value;
		Il2CppCodeGenWriteBarrier((&___aroundMeList_20), value);
	}

	inline static int32_t get_offset_of_lineRenderer_21() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lineRenderer_21)); }
	inline LineRenderer_t3154350270 * get_lineRenderer_21() const { return ___lineRenderer_21; }
	inline LineRenderer_t3154350270 ** get_address_of_lineRenderer_21() { return &___lineRenderer_21; }
	inline void set_lineRenderer_21(LineRenderer_t3154350270 * value)
	{
		___lineRenderer_21 = value;
		Il2CppCodeGenWriteBarrier((&___lineRenderer_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T2064355688_H
#ifndef SINGLETON_1_T677613222_H
#define SINGLETON_1_T677613222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<BulletSpawner>
struct  Singleton_1_t677613222  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t677613222_StaticFields
{
public:
	// T Singleton`1::_instance
	BulletSpawner_t3795733773 * ____instance_2;
	// System.Object Singleton`1::_lock
	RuntimeObject * ____lock_3;
	// System.Boolean Singleton`1::applicationIsQuitting
	bool ___applicationIsQuitting_4;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t677613222_StaticFields, ____instance_2)); }
	inline BulletSpawner_t3795733773 * get__instance_2() const { return ____instance_2; }
	inline BulletSpawner_t3795733773 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(BulletSpawner_t3795733773 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier((&____instance_2), value);
	}

	inline static int32_t get_offset_of__lock_3() { return static_cast<int32_t>(offsetof(Singleton_1_t677613222_StaticFields, ____lock_3)); }
	inline RuntimeObject * get__lock_3() const { return ____lock_3; }
	inline RuntimeObject ** get_address_of__lock_3() { return &____lock_3; }
	inline void set__lock_3(RuntimeObject * value)
	{
		____lock_3 = value;
		Il2CppCodeGenWriteBarrier((&____lock_3), value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_4() { return static_cast<int32_t>(offsetof(Singleton_1_t677613222_StaticFields, ___applicationIsQuitting_4)); }
	inline bool get_applicationIsQuitting_4() const { return ___applicationIsQuitting_4; }
	inline bool* get_address_of_applicationIsQuitting_4() { return &___applicationIsQuitting_4; }
	inline void set_applicationIsQuitting_4(bool value)
	{
		___applicationIsQuitting_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T677613222_H
#ifndef JOYSTICK_T9498292_H
#define JOYSTICK_T9498292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Joystick
struct  Joystick_t9498292  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Joystick::handleLimit
	float ___handleLimit_2;
	// JoystickMode Joystick::joystickMode
	int32_t ___joystickMode_3;
	// UnityEngine.Vector2 Joystick::inputVector
	Vector2_t2156229523  ___inputVector_4;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t3704657025 * ___background_5;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t3704657025 * ___handle_6;

public:
	inline static int32_t get_offset_of_handleLimit_2() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___handleLimit_2)); }
	inline float get_handleLimit_2() const { return ___handleLimit_2; }
	inline float* get_address_of_handleLimit_2() { return &___handleLimit_2; }
	inline void set_handleLimit_2(float value)
	{
		___handleLimit_2 = value;
	}

	inline static int32_t get_offset_of_joystickMode_3() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___joystickMode_3)); }
	inline int32_t get_joystickMode_3() const { return ___joystickMode_3; }
	inline int32_t* get_address_of_joystickMode_3() { return &___joystickMode_3; }
	inline void set_joystickMode_3(int32_t value)
	{
		___joystickMode_3 = value;
	}

	inline static int32_t get_offset_of_inputVector_4() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___inputVector_4)); }
	inline Vector2_t2156229523  get_inputVector_4() const { return ___inputVector_4; }
	inline Vector2_t2156229523 * get_address_of_inputVector_4() { return &___inputVector_4; }
	inline void set_inputVector_4(Vector2_t2156229523  value)
	{
		___inputVector_4 = value;
	}

	inline static int32_t get_offset_of_background_5() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___background_5)); }
	inline RectTransform_t3704657025 * get_background_5() const { return ___background_5; }
	inline RectTransform_t3704657025 ** get_address_of_background_5() { return &___background_5; }
	inline void set_background_5(RectTransform_t3704657025 * value)
	{
		___background_5 = value;
		Il2CppCodeGenWriteBarrier((&___background_5), value);
	}

	inline static int32_t get_offset_of_handle_6() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___handle_6)); }
	inline RectTransform_t3704657025 * get_handle_6() const { return ___handle_6; }
	inline RectTransform_t3704657025 ** get_address_of_handle_6() { return &___handle_6; }
	inline void set_handle_6(RectTransform_t3704657025 * value)
	{
		___handle_6 = value;
		Il2CppCodeGenWriteBarrier((&___handle_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICK_T9498292_H
#ifndef BULLETSPAWNER_T3795733773_H
#define BULLETSPAWNER_T3795733773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletSpawner
struct  BulletSpawner_t3795733773  : public Singleton_1_t677613222
{
public:
	// System.Single BulletSpawner::speed
	float ___speed_5;
	// System.Single BulletSpawner::life
	float ___life_6;

public:
	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(BulletSpawner_t3795733773, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_life_6() { return static_cast<int32_t>(offsetof(BulletSpawner_t3795733773, ___life_6)); }
	inline float get_life_6() const { return ___life_6; }
	inline float* get_address_of_life_6() { return &___life_6; }
	inline void set_life_6(float value)
	{
		___life_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BULLETSPAWNER_T3795733773_H
#ifndef VARIABLEJOYSTICK_T2643911586_H
#define VARIABLEJOYSTICK_T2643911586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VariableJoystick
struct  VariableJoystick_t2643911586  : public Joystick_t9498292
{
public:
	// System.Boolean VariableJoystick::isFixed
	bool ___isFixed_7;
	// UnityEngine.Vector2 VariableJoystick::fixedScreenPosition
	Vector2_t2156229523  ___fixedScreenPosition_8;
	// UnityEngine.Vector2 VariableJoystick::joystickCenter
	Vector2_t2156229523  ___joystickCenter_9;

public:
	inline static int32_t get_offset_of_isFixed_7() { return static_cast<int32_t>(offsetof(VariableJoystick_t2643911586, ___isFixed_7)); }
	inline bool get_isFixed_7() const { return ___isFixed_7; }
	inline bool* get_address_of_isFixed_7() { return &___isFixed_7; }
	inline void set_isFixed_7(bool value)
	{
		___isFixed_7 = value;
	}

	inline static int32_t get_offset_of_fixedScreenPosition_8() { return static_cast<int32_t>(offsetof(VariableJoystick_t2643911586, ___fixedScreenPosition_8)); }
	inline Vector2_t2156229523  get_fixedScreenPosition_8() const { return ___fixedScreenPosition_8; }
	inline Vector2_t2156229523 * get_address_of_fixedScreenPosition_8() { return &___fixedScreenPosition_8; }
	inline void set_fixedScreenPosition_8(Vector2_t2156229523  value)
	{
		___fixedScreenPosition_8 = value;
	}

	inline static int32_t get_offset_of_joystickCenter_9() { return static_cast<int32_t>(offsetof(VariableJoystick_t2643911586, ___joystickCenter_9)); }
	inline Vector2_t2156229523  get_joystickCenter_9() const { return ___joystickCenter_9; }
	inline Vector2_t2156229523 * get_address_of_joystickCenter_9() { return &___joystickCenter_9; }
	inline void set_joystickCenter_9(Vector2_t2156229523  value)
	{
		___joystickCenter_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIABLEJOYSTICK_T2643911586_H
#ifndef FLOATINGJOYSTICK_T3402721920_H
#define FLOATINGJOYSTICK_T3402721920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FloatingJoystick
struct  FloatingJoystick_t3402721920  : public Joystick_t9498292
{
public:
	// UnityEngine.Vector2 FloatingJoystick::joystickCenter
	Vector2_t2156229523  ___joystickCenter_7;

public:
	inline static int32_t get_offset_of_joystickCenter_7() { return static_cast<int32_t>(offsetof(FloatingJoystick_t3402721920, ___joystickCenter_7)); }
	inline Vector2_t2156229523  get_joystickCenter_7() const { return ___joystickCenter_7; }
	inline Vector2_t2156229523 * get_address_of_joystickCenter_7() { return &___joystickCenter_7; }
	inline void set_joystickCenter_7(Vector2_t2156229523  value)
	{
		___joystickCenter_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOATINGJOYSTICK_T3402721920_H
#ifndef FIXEDJOYSTICK_T2618381211_H
#define FIXEDJOYSTICK_T2618381211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FixedJoystick
struct  FixedJoystick_t2618381211  : public Joystick_t9498292
{
public:
	// UnityEngine.Vector2 FixedJoystick::joystickPosition
	Vector2_t2156229523  ___joystickPosition_7;
	// UnityEngine.Camera FixedJoystick::cam
	Camera_t4157153871 * ___cam_8;

public:
	inline static int32_t get_offset_of_joystickPosition_7() { return static_cast<int32_t>(offsetof(FixedJoystick_t2618381211, ___joystickPosition_7)); }
	inline Vector2_t2156229523  get_joystickPosition_7() const { return ___joystickPosition_7; }
	inline Vector2_t2156229523 * get_address_of_joystickPosition_7() { return &___joystickPosition_7; }
	inline void set_joystickPosition_7(Vector2_t2156229523  value)
	{
		___joystickPosition_7 = value;
	}

	inline static int32_t get_offset_of_cam_8() { return static_cast<int32_t>(offsetof(FixedJoystick_t2618381211, ___cam_8)); }
	inline Camera_t4157153871 * get_cam_8() const { return ___cam_8; }
	inline Camera_t4157153871 ** get_address_of_cam_8() { return &___cam_8; }
	inline void set_cam_8(Camera_t4157153871 * value)
	{
		___cam_8 = value;
		Il2CppCodeGenWriteBarrier((&___cam_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDJOYSTICK_T2618381211_H
#ifndef OBJECTPOOLER_T521731848_H
#define OBJECTPOOLER_T521731848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPooler
struct  ObjectPooler_t521731848  : public Singleton_1_t1698578593
{
public:
	// System.Collections.Generic.List`1<ObjectPooler/Pool> ObjectPooler::pools
	List_1_t1270283955 * ___pools_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>> ObjectPooler::poolDictionary
	Dictionary_2_t745152412 * ___poolDictionary_6;

public:
	inline static int32_t get_offset_of_pools_5() { return static_cast<int32_t>(offsetof(ObjectPooler_t521731848, ___pools_5)); }
	inline List_1_t1270283955 * get_pools_5() const { return ___pools_5; }
	inline List_1_t1270283955 ** get_address_of_pools_5() { return &___pools_5; }
	inline void set_pools_5(List_1_t1270283955 * value)
	{
		___pools_5 = value;
		Il2CppCodeGenWriteBarrier((&___pools_5), value);
	}

	inline static int32_t get_offset_of_poolDictionary_6() { return static_cast<int32_t>(offsetof(ObjectPooler_t521731848, ___poolDictionary_6)); }
	inline Dictionary_2_t745152412 * get_poolDictionary_6() const { return ___poolDictionary_6; }
	inline Dictionary_2_t745152412 ** get_address_of_poolDictionary_6() { return &___poolDictionary_6; }
	inline void set_poolDictionary_6(Dictionary_2_t745152412 * value)
	{
		___poolDictionary_6 = value;
		Il2CppCodeGenWriteBarrier((&___poolDictionary_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOLER_T521731848_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2000 = { sizeof (Joystick_t9498292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2000[5] = 
{
	Joystick_t9498292::get_offset_of_handleLimit_2(),
	Joystick_t9498292::get_offset_of_joystickMode_3(),
	Joystick_t9498292::get_offset_of_inputVector_4(),
	Joystick_t9498292::get_offset_of_background_5(),
	Joystick_t9498292::get_offset_of_handle_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2001 = { sizeof (JoystickMode_t3732604888)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2001[4] = 
{
	JoystickMode_t3732604888::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2002 = { sizeof (FixedJoystick_t2618381211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2002[2] = 
{
	FixedJoystick_t2618381211::get_offset_of_joystickPosition_7(),
	FixedJoystick_t2618381211::get_offset_of_cam_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2003 = { sizeof (FloatingJoystick_t3402721920), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2003[1] = 
{
	FloatingJoystick_t3402721920::get_offset_of_joystickCenter_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2004 = { sizeof (VariableJoystick_t2643911586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2004[3] = 
{
	VariableJoystick_t2643911586::get_offset_of_isFixed_7(),
	VariableJoystick_t2643911586::get_offset_of_fixedScreenPosition_8(),
	VariableJoystick_t2643911586::get_offset_of_joystickCenter_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2005 = { sizeof (Bullet_t1042140031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2005[1] = 
{
	Bullet_t1042140031::get_offset_of_rigidbody_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2006 = { sizeof (BulletSpawner_t3795733773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2006[2] = 
{
	BulletSpawner_t3795733773::get_offset_of_speed_5(),
	BulletSpawner_t3795733773::get_offset_of_life_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2007 = { sizeof (CameraController_t3346819214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2007[8] = 
{
	CameraController_t3346819214::get_offset_of_m_dampTime_2(),
	CameraController_t3346819214::get_offset_of_m_screenEdgeBuffer_3(),
	CameraController_t3346819214::get_offset_of_m_minSize_4(),
	CameraController_t3346819214::get_offset_of_m_targets_5(),
	CameraController_t3346819214::get_offset_of_m_moveVelocity_6(),
	CameraController_t3346819214::get_offset_of_m_desiredPosition_7(),
	CameraController_t3346819214::get_offset_of_m_zoomSpeed_8(),
	CameraController_t3346819214::get_offset_of_m_Camera_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2008 = { sizeof (Character_t2781798988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2008[2] = 
{
	Character_t2781798988::get_offset_of_hp_2(),
	Character_t2781798988::get_offset_of_enemyController_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2009 = { sizeof (DamageBall_t2634014875), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2009[5] = 
{
	DamageBall_t2634014875::get_offset_of_isDisableOnCollision_2(),
	DamageBall_t2634014875::get_offset_of_isDestroyOnCollision_3(),
	DamageBall_t2634014875::get_offset_of_damageValue_4(),
	DamageBall_t2634014875::get_offset_of_colliderCom_5(),
	DamageBall_t2634014875::get_offset_of_onCollisionEnter_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2010 = { sizeof (OnCollision_t3747687736), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2011 = { sizeof (EnemyController_t2191660454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2011[5] = 
{
	EnemyController_t2191660454::get_offset_of_lookAtTarget_2(),
	EnemyController_t2191660454::get_offset_of_agent_3(),
	EnemyController_t2191660454::get_offset_of_target_4(),
	EnemyController_t2191660454::get_offset_of_animator_5(),
	EnemyController_t2191660454::get_offset_of_collider_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2012 = { sizeof (EnemySpawner_t2006493939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2012[6] = 
{
	EnemySpawner_t2006493939::get_offset_of_maxEnemy_2(),
	EnemySpawner_t2006493939::get_offset_of_spawnTime_3(),
	EnemySpawner_t2006493939::get_offset_of_spawnPosList_4(),
	EnemySpawner_t2006493939::get_offset_of_timeCount_5(),
	EnemySpawner_t2006493939::get_offset_of_enemyCount_6(),
	EnemySpawner_t2006493939::get_offset_of_enemyIsFull_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2013 = { sizeof (ObjectPooler_t521731848), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2013[2] = 
{
	ObjectPooler_t521731848::get_offset_of_pools_5(),
	ObjectPooler_t521731848::get_offset_of_poolDictionary_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2014 = { sizeof (Pool_t4093176509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2014[3] = 
{
	Pool_t4093176509::get_offset_of_tag_0(),
	Pool_t4093176509::get_offset_of_prefab_1(),
	Pool_t4093176509::get_offset_of_size_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2015 = { sizeof (PlayerController_t2064355688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2015[20] = 
{
	PlayerController_t2064355688::get_offset_of_m_Speed_2(),
	PlayerController_t2064355688::get_offset_of_m_turnSpeed_3(),
	PlayerController_t2064355688::get_offset_of_rotateSpeed_4(),
	PlayerController_t2064355688::get_offset_of_transitionDuration_5(),
	PlayerController_t2064355688::get_offset_of_bulletBornPos_6(),
	PlayerController_t2064355688::get_offset_of_moveSpeed_7(),
	PlayerController_t2064355688::get_offset_of_shootSpeed_8(),
	PlayerController_t2064355688::get_offset_of_moveJoystick_9(),
	PlayerController_t2064355688::get_offset_of_rotateJoystick_10(),
	PlayerController_t2064355688::get_offset_of_detectionTrigger_11(),
	PlayerController_t2064355688::get_offset_of_triggerSize_12(),
	PlayerController_t2064355688::get_offset_of_drawLine_13(),
	PlayerController_t2064355688::get_offset_of_m_animator_14(),
	PlayerController_t2064355688::get_offset_of_m_movementInputValue_15(),
	PlayerController_t2064355688::get_offset_of_m_turnInputValue_16(),
	PlayerController_t2064355688::get_offset_of_closeTarget_17(),
	PlayerController_t2064355688::get_offset_of_shootTimeCount_18(),
	PlayerController_t2064355688::get_offset_of_shooting_19(),
	PlayerController_t2064355688::get_offset_of_aroundMeList_20(),
	PlayerController_t2064355688::get_offset_of_lineRenderer_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2016 = { sizeof (AnimationState_t3973623788), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2017 = { sizeof (U3COnTriggerExitU3Ec__AnonStorey0_t2021806301), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2017[1] = 
{
	U3COnTriggerExitU3Ec__AnonStorey0_t2021806301::get_offset_of_other_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2018 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2018[3] = 
{
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
