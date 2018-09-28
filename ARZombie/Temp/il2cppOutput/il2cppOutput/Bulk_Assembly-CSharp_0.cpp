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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// Bullet
struct Bullet_t1042140031;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// BulletSpawner
struct BulletSpawner_t3795733773;
// Singleton`1<BulletSpawner>
struct Singleton_1_t677613222;
// Singleton`1<System.Object>
struct Singleton_1_t4256952909;
// ObjectPooler
struct ObjectPooler_t521731848;
// CameraController
struct CameraController_t3346819214;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// Character
struct Character_t2781798988;
// EnemyController
struct EnemyController_t2191660454;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t1276799816;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Animator
struct Animator_t434523843;
// DamageBall
struct DamageBall_t2634014875;
// DamageBall/OnCollision
struct OnCollision_t3747687736;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// EnemySpawner
struct EnemySpawner_t2006493939;
// FixedJoystick
struct FixedJoystick_t2618381211;
// Joystick
struct Joystick_t9498292;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// FloatingJoystick
struct FloatingJoystick_t3402721920;
// System.Collections.Generic.List`1<ObjectPooler/Pool>
struct List_1_t1270283955;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct Dictionary_2_t745152412;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// Singleton`1<ObjectPooler>
struct Singleton_1_t1698578593;
// ObjectPooler/Pool
struct Pool_t4093176509;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t959896113;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// Player2DExample
struct Player2DExample_t3660207970;
// Player3DExample
struct Player3DExample_t3538731783;
// PlayerController
struct PlayerController_t2064355688;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// PlayerController/<OnTriggerExit>c__AnonStorey0
struct U3COnTriggerExitU3Ec__AnonStorey0_t2021806301;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t1938930743;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// UnityEngine.SphereCollider
struct SphereCollider_t2077223608;
// VariableJoystick
struct VariableJoystick_t2643911586;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>[]
struct Queue_1U5BU5D_t400140780;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>,System.Collections.DictionaryEntry>
struct Transform_1_t3545519792;
// ObjectPooler/Pool[]
struct PoolU5BU5D_t588147120;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// System.Void
struct Void_t1185182177;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;

extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var;
extern const uint32_t Bullet_Awake_m2415655451_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral431746817;
extern const uint32_t Bullet_Fire_m3379690710_MetadataUsageId;
extern const uint32_t Bullet_Dead_m3945184442_MetadataUsageId;
extern RuntimeClass* Singleton_1_t677613222_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Singleton_1__ctor_m1404425622_RuntimeMethod_var;
extern const uint32_t BulletSpawner__ctor_m860333770_MetadataUsageId;
extern RuntimeClass* Singleton_1_t1698578593_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Singleton_1_get_Instance_m3375077493_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisBullet_t1042140031_m448032725_RuntimeMethod_var;
extern String_t* _stringLiteral37315637;
extern const uint32_t BulletSpawner_Spawn_m1096849015_MetadataUsageId;
extern RuntimeClass* List_1_t777473367_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2885667311_RuntimeMethod_var;
extern const uint32_t CameraController__ctor_m3292347237_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentInChildren_TisCamera_t4157153871_m3161829014_RuntimeMethod_var;
extern const uint32_t CameraController_Awake_m4266067818_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m4073477735_RuntimeMethod_var;
extern String_t* _stringLiteral2261822918;
extern String_t* _stringLiteral3301720448;
extern const uint32_t CameraController_FindAllPlayers_m2973843570_MetadataUsageId;
extern const uint32_t CameraController_Move_m887481956_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m3022113929_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3787308655_RuntimeMethod_var;
extern const uint32_t CameraController_FindAveragePosition_m1474105335_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t CameraController_Zoom_m1444959450_MetadataUsageId;
extern const uint32_t CameraController_FindRequiredSize_m1940472616_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisEnemyController_t2191660454_m137582258_RuntimeMethod_var;
extern const uint32_t Character_Start_m1862467533_MetadataUsageId;
extern String_t* _stringLiteral2288167791;
extern String_t* _stringLiteral3895296655;
extern const uint32_t Character_OnDead_m3183327487_MetadataUsageId;
extern String_t* _stringLiteral1212946936;
extern const uint32_t Character_OnHurting_m3257862547_MetadataUsageId;
extern const uint32_t Character_PlayAnimation_m2769669040_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisCollider_t1773347010_m4226749020_RuntimeMethod_var;
extern const uint32_t DamageBall_Start_m558040341_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisCharacter_t2781798988_m808073109_RuntimeMethod_var;
extern const uint32_t DamageBall_OnTriggerEnter_m4195214938_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern const uint32_t EnemyController_Awake_m1672627062_MetadataUsageId;
extern const uint32_t EnemyController_Start_m1137308130_MetadataUsageId;
extern const uint32_t EnemyController_Update_m2232054175_MetadataUsageId;
extern const uint32_t EnemySpawner__ctor_m1783562082_MetadataUsageId;
extern const uint32_t EnemySpawner_InitSpawnPosition_m800800197_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral760905195;
extern const uint32_t EnemySpawner_Spawn_m2672296491_MetadataUsageId;
extern const uint32_t EnemySpawner_GetSpawnPosition_m1510583561_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Camera_t4157153871_il2cpp_TypeInfo_var;
extern const uint32_t FixedJoystick__ctor_m3165509026_MetadataUsageId;
extern RuntimeClass* RectTransformUtility_t1743242446_il2cpp_TypeInfo_var;
extern const uint32_t FixedJoystick_Start_m649713002_MetadataUsageId;
extern const uint32_t FixedJoystick_OnDrag_m1042755941_MetadataUsageId;
extern const uint32_t FixedJoystick_OnPointerUp_m763078753_MetadataUsageId;
extern const uint32_t FloatingJoystick__ctor_m612783692_MetadataUsageId;
extern const uint32_t FloatingJoystick_OnDrag_m1849813291_MetadataUsageId;
extern const uint32_t FloatingJoystick_OnPointerDown_m3753834403_MetadataUsageId;
extern const uint32_t FloatingJoystick_OnPointerUp_m2581807680_MetadataUsageId;
extern const uint32_t Joystick__ctor_m1272315817_MetadataUsageId;
extern RuntimeClass* List_1_t1270283955_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t745152412_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2344233155_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3078442726_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1__ctor_m1861290560_RuntimeMethod_var;
extern const uint32_t ObjectPooler__ctor_m986760805_MetadataUsageId;
extern RuntimeClass* Queue_1_t959896113_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m781241078_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3425812555_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m3618464516_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m2666802599_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1312697002_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3332874318_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2837525318_RuntimeMethod_var;
extern const uint32_t ObjectPooler_Start_m793295583_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3182273321_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3259100016_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m526815917_RuntimeMethod_var;
extern String_t* _stringLiteral265425869;
extern String_t* _stringLiteral3917197541;
extern const uint32_t ObjectPooler_SpawnFormPool_m3902427701_MetadataUsageId;
extern const uint32_t Player2DExample_Update_m1065258874_MetadataUsageId;
extern const uint32_t Player3DExample_Update_m584191189_MetadataUsageId;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const uint32_t PlayerController__ctor_m1333951952_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisLineRenderer_t3154350270_m1658315391_RuntimeMethod_var;
extern const uint32_t PlayerController_Start_m1746698410_MetadataUsageId;
extern const RuntimeMethod* List_1_Contains_m4222374550_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern String_t* _stringLiteral3452654525;
extern const uint32_t PlayerController_OnTriggerEnter_m676506753_MetadataUsageId;
extern RuntimeClass* U3COnTriggerExitU3Ec__AnonStorey0_t2021806301_il2cpp_TypeInfo_var;
extern RuntimeClass* Predicate_1_t1938930743_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3COnTriggerExitU3Ec__AnonStorey0_U3CU3Em__0_m3352742767_RuntimeMethod_var;
extern const RuntimeMethod* Predicate_1__ctor_m2391302690_RuntimeMethod_var;
extern const RuntimeMethod* List_1_FindIndex_m1168129328_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m3509344782_RuntimeMethod_var;
extern const uint32_t PlayerController_OnTriggerExit_m2337431891_MetadataUsageId;
extern RuntimeClass* SphereCollider_t2077223608_il2cpp_TypeInfo_var;
extern const uint32_t PlayerController_InitDetectionTrigger_m442008980_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m2812834599_RuntimeMethod_var;
extern const uint32_t PlayerController_RotateObjectBaseOnTarget_m2945554379_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m3743125852_RuntimeMethod_var;
extern const uint32_t PlayerController_GetMostClosedTarget_m172570197_MetadataUsageId;
extern const uint32_t PlayerController_MoveingAndRotation_m435555172_MetadataUsageId;
extern const uint32_t PlayerController_DrawLine_m506901979_MetadataUsageId;
extern const RuntimeMethod* Singleton_1_get_Instance_m229738282_RuntimeMethod_var;
extern const uint32_t PlayerController_Shoot_m3174924244_MetadataUsageId;
extern const uint32_t U3COnTriggerExitU3Ec__AnonStorey0_U3CU3Em__0_m3352742767_MetadataUsageId;
extern String_t* _stringLiteral1628612613;
extern const uint32_t AnimationState_get_IDLE_m2992949454_MetadataUsageId;
extern String_t* _stringLiteral4073296194;
extern const uint32_t AnimationState_get_RUN_m936729998_MetadataUsageId;
extern String_t* _stringLiteral1167841337;
extern const uint32_t AnimationState_get_BACK_m2195162337_MetadataUsageId;
extern String_t* _stringLiteral1198113798;
extern const uint32_t AnimationState_get_SHOOT_m1083791399_MetadataUsageId;
extern String_t* _stringLiteral3141791012;
extern const uint32_t AnimationState_get_DEPTH_m3494441815_MetadataUsageId;
extern const uint32_t VariableJoystick__ctor_m1597116632_MetadataUsageId;
extern const uint32_t VariableJoystick_OnDrag_m3080315221_MetadataUsageId;
extern const uint32_t VariableJoystick_OnPointerDown_m4235218688_MetadataUsageId;
extern const uint32_t VariableJoystick_OnPointerUp_m3792644295_MetadataUsageId;
extern const uint32_t VariableJoystick_OnFixed_m4141959043_MetadataUsageId;
extern const uint32_t VariableJoystick_OnFloat_m165815926_MetadataUsageId;

struct GameObjectU5BU5D_t3328599146;


#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
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
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef QUEUE_1_T959896113_H
#define QUEUE_1_T959896113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct  Queue_1_t959896113  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_t3328599146* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t959896113, ____array_0)); }
	inline GameObjectU5BU5D_t3328599146* get__array_0() const { return ____array_0; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(GameObjectU5BU5D_t3328599146* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t959896113, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t959896113, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t959896113, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t959896113, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T959896113_H
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
#ifndef DICTIONARY_2_T745152412_H
#define DICTIONARY_2_T745152412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct  Dictionary_2_t745152412  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Queue_1U5BU5D_t400140780* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___valueSlots_7)); }
	inline Queue_1U5BU5D_t400140780* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Queue_1U5BU5D_t400140780** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Queue_1U5BU5D_t400140780* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t745152412_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3545519792 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3545519792 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3545519792 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3545519792 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T745152412_H
#ifndef LIST_1_T1270283955_H
#define LIST_1_T1270283955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ObjectPooler/Pool>
struct  List_1_t1270283955  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PoolU5BU5D_t588147120* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1270283955, ____items_1)); }
	inline PoolU5BU5D_t588147120* get__items_1() const { return ____items_1; }
	inline PoolU5BU5D_t588147120** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PoolU5BU5D_t588147120* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1270283955, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1270283955, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1270283955_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PoolU5BU5D_t588147120* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1270283955_StaticFields, ___EmptyArray_4)); }
	inline PoolU5BU5D_t588147120* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PoolU5BU5D_t588147120** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PoolU5BU5D_t588147120* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1270283955_H
#ifndef LIST_1_T777473367_H
#define LIST_1_T777473367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t777473367  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t807237628* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____items_1)); }
	inline TransformU5BU5D_t807237628* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t807237628** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t807237628* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t777473367_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TransformU5BU5D_t807237628* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t777473367_StaticFields, ___EmptyArray_4)); }
	inline TransformU5BU5D_t807237628* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TransformU5BU5D_t807237628** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TransformU5BU5D_t807237628* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777473367_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
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
#ifndef ANIMATORSTATEINFO_T509032636_H
#define ANIMATORSTATEINFO_T509032636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t509032636 
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
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T509032636_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T3159527832_H
#define ENUMERATOR_T3159527832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<ObjectPooler/Pool>
struct  Enumerator_t3159527832 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1270283955 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Pool_t4093176509 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3159527832, ___l_0)); }
	inline List_1_t1270283955 * get_l_0() const { return ___l_0; }
	inline List_1_t1270283955 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1270283955 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3159527832, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3159527832, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3159527832, ___current_3)); }
	inline Pool_t4093176509 * get_current_3() const { return ___current_3; }
	inline Pool_t4093176509 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Pool_t4093176509 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3159527832_H
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
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___1)); }
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
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef SPACE_T654135784_H
#define SPACE_T654135784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t654135784 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t654135784, ___value___1)); }
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
#endif // SPACE_T654135784_H
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
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef PREDICATE_1_T1938930743_H
#define PREDICATE_1_T1938930743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.GameObject>
struct  Predicate_1_t1938930743  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T1938930743_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
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
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef SPHERECOLLIDER_T2077223608_H
#define SPHERECOLLIDER_T2077223608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_t2077223608  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_T2077223608_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
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
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef NAVMESHAGENT_T1276799816_H
#define NAVMESHAGENT_T1276799816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_t1276799816  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHAGENT_T1276799816_H
#ifndef LINERENDERER_T3154350270_H
#define LINERENDERER_T3154350270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LineRenderer
struct  LineRenderer_t3154350270  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINERENDERER_T3154350270_H
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
#ifndef PLAYER3DEXAMPLE_T3538731783_H
#define PLAYER3DEXAMPLE_T3538731783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player3DExample
struct  Player3DExample_t3538731783  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Player3DExample::moveSpeed
	float ___moveSpeed_2;
	// Joystick Player3DExample::joystick
	Joystick_t9498292 * ___joystick_3;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(Player3DExample_t3538731783, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_joystick_3() { return static_cast<int32_t>(offsetof(Player3DExample_t3538731783, ___joystick_3)); }
	inline Joystick_t9498292 * get_joystick_3() const { return ___joystick_3; }
	inline Joystick_t9498292 ** get_address_of_joystick_3() { return &___joystick_3; }
	inline void set_joystick_3(Joystick_t9498292 * value)
	{
		___joystick_3 = value;
		Il2CppCodeGenWriteBarrier((&___joystick_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER3DEXAMPLE_T3538731783_H
#ifndef PLAYER2DEXAMPLE_T3660207970_H
#define PLAYER2DEXAMPLE_T3660207970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player2DExample
struct  Player2DExample_t3660207970  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Player2DExample::moveSpeed
	float ___moveSpeed_2;
	// Joystick Player2DExample::joystick
	Joystick_t9498292 * ___joystick_3;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(Player2DExample_t3660207970, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_joystick_3() { return static_cast<int32_t>(offsetof(Player2DExample_t3660207970, ___joystick_3)); }
	inline Joystick_t9498292 * get_joystick_3() const { return ___joystick_3; }
	inline Joystick_t9498292 ** get_address_of_joystick_3() { return &___joystick_3; }
	inline void set_joystick_3(Joystick_t9498292 * value)
	{
		___joystick_3 = value;
		Il2CppCodeGenWriteBarrier((&___joystick_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER2DEXAMPLE_T3660207970_H
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void Singleton`1<System.Object>::.ctor()
extern "C"  void Singleton_1__ctor_m2322677222_gshared (Singleton_1_t4256952909 * __this, const RuntimeMethod* method);
// T Singleton`1<System.Object>::get_Instance()
extern "C"  RuntimeObject * Singleton_1_get_Instance_m549117796_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C"  void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C"  void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C"  RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m327447107_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<!0>)
extern "C"  int32_t List_1_FindIndex_m3468384988_gshared (List_1_t257213610 * __this, Predicate_1_t3905400288 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, method) ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_velocity_m2899403247 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::IsInvoking(System.String)
extern "C"  bool MonoBehaviour_IsInvoking_m1028838749 (MonoBehaviour_t3962482529 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C"  void MonoBehaviour_CancelInvoke_m2180046661 (MonoBehaviour_t3962482529 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C"  void MonoBehaviour_Invoke_m4227543964 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Singleton`1<BulletSpawner>::.ctor()
#define Singleton_1__ctor_m1404425622(__this, method) ((  void (*) (Singleton_1_t677613222 *, const RuntimeMethod*))Singleton_1__ctor_m2322677222_gshared)(__this, method)
// T Singleton`1<ObjectPooler>::get_Instance()
#define Singleton_1_get_Instance_m3375077493(__this /* static, unused */, method) ((  ObjectPooler_t521731848 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Singleton_1_get_Instance_m549117796_gshared)(__this /* static, unused */, method)
// UnityEngine.GameObject ObjectPooler::SpawnFormPool(System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t1113636619 * ObjectPooler_SpawnFormPool_m3902427701 (ObjectPooler_t521731848 * __this, String_t* ___tag0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Bullet>()
#define GameObject_GetComponent_TisBullet_t1042140031_m448032725(__this, method) ((  Bullet_t1042140031 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void Bullet::Fire(System.Single,System.Single)
extern "C"  void Bullet_Fire_m3379690710 (Bullet_t1042140031 * __this, float ___speed0, float ___life1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
#define List_1__ctor_m2885667311(__this, method) ((  void (*) (List_1_t777473367 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
#define Component_GetComponentInChildren_TisCamera_t4157153871_m3161829014(__this, method) ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Collections.Generic.List`1<UnityEngine.Transform> CameraController::FindAllPlayers()
extern "C"  List_1_t777473367 * CameraController_FindAllPlayers_m2973843570 (CameraController_t3346819214 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController::Move()
extern "C"  void CameraController_Move_m887481956 (CameraController_t3346819214 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController::Zoom()
extern "C"  void CameraController_Zoom_m1444959450 (CameraController_t3346819214 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C"  GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C"  GameObjectU5BU5D_t3328599146* GameObject_FindGameObjectsWithTag_m2585173894 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0)
#define List_1_Add_m4073477735(__this, p0, method) ((  void (*) (List_1_t777473367 *, Transform_t3600365921 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void CameraController::FindAveragePosition()
extern "C"  void CameraController_FindAveragePosition_m1474105335 (CameraController_t3346819214 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
extern "C"  Vector3_t3722313464  Vector3_SmoothDamp_m1123559802 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, Vector3_t3722313464 * p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
#define List_1_get_Item_m3022113929(__this, p0, method) ((  Transform_t3600365921 * (*) (List_1_t777473367 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C"  bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
#define List_1_get_Count_m3787308655(__this, method) ((  int32_t (*) (List_1_t777473367 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CameraController::FindRequiredSize()
extern "C"  float CameraController_FindRequiredSize_m1940472616 (CameraController_t3346819214 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
extern "C"  float Mathf_SmoothDamp_m3171073017 (RuntimeObject * __this /* static, unused */, float p0, float p1, float* p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C"  void Camera_set_orthographicSize_m76971700 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_InverseTransformPoint_m1343916000 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_aspect()
extern "C"  float Camera_get_aspect_m862507514 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<EnemyController>()
#define Component_GetComponent_TisEnemyController_t2191660454_m137582258(__this, method) ((  EnemyController_t2191660454 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void Character::OnHurting()
extern "C"  void Character_OnHurting_m3257862547 (Character_t2781798988 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Character::OnDead()
extern "C"  void Character_OnDead_m3183327487 (Character_t2781798988 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Character::PlayAnimation(System.String,System.Boolean)
extern "C"  void Character_PlayAnimation_m2769669040 (Character_t2781798988 * __this, String_t* ___aniName0, bool ___supportRepeat1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AI.NavMeshAgent EnemyController::get_Agent()
extern "C"  NavMeshAgent_t1276799816 * EnemyController_get_Agent_m700722328 (EnemyController_t2191660454 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
extern "C"  void NavMeshAgent_set_isStopped_m1722711423 (NavMeshAgent_t1276799816 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider EnemyController::get_ColliderCom()
extern "C"  Collider_t1773347010 * EnemyController_get_ColliderCom_m2965693981 (EnemyController_t2191660454 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator EnemyController::get_Ani()
extern "C"  Animator_t434523843 * EnemyController_get_Ani_m1520612111 (EnemyController_t2191660454 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single)
extern "C"  void Animator_CrossFadeInFixedTime_m1909546330 (Animator_t434523843 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
extern "C"  void Animator_CrossFade_m1920308218 (Animator_t434523843 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
#define Component_GetComponent_TisCollider_t1773347010_m4226749020(__this, method) ((  Collider_t1773347010 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
extern "C"  void Collider_set_isTrigger_m1770557358 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBall/OnCollision::Invoke(UnityEngine.Collider)
extern "C"  void OnCollision_Invoke_m888287870 (OnCollision_t3747687736 * __this, Collider_t1773347010 * ___collision0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Character>()
#define Component_GetComponent_TisCharacter_t2781798988_m808073109(__this, method) ((  Character_t2781798988 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Single Character::get_HP()
extern "C"  float Character_get_HP_m2957659392 (Character_t2781798988 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Character::set_HP(System.Single)
extern "C"  void Character_set_HP_m773470549 (Character_t2781798988 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
#define Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532(__this, method) ((  NavMeshAgent_t1276799816 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, method) ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C"  bool NavMeshAgent_SetDestination_m2826390109 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C"  void Transform_LookAt_m3649447396 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EnemySpawner::InitSpawnPosition()
extern "C"  void EnemySpawner_InitSpawnPosition_m800800197 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject EnemySpawner::Spawn()
extern "C"  GameObject_t1113636619 * EnemySpawner_Spawn_m2672296491 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 EnemySpawner::GetSpawnPosition()
extern "C"  Vector3_t3722313464  EnemySpawner_GetSpawnPosition_m1510583561 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::.ctor()
extern "C"  void Camera__ctor_m741555041 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::.ctor()
extern "C"  void Joystick__ctor_m1272315817 (Joystick_t9498292 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  RectTransformUtility_WorldToScreenPoint_m3914148572 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C"  Vector2_t2156229523  PointerEventData_get_position_m437660275 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C"  Vector2_t2156229523  RectTransform_get_sizeDelta_m2183112744 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C"  Vector2_t2156229523  Vector2_get_normalized_m2683665860 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Division_m132623573 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::ClampJoystick()
extern "C"  void Joystick_ClampJoystick_m2501349361 (Joystick_t9498292 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C"  void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Joystick::get_Horizontal()
extern "C"  float Joystick_get_Horizontal_m3614099306 (Joystick_t9498292 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Joystick::get_Vertical()
extern "C"  float Joystick_get_Vertical_m3105283820 (Joystick_t9498292 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<ObjectPooler/Pool>::.ctor()
#define List_1__ctor_m2344233155(__this, method) ((  void (*) (List_1_t1270283955 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::.ctor()
#define Dictionary_2__ctor_m3078442726(__this, method) ((  void (*) (Dictionary_2_t745152412 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void Singleton`1<ObjectPooler>::.ctor()
#define Singleton_1__ctor_m1861290560(__this, method) ((  void (*) (Singleton_1_t1698578593 *, const RuntimeMethod*))Singleton_1__ctor_m2322677222_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<ObjectPooler/Pool>::GetEnumerator()
#define List_1_GetEnumerator_m781241078(__this, method) ((  Enumerator_t3159527832  (*) (List_1_t1270283955 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<ObjectPooler/Pool>::get_Current()
#define Enumerator_get_Current_m3425812555(__this, method) ((  Pool_t4093176509 * (*) (Enumerator_t3159527832 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
#define Queue_1__ctor_m3618464516(__this, method) ((  void (*) (Queue_1_t959896113 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(!0)
#define Queue_1_Enqueue_m2666802599(__this, p0, method) ((  void (*) (Queue_1_t959896113 *, GameObject_t1113636619 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::Add(!0,!1)
#define Dictionary_2_Add_m1312697002(__this, p0, p1, method) ((  void (*) (Dictionary_2_t745152412 *, String_t*, Queue_1_t959896113 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<ObjectPooler/Pool>::MoveNext()
#define Enumerator_MoveNext_m3332874318(__this, method) ((  bool (*) (Enumerator_t3159527832 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<ObjectPooler/Pool>::Dispose()
#define Enumerator_Dispose_m2837525318(__this, method) ((  void (*) (Enumerator_t3159527832 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m3182273321(__this, p0, method) ((  bool (*) (Dictionary_2_t745152412 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::get_Item(!0)
#define Dictionary_2_get_Item_m3259100016(__this, p0, method) ((  Queue_1_t959896113 * (*) (Dictionary_2_t745152412 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// !0 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Dequeue()
#define Queue_1_Dequeue_m526815917(__this, method) ((  GameObject_t1113636619 * (*) (Queue_1_t959896113 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method)
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m315980366 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m3197602968 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C"  void Transform_Translate_m1990195114 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m4040767668 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m1424466557(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
#define Component_GetComponent_TisLineRenderer_t3154350270_m1658315391(__this, method) ((  LineRenderer_t3154350270 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void PlayerController::InitDetectionTrigger()
extern "C"  void PlayerController_InitDetectionTrigger_m442008980 (PlayerController_t2064355688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MoveingAndRotation()
extern "C"  void PlayerController_MoveingAndRotation_m435555172 (PlayerController_t2064355688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Shoot()
extern "C"  void PlayerController_Shoot_m3174924244 (PlayerController_t2064355688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(!0)
#define List_1_Contains_m4222374550(__this, p0, method) ((  bool (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m2716693327 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
#define List_1_Add_m2765963565(__this, p0, method) ((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void PlayerController/<OnTriggerExit>c__AnonStorey0::.ctor()
extern "C"  void U3COnTriggerExitU3Ec__AnonStorey0__ctor_m1254506306 (U3COnTriggerExitU3Ec__AnonStorey0_t2021806301 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Predicate`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
#define Predicate_1__ctor_m2391302690(__this, p0, p1, method) ((  void (*) (Predicate_1_t1938930743 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m327447107_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::FindIndex(System.Predicate`1<!0>)
#define List_1_FindIndex_m1168129328(__this, p0, method) ((  int32_t (*) (List_1_t2585711361 *, Predicate_1_t1938930743 *, const RuntimeMethod*))List_1_FindIndex_m3468384988_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m3509344782(__this, p0, method) ((  void (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Void UnityEngine.SphereCollider::set_radius(System.Single)
extern "C"  void SphereCollider_set_radius_m4130116958 (SphereCollider_t2077223608 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m2812834599(__this, method) ((  int32_t (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// UnityEngine.GameObject PlayerController::GetMostClosedTarget()
extern "C"  GameObject_t1113636619 * PlayerController_GetMostClosedTarget_m172570197 (PlayerController_t2064355688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m3743125852(__this, p0, method) ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C"  Vector3_t3722313464  Vector3_get_back_m4077847766 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Angle_m3731191531 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Slerp_m1234055455 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_speed(System.Single)
extern "C"  void Animator_set_speed_m1181320995 (Animator_t434523843 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::ChangeAnimation(System.Single,System.Boolean)
extern "C"  void PlayerController_ChangeAnimation_m339543989 (PlayerController_t2064355688 * __this, float ___angle0, bool ___moving1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DrawLine()
extern "C"  void PlayerController_DrawLine_m506901979 (PlayerController_t2064355688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::SetVertexCount(System.Int32)
extern "C"  void LineRenderer_SetVertexCount_m2434880629 (LineRenderer_t3154350270 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
extern "C"  void LineRenderer_SetPosition_m2111131184 (LineRenderer_t3154350270 * __this, int32_t p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String PlayerController/AnimationState::get_RUN()
extern "C"  String_t* AnimationState_get_RUN_m936729998 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::SetAnimation(System.String)
extern "C"  void PlayerController_SetAnimation_m1099564868 (PlayerController_t2064355688 * __this, String_t* ___aniName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String PlayerController/AnimationState::get_BACK()
extern "C"  String_t* AnimationState_get_BACK_m2195162337 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String PlayerController/AnimationState::get_IDLE()
extern "C"  String_t* AnimationState_get_IDLE_m2992949454 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t509032636  Animator_GetCurrentAnimatorStateInfo_m18694920 (Animator_t434523843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C"  bool AnimatorStateInfo_IsName_m3393819976 (AnimatorStateInfo_t509032636 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C"  bool Animator_IsInTransition_m2711427730 (Animator_t434523843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m2134052629 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String PlayerController/AnimationState::get_SHOOT()
extern "C"  String_t* AnimationState_get_SHOOT_m1083791399 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T Singleton`1<BulletSpawner>::get_Instance()
#define Singleton_1_get_Instance_m229738282(__this /* static, unused */, method) ((  BulletSpawner_t3795733773 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Singleton_1_get_Instance_m549117796_gshared)(__this /* static, unused */, method)
// UnityEngine.GameObject BulletSpawner::Spawn(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t1113636619 * BulletSpawner_Spawn_m1096849015 (BulletSpawner_t3795733773 * __this, Vector3_t3722313464  ___position0, Quaternion_t2301928331  ___rotation1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VariableJoystick::OnFixed()
extern "C"  void VariableJoystick_OnFixed_m4141959043 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VariableJoystick::OnFloat()
extern "C"  void VariableJoystick_OnFloat_m165815926 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void Bullet::.ctor()
extern "C"  void Bullet__ctor_m2787309514 (Bullet_t1042140031 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Bullet::Awake()
extern "C"  void Bullet_Awake_m2415655451 (Bullet_t1042140031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bullet_Awake_m2415655451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_rigidbody_2(L_0);
		return;
	}
}
// System.Void Bullet::Fire(System.Single,System.Single)
extern "C"  void Bullet_Fire_m3379690710 (Bullet_t1042140031 * __this, float ___speed0, float ___life1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bullet_Fire_m3379690710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = __this->get_rigidbody_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Rigidbody_t3916780224 * L_2 = __this->get_rigidbody_2();
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_forward_m747522392(L_3, /*hidden argument*/NULL);
		float L_5 = ___speed0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_set_velocity_m2899403247(L_2, L_6, /*hidden argument*/NULL);
		bool L_7 = MonoBehaviour_IsInvoking_m1028838749(__this, _stringLiteral431746817, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		MonoBehaviour_CancelInvoke_m2180046661(__this, _stringLiteral431746817, /*hidden argument*/NULL);
	}

IL_0048:
	{
		float L_8 = ___life1;
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral431746817, L_8, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// System.Void Bullet::Dead()
extern "C"  void Bullet_Dead_m3945184442 (Bullet_t1042140031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bullet_Dead_m3945184442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = __this->get_rigidbody_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_m2899403247(L_0, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
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
// System.Void BulletSpawner::.ctor()
extern "C"  void BulletSpawner__ctor_m860333770 (BulletSpawner_t3795733773 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BulletSpawner__ctor_m860333770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_speed_5((10.0f));
		__this->set_life_6((3.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t677613222_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m1404425622(__this, /*hidden argument*/Singleton_1__ctor_m1404425622_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.GameObject BulletSpawner::Spawn(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t1113636619 * BulletSpawner_Spawn_m1096849015 (BulletSpawner_t3795733773 * __this, Vector3_t3722313464  ___position0, Quaternion_t2301928331  ___rotation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BulletSpawner_Spawn_m1096849015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Bullet_t1042140031 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t1698578593_il2cpp_TypeInfo_var);
		ObjectPooler_t521731848 * L_0 = Singleton_1_get_Instance_m3375077493(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3375077493_RuntimeMethod_var);
		Vector3_t3722313464  L_1 = ___position0;
		Quaternion_t2301928331  L_2 = ___rotation1;
		NullCheck(L_0);
		GameObject_t1113636619 * L_3 = ObjectPooler_SpawnFormPool_m3902427701(L_0, _stringLiteral37315637, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t1113636619 * L_4 = V_0;
		NullCheck(L_4);
		Bullet_t1042140031 * L_5 = GameObject_GetComponent_TisBullet_t1042140031_m448032725(L_4, /*hidden argument*/GameObject_GetComponent_TisBullet_t1042140031_m448032725_RuntimeMethod_var);
		V_1 = L_5;
		Bullet_t1042140031 * L_6 = V_1;
		float L_7 = __this->get_speed_5();
		float L_8 = __this->get_life_6();
		NullCheck(L_6);
		Bullet_Fire_m3379690710(L_6, L_7, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = V_0;
		return L_9;
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
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m3292347237 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController__ctor_m3292347237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_dampTime_2((0.2f));
		__this->set_m_screenEdgeBuffer_3((4.0f));
		__this->set_m_minSize_4((6.5f));
		List_1_t777473367 * L_0 = (List_1_t777473367 *)il2cpp_codegen_object_new(List_1_t777473367_il2cpp_TypeInfo_var);
		List_1__ctor_m2885667311(L_0, /*hidden argument*/List_1__ctor_m2885667311_RuntimeMethod_var);
		__this->set_m_targets_5(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Awake()
extern "C"  void CameraController_Awake_m4266067818 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_Awake_m4266067818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Component_GetComponentInChildren_TisCamera_t4157153871_m3161829014(__this, /*hidden argument*/Component_GetComponentInChildren_TisCamera_t4157153871_m3161829014_RuntimeMethod_var);
		__this->set_m_Camera_9(L_0);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m1416469467 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	{
		List_1_t777473367 * L_0 = CameraController_FindAllPlayers_m2973843570(__this, /*hidden argument*/NULL);
		__this->set_m_targets_5(L_0);
		return;
	}
}
// System.Void CameraController::Update()
extern "C"  void CameraController_Update_m2075811523 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void CameraController::FixedUpdate()
extern "C"  void CameraController_FixedUpdate_m1179335422 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	{
		CameraController_Move_m887481956(__this, /*hidden argument*/NULL);
		CameraController_Zoom_m1444959450(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Transform> CameraController::FindAllPlayers()
extern "C"  List_1_t777473367 * CameraController_FindAllPlayers_m2973843570 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_FindAllPlayers_m2973843570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t777473367 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	GameObjectU5BU5D_t3328599146* V_2 = NULL;
	int32_t V_3 = 0;
	{
		List_1_t777473367 * L_0 = (List_1_t777473367 *)il2cpp_codegen_object_new(List_1_t777473367_il2cpp_TypeInfo_var);
		List_1__ctor_m2885667311(L_0, /*hidden argument*/List_1__ctor_m2885667311_RuntimeMethod_var);
		V_0 = L_0;
		GameObject_t1113636619 * L_1 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		V_1 = L_1;
		GameObjectU5BU5D_t3328599146* L_2 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral3301720448, /*hidden argument*/NULL);
		V_2 = L_2;
		GameObject_t1113636619 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		List_1_t777473367 * L_5 = V_0;
		GameObject_t1113636619 * L_6 = V_1;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m4073477735(L_5, L_7, /*hidden argument*/List_1_Add_m4073477735_RuntimeMethod_var);
	}

IL_0034:
	{
		V_3 = 0;
		goto IL_004d;
	}

IL_003b:
	{
		List_1_t777473367 * L_8 = V_0;
		GameObjectU5BU5D_t3328599146* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t1113636619 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m4073477735(L_8, L_13, /*hidden argument*/List_1_Add_m4073477735_RuntimeMethod_var);
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004d:
	{
		int32_t L_15 = V_3;
		GameObjectU5BU5D_t3328599146* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_003b;
		}
	}
	{
		List_1_t777473367 * L_17 = V_0;
		return L_17;
	}
}
// System.Void CameraController::Move()
extern "C"  void CameraController_Move_m887481956 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_Move_m887481956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CameraController_FindAveragePosition_m1474105335(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = __this->get_m_desiredPosition_7();
		Vector3_t3722313464 * L_4 = __this->get_address_of_m_moveVelocity_6();
		float L_5 = __this->get_m_dampTime_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_SmoothDamp_m1123559802(NULL /*static, unused*/, L_2, L_3, (Vector3_t3722313464 *)L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::FindAveragePosition()
extern "C"  void CameraController_FindAveragePosition_m1474105335 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_FindAveragePosition_m1474105335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t3722313464 ));
		V_1 = 0;
		V_2 = 0;
		goto IL_0051;
	}

IL_0011:
	{
		List_1_t777473367 * L_0 = __this->get_m_targets_5();
		int32_t L_1 = V_2;
		NullCheck(L_0);
		Transform_t3600365921 * L_2 = List_1_get_Item_m3022113929(L_0, L_1, /*hidden argument*/List_1_get_Item_m3022113929_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = GameObject_get_activeSelf_m1767405923(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_004d;
	}

IL_0031:
	{
		Vector3_t3722313464  L_5 = V_0;
		List_1_t777473367 * L_6 = __this->get_m_targets_5();
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Transform_t3600365921 * L_8 = List_1_get_Item_m3022113929(L_6, L_7, /*hidden argument*/List_1_get_Item_m3022113929_RuntimeMethod_var);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_5, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_13 = V_2;
		List_1_t777473367 * L_14 = __this->get_m_targets_5();
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m3787308655(L_14, /*hidden argument*/List_1_get_Count_m3787308655_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		Vector3_t3722313464  L_17 = V_0;
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_19 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_17, (((float)((float)L_18))), /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_0072:
	{
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		float L_22 = (&V_3)->get_y_2();
		(&V_0)->set_y_2(L_22);
		Vector3_t3722313464  L_23 = V_0;
		__this->set_m_desiredPosition_7(L_23);
		return;
	}
}
// System.Void CameraController::Zoom()
extern "C"  void CameraController_Zoom_m1444959450 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_Zoom_m1444959450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = CameraController_FindRequiredSize_m1940472616(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Camera_t4157153871 * L_1 = __this->get_m_Camera_9();
		Camera_t4157153871 * L_2 = __this->get_m_Camera_9();
		NullCheck(L_2);
		float L_3 = Camera_get_orthographicSize_m3903216845(L_2, /*hidden argument*/NULL);
		float L_4 = V_0;
		float* L_5 = __this->get_address_of_m_zoomSpeed_8();
		float L_6 = __this->get_m_dampTime_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_7 = Mathf_SmoothDamp_m3171073017(NULL /*static, unused*/, L_3, L_4, (float*)L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Camera_set_orthographicSize_m76971700(L_1, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Single CameraController::FindRequiredSize()
extern "C"  float CameraController_FindRequiredSize_m1940472616 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_FindRequiredSize_m1940472616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = __this->get_m_desiredPosition_7();
		NullCheck(L_0);
		Vector3_t3722313464  L_2 = Transform_InverseTransformPoint_m1343916000(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = (0.0f);
		V_2 = 0;
		goto IL_009b;
	}

IL_001f:
	{
		List_1_t777473367 * L_3 = __this->get_m_targets_5();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		Transform_t3600365921 * L_5 = List_1_get_Item_m3022113929(L_3, L_4, /*hidden argument*/List_1_get_Item_m3022113929_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = GameObject_get_activeSelf_m1767405923(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0097;
	}

IL_003f:
	{
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		List_1_t777473367 * L_9 = __this->get_m_targets_5();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Transform_t3600365921 * L_11 = List_1_get_Item_m3022113929(L_9, L_10, /*hidden argument*/List_1_get_Item_m3022113929_RuntimeMethod_var);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_13 = Transform_InverseTransformPoint_m1343916000(L_8, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		Vector3_t3722313464  L_14 = V_3;
		Vector3_t3722313464  L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		float L_17 = V_1;
		float L_18 = (&V_4)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_19 = fabsf(L_18);
		float L_20 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		float L_21 = V_1;
		float L_22 = (&V_4)->get_x_1();
		float L_23 = fabsf(L_22);
		Camera_t4157153871 * L_24 = __this->get_m_Camera_9();
		NullCheck(L_24);
		float L_25 = Camera_get_aspect_m862507514(L_24, /*hidden argument*/NULL);
		float L_26 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_21, ((float)((float)L_23/(float)L_25)), /*hidden argument*/NULL);
		V_1 = L_26;
	}

IL_0097:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_28 = V_2;
		List_1_t777473367 * L_29 = __this->get_m_targets_5();
		NullCheck(L_29);
		int32_t L_30 = List_1_get_Count_m3787308655(L_29, /*hidden argument*/List_1_get_Count_m3787308655_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_001f;
		}
	}
	{
		float L_31 = V_1;
		float L_32 = __this->get_m_screenEdgeBuffer_3();
		V_1 = ((float)il2cpp_codegen_add((float)L_31, (float)L_32));
		float L_33 = V_1;
		float L_34 = __this->get_m_minSize_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_35 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		float L_36 = V_1;
		return L_36;
	}
}
// System.Void CameraController::SetStartPositionAndSize()
extern "C"  void CameraController_SetStartPositionAndSize_m3751680885 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	{
		CameraController_FindAveragePosition_m1474105335(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = __this->get_m_desiredPosition_7();
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_1, /*hidden argument*/NULL);
		Camera_t4157153871 * L_2 = __this->get_m_Camera_9();
		float L_3 = CameraController_FindRequiredSize_m1940472616(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_orthographicSize_m76971700(L_2, L_3, /*hidden argument*/NULL);
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
// System.Void Character::.ctor()
extern "C"  void Character__ctor_m2389199481 (Character_t2781798988 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Character::Start()
extern "C"  void Character_Start_m1862467533 (Character_t2781798988 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Character_Start_m1862467533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EnemyController_t2191660454 * L_0 = Component_GetComponent_TisEnemyController_t2191660454_m137582258(__this, /*hidden argument*/Component_GetComponent_TisEnemyController_t2191660454_m137582258_RuntimeMethod_var);
		__this->set_enemyController_3(L_0);
		return;
	}
}
// System.Single Character::get_HP()
extern "C"  float Character_get_HP_m2957659392 (Character_t2781798988 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_hp_2();
		return L_0;
	}
}
// System.Void Character::set_HP(System.Single)
extern "C"  void Character_set_HP_m773470549 (Character_t2781798988 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		float L_1 = __this->get_hp_2();
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_001d;
		}
	}
	{
		float L_2 = ___value0;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		Character_OnHurting_m3257862547(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		float L_3 = ___value0;
		__this->set_hp_2(L_3);
		float L_4 = __this->get_hp_2();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		Character_OnDead_m3183327487(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void Character::OnDead()
extern "C"  void Character_OnDead_m3183327487 (Character_t2781798988 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Character_OnDead_m3183327487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Character_PlayAnimation_m2769669040(__this, _stringLiteral2288167791, (bool)0, /*hidden argument*/NULL);
		EnemyController_t2191660454 * L_0 = __this->get_enemyController_3();
		NullCheck(L_0);
		NavMeshAgent_t1276799816 * L_1 = EnemyController_get_Agent_m700722328(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		EnemyController_t2191660454 * L_3 = __this->get_enemyController_3();
		NullCheck(L_3);
		NavMeshAgent_t1276799816 * L_4 = EnemyController_get_Agent_m700722328(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		NavMeshAgent_set_isStopped_m1722711423(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		EnemyController_t2191660454 * L_5 = __this->get_enemyController_3();
		NullCheck(L_5);
		Collider_t1773347010 * L_6 = EnemyController_get_ColliderCom_m2965693981(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		EnemyController_t2191660454 * L_8 = __this->get_enemyController_3();
		NullCheck(L_8);
		Collider_t1773347010 * L_9 = EnemyController_get_ColliderCom_m2965693981(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Collider_set_enabled_m1517463283(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_005a:
	{
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral3895296655, (3.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Character::Disappear()
extern "C"  void Character_Disappear_m1826714256 (Character_t2781798988 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Character::OnHurting()
extern "C"  void Character_OnHurting_m3257862547 (Character_t2781798988 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Character_OnHurting_m3257862547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Character_PlayAnimation_m2769669040(__this, _stringLiteral1212946936, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Character::PlayAnimation(System.String,System.Boolean)
extern "C"  void Character_PlayAnimation_m2769669040 (Character_t2781798988 * __this, String_t* ___aniName0, bool ___supportRepeat1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Character_PlayAnimation_m2769669040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EnemyController_t2191660454 * L_0 = __this->get_enemyController_3();
		NullCheck(L_0);
		Animator_t434523843 * L_1 = EnemyController_get_Ani_m1520612111(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		bool L_3 = ___supportRepeat1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		EnemyController_t2191660454 * L_4 = __this->get_enemyController_3();
		NullCheck(L_4);
		Animator_t434523843 * L_5 = EnemyController_get_Ani_m1520612111(L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___aniName0;
		NullCheck(L_5);
		Animator_CrossFadeInFixedTime_m1909546330(L_5, L_6, (0.1f), /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_0037:
	{
		EnemyController_t2191660454 * L_7 = __this->get_enemyController_3();
		NullCheck(L_7);
		Animator_t434523843 * L_8 = EnemyController_get_Ani_m1520612111(L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___aniName0;
		NullCheck(L_8);
		Animator_CrossFade_m1920308218(L_8, L_9, (0.1f), /*hidden argument*/NULL);
	}

IL_004d:
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
// System.Void DamageBall::.ctor()
extern "C"  void DamageBall__ctor_m484018497 (DamageBall_t2634014875 * __this, const RuntimeMethod* method)
{
	{
		__this->set_isDisableOnCollision_2((bool)1);
		__this->set_damageValue_4((10.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DamageBall::Start()
extern "C"  void DamageBall_Start_m558040341 (DamageBall_t2634014875 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DamageBall_Start_m558040341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1773347010 * L_0 = Component_GetComponent_TisCollider_t1773347010_m4226749020(__this, /*hidden argument*/Component_GetComponent_TisCollider_t1773347010_m4226749020_RuntimeMethod_var);
		__this->set_colliderCom_5(L_0);
		Collider_t1773347010 * L_1 = __this->get_colliderCom_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Collider_t1773347010 * L_3 = __this->get_colliderCom_5();
		NullCheck(L_3);
		Collider_set_isTrigger_m1770557358(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void DamageBall::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void DamageBall_OnTriggerEnter_m4195214938 (DamageBall_t2634014875 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DamageBall_OnTriggerEnter_m4195214938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Character_t2781798988 * V_0 = NULL;
	{
		OnCollision_t3747687736 * L_0 = __this->get_onCollisionEnter_6();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		OnCollision_t3747687736 * L_1 = __this->get_onCollisionEnter_6();
		Collider_t1773347010 * L_2 = ___other0;
		NullCheck(L_1);
		OnCollision_Invoke_m888287870(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		bool L_3 = __this->get_isDisableOnCollision_2();
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_002e:
	{
		bool L_5 = __this->get_isDestroyOnCollision_3();
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0044:
	{
		Collider_t1773347010 * L_7 = ___other0;
		NullCheck(L_7);
		Character_t2781798988 * L_8 = Component_GetComponent_TisCharacter_t2781798988_m808073109(L_7, /*hidden argument*/Component_GetComponent_TisCharacter_t2781798988_m808073109_RuntimeMethod_var);
		V_0 = L_8;
		Character_t2781798988 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_9, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		Character_t2781798988 * L_11 = V_0;
		Character_t2781798988 * L_12 = L_11;
		NullCheck(L_12);
		float L_13 = Character_get_HP_m2957659392(L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_damageValue_4();
		NullCheck(L_12);
		Character_set_HP_m773470549(L_12, ((float)il2cpp_codegen_subtract((float)L_13, (float)L_14)), /*hidden argument*/NULL);
	}

IL_006a:
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
// System.Void DamageBall/OnCollision::.ctor(System.Object,System.IntPtr)
extern "C"  void OnCollision__ctor_m3345727585 (OnCollision_t3747687736 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DamageBall/OnCollision::Invoke(UnityEngine.Collider)
extern "C"  void OnCollision_Invoke_m888287870 (OnCollision_t3747687736 * __this, Collider_t1773347010 * ___collision0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnCollision_Invoke_m888287870((OnCollision_t3747687736 *)__this->get_prev_9(), ___collision0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Collider_t1773347010 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___collision0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Collider_t1773347010 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___collision0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Collider_t1773347010 * >::Invoke(targetMethod, targetThis, ___collision0);
					else
						GenericVirtActionInvoker1< Collider_t1773347010 * >::Invoke(targetMethod, targetThis, ___collision0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Collider_t1773347010 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___collision0);
					else
						VirtActionInvoker1< Collider_t1773347010 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___collision0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Collider_t1773347010 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___collision0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___collision0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___collision0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___collision0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___collision0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Collider_t1773347010 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___collision0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DamageBall/OnCollision::BeginInvoke(UnityEngine.Collider,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnCollision_BeginInvoke_m1319878558 (OnCollision_t3747687736 * __this, Collider_t1773347010 * ___collision0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___collision0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void DamageBall/OnCollision::EndInvoke(System.IAsyncResult)
extern "C"  void OnCollision_EndInvoke_m2597647101 (OnCollision_t3747687736 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyController::.ctor()
extern "C"  void EnemyController__ctor_m162774262 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AI.NavMeshAgent EnemyController::get_Agent()
extern "C"  NavMeshAgent_t1276799816 * EnemyController_get_Agent_m700722328 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	{
		NavMeshAgent_t1276799816 * L_0 = __this->get_agent_3();
		return L_0;
	}
}
// UnityEngine.Animator EnemyController::get_Ani()
extern "C"  Animator_t434523843 * EnemyController_get_Ani_m1520612111 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	{
		Animator_t434523843 * L_0 = __this->get_animator_5();
		return L_0;
	}
}
// UnityEngine.Collider EnemyController::get_ColliderCom()
extern "C"  Collider_t1773347010 * EnemyController_get_ColliderCom_m2965693981 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	{
		Collider_t1773347010 * L_0 = __this->get_collider_6();
		return L_0;
	}
}
// System.Void EnemyController::Awake()
extern "C"  void EnemyController_Awake_m1672627062 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyController_Awake_m1672627062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NavMeshAgent_t1276799816 * L_0 = __this->get_agent_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		NavMeshAgent_t1276799816 * L_2 = Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532_RuntimeMethod_var);
		__this->set_agent_3(L_2);
	}

IL_001d:
	{
		Animator_t434523843 * L_3 = __this->get_animator_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		Animator_t434523843 * L_5 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_animator_5(L_5);
	}

IL_003a:
	{
		Collider_t1773347010 * L_6 = __this->get_collider_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		Collider_t1773347010 * L_8 = Component_GetComponent_TisCollider_t1773347010_m4226749020(__this, /*hidden argument*/Component_GetComponent_TisCollider_t1773347010_m4226749020_RuntimeMethod_var);
		__this->set_collider_6(L_8);
	}

IL_0057:
	{
		return;
	}
}
// System.Void EnemyController::Start()
extern "C"  void EnemyController_Start_m1137308130 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyController_Start_m1137308130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		__this->set_target_4(L_0);
		return;
	}
}
// System.Void EnemyController::Update()
extern "C"  void EnemyController_Update_m2232054175 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyController_Update_m2232054175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		NavMeshAgent_t1276799816 * L_0 = __this->get_agent_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		NavMeshAgent_t1276799816 * L_2 = __this->get_agent_3();
		GameObject_t1113636619 * L_3 = __this->get_target_4();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavMeshAgent_SetDestination_m2826390109(L_2, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		bool L_6 = __this->get_lookAtTarget_2();
		if (!L_6)
		{
			goto IL_008b;
		}
	}
	{
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = __this->get_target_4();
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		float L_11 = (&V_0)->get_x_1();
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		float L_14 = (&V_1)->get_y_2();
		GameObject_t1113636619 * L_15 = __this->get_target_4();
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = GameObject_get_transform_m1369836730(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		float L_18 = (&V_2)->get_z_3();
		Vector3_t3722313464  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m3353183577((&L_19), L_11, L_14, L_18, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_LookAt_m3649447396(L_7, L_19, /*hidden argument*/NULL);
	}

IL_008b:
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
// System.Void EnemySpawner::.ctor()
extern "C"  void EnemySpawner__ctor_m1783562082 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner__ctor_m1783562082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_maxEnemy_2(((int32_t)30));
		__this->set_spawnTime_3((2.0f));
		List_1_t777473367 * L_0 = (List_1_t777473367 *)il2cpp_codegen_object_new(List_1_t777473367_il2cpp_TypeInfo_var);
		List_1__ctor_m2885667311(L_0, /*hidden argument*/List_1__ctor_m2885667311_RuntimeMethod_var);
		__this->set_spawnPosList_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::Start()
extern "C"  void EnemySpawner_Start_m1918682020 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	{
		EnemySpawner_InitSpawnPosition_m800800197(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::Update()
extern "C"  void EnemySpawner_Update_m306438552 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_enemyIsFull_7();
		if (L_0)
		{
			goto IL_0066;
		}
	}
	{
		float L_1 = __this->get_timeCount_5();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeCount_5(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		float L_3 = __this->get_timeCount_5();
		float L_4 = __this->get_spawnTime_3();
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0066;
		}
	}
	{
		EnemySpawner_Spawn_m2672296491(__this, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_enemyCount_6();
		__this->set_enemyCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		__this->set_timeCount_5((0.0f));
		int32_t L_6 = __this->get_enemyCount_6();
		int32_t L_7 = __this->get_maxEnemy_2();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0066;
		}
	}
	{
		__this->set_enemyIsFull_7((bool)1);
	}

IL_0066:
	{
		return;
	}
}
// System.Void EnemySpawner::InitSpawnPosition()
extern "C"  void EnemySpawner_InitSpawnPosition_m800800197 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_InitSpawnPosition_m800800197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0007:
	{
		List_1_t777473367 * L_0 = __this->get_spawnPosList_4();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_t3600365921 * L_3 = Transform_GetChild_m1092972975(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_m4073477735(L_0, L_3, /*hidden argument*/List_1_Add_m4073477735_RuntimeMethod_var);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0022:
	{
		int32_t L_5 = V_0;
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = Transform_get_childCount_m3145433196(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.GameObject EnemySpawner::Spawn()
extern "C"  GameObject_t1113636619 * EnemySpawner_Spawn_m2672296491 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_Spawn_m2672296491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t1698578593_il2cpp_TypeInfo_var);
		ObjectPooler_t521731848 * L_0 = Singleton_1_get_Instance_m3375077493(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3375077493_RuntimeMethod_var);
		Vector3_t3722313464  L_1 = EnemySpawner_GetSpawnPosition_m1510583561(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_2 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_t1113636619 * L_3 = ObjectPooler_SpawnFormPool_m3902427701(L_0, _stringLiteral760905195, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t1113636619 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 EnemySpawner::GetSpawnPosition()
extern "C"  Vector3_t3722313464  EnemySpawner_GetSpawnPosition_m1510583561 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_GetSpawnPosition_m1510583561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t777473367 * L_0 = __this->get_spawnPosList_4();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3787308655(L_0, /*hidden argument*/List_1_get_Count_m3787308655_RuntimeMethod_var);
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, 0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_t777473367 * L_3 = __this->get_spawnPosList_4();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t3600365921 * L_5 = List_1_get_Item_m3022113929(L_3, L_4, /*hidden argument*/List_1_get_Item_m3022113929_RuntimeMethod_var);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		return L_6;
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
// System.Void FixedJoystick::.ctor()
extern "C"  void FixedJoystick__ctor_m3165509026 (FixedJoystick_t2618381211 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedJoystick__ctor_m3165509026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_joystickPosition_7(L_0);
		Camera_t4157153871 * L_1 = (Camera_t4157153871 *)il2cpp_codegen_object_new(Camera_t4157153871_il2cpp_TypeInfo_var);
		Camera__ctor_m741555041(L_1, /*hidden argument*/NULL);
		__this->set_cam_8(L_1);
		Joystick__ctor_m1272315817(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FixedJoystick::Start()
extern "C"  void FixedJoystick_Start_m649713002 (FixedJoystick_t2618381211 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedJoystick_Start_m649713002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = __this->get_cam_8();
		RectTransform_t3704657025 * L_1 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = RectTransformUtility_WorldToScreenPoint_m3914148572(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		__this->set_joystickPosition_7(L_3);
		return;
	}
}
// System.Void FixedJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void FixedJoystick_OnDrag_m1042755941 (FixedJoystick_t2618381211 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedJoystick_OnDrag_m1042755941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	FixedJoystick_t2618381211 * G_B2_0 = NULL;
	FixedJoystick_t2618381211 * G_B1_0 = NULL;
	Vector2_t2156229523  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	FixedJoystick_t2618381211 * G_B3_1 = NULL;
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = __this->get_joystickPosition_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_5 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = RectTransform_get_sizeDelta_m2183112744(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_x_0();
		G_B1_0 = __this;
		if ((!(((float)L_4) > ((float)((float)((float)L_7/(float)(8.0f)))))))
		{
			G_B2_0 = __this;
			goto IL_0044;
		}
	}
	{
		Vector2_t2156229523  L_8 = Vector2_get_normalized_m2683665860((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_0063;
	}

IL_0044:
	{
		Vector2_t2156229523  L_9 = V_0;
		RectTransform_t3704657025 * L_10 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = RectTransform_get_sizeDelta_m2183112744(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = (&V_2)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_13 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_9, ((float)((float)L_12/(float)(8.0f))), /*hidden argument*/NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B2_0;
	}

IL_0063:
	{
		NullCheck(G_B3_1);
		((Joystick_t9498292 *)G_B3_1)->set_inputVector_4(G_B3_0);
		Joystick_ClampJoystick_m2501349361(__this, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_14 = ((Joystick_t9498292 *)__this)->get_handle_6();
		Vector2_t2156229523  L_15 = ((Joystick_t9498292 *)__this)->get_inputVector_4();
		RectTransform_t3704657025 * L_16 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = RectTransform_get_sizeDelta_m2183112744(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = (&V_3)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_19 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		Vector2_t2156229523  L_20 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_19, (2.0f), /*hidden argument*/NULL);
		float L_21 = ((Joystick_t9498292 *)__this)->get_handleLimit_2();
		Vector2_t2156229523  L_22 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m4126691837(L_14, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FixedJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void FixedJoystick_OnPointerDown_m3601786111 (FixedJoystick_t2618381211 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		VirtActionInvoker1< PointerEventData_t3807901092 * >::Invoke(7 /* System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_0);
		return;
	}
}
// System.Void FixedJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void FixedJoystick_OnPointerUp_m763078753 (FixedJoystick_t2618381211 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedJoystick_OnPointerUp_m763078753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Joystick_t9498292 *)__this)->set_inputVector_4(L_0);
		RectTransform_t3704657025 * L_1 = ((Joystick_t9498292 *)__this)->get_handle_6();
		Vector2_t2156229523  L_2 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m4126691837(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void FloatingJoystick::.ctor()
extern "C"  void FloatingJoystick__ctor_m612783692 (FloatingJoystick_t3402721920 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatingJoystick__ctor_m612783692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_joystickCenter_7(L_0);
		Joystick__ctor_m1272315817(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FloatingJoystick::Start()
extern "C"  void FloatingJoystick_Start_m290384880 (FloatingJoystick_t3402721920 * __this, const RuntimeMethod* method)
{
	{
		RectTransform_t3704657025 * L_0 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FloatingJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void FloatingJoystick_OnDrag_m1849813291 (FloatingJoystick_t3402721920 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatingJoystick_OnDrag_m1849813291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	FloatingJoystick_t3402721920 * G_B2_0 = NULL;
	FloatingJoystick_t3402721920 * G_B1_0 = NULL;
	Vector2_t2156229523  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	FloatingJoystick_t3402721920 * G_B3_1 = NULL;
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = __this->get_joystickCenter_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_5 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = RectTransform_get_sizeDelta_m2183112744(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_x_0();
		G_B1_0 = __this;
		if ((!(((float)L_4) > ((float)((float)((float)L_7/(float)(2.0f)))))))
		{
			G_B2_0 = __this;
			goto IL_0044;
		}
	}
	{
		Vector2_t2156229523  L_8 = Vector2_get_normalized_m2683665860((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_0063;
	}

IL_0044:
	{
		Vector2_t2156229523  L_9 = V_0;
		RectTransform_t3704657025 * L_10 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = RectTransform_get_sizeDelta_m2183112744(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = (&V_2)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_13 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_9, ((float)((float)L_12/(float)(2.0f))), /*hidden argument*/NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B2_0;
	}

IL_0063:
	{
		NullCheck(G_B3_1);
		((Joystick_t9498292 *)G_B3_1)->set_inputVector_4(G_B3_0);
		Joystick_ClampJoystick_m2501349361(__this, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_14 = ((Joystick_t9498292 *)__this)->get_handle_6();
		Vector2_t2156229523  L_15 = ((Joystick_t9498292 *)__this)->get_inputVector_4();
		RectTransform_t3704657025 * L_16 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = RectTransform_get_sizeDelta_m2183112744(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = (&V_3)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_19 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		Vector2_t2156229523  L_20 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_19, (2.0f), /*hidden argument*/NULL);
		float L_21 = ((Joystick_t9498292 *)__this)->get_handleLimit_2();
		Vector2_t2156229523  L_22 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m4126691837(L_14, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void FloatingJoystick_OnPointerDown_m3753834403 (FloatingJoystick_t3402721920 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatingJoystick_OnPointerDown_m3753834403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_2 = ((Joystick_t9498292 *)__this)->get_background_5();
		PointerEventData_t3807901092 * L_3 = ___eventData0;
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = PointerEventData_get_position_m437660275(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_m3387557959(L_2, L_5, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_6 = ((Joystick_t9498292 *)__this)->get_handle_6();
		Vector2_t2156229523  L_7 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		RectTransform_set_anchoredPosition_m4126691837(L_6, L_7, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_8 = ___eventData0;
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = PointerEventData_get_position_m437660275(L_8, /*hidden argument*/NULL);
		__this->set_joystickCenter_7(L_9);
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void FloatingJoystick_OnPointerUp_m2581807680 (FloatingJoystick_t3402721920 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatingJoystick_OnPointerUp_m2581807680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Joystick_t9498292 *)__this)->set_inputVector_4(L_2);
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
// System.Void Joystick::.ctor()
extern "C"  void Joystick__ctor_m1272315817 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick__ctor_m1272315817_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_handleLimit_2((1.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_inputVector_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Joystick::get_Horizontal()
extern "C"  float Joystick_get_Horizontal_m3614099306 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523 * L_0 = __this->get_address_of_inputVector_4();
		float L_1 = L_0->get_x_0();
		return L_1;
	}
}
// System.Single Joystick::get_Vertical()
extern "C"  float Joystick_get_Vertical_m3105283820 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523 * L_0 = __this->get_address_of_inputVector_4();
		float L_1 = L_0->get_y_1();
		return L_1;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
extern "C"  Vector2_t2156229523  Joystick_get_Direction_m3832432503 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = Joystick_get_Horizontal_m3614099306(__this, /*hidden argument*/NULL);
		float L_1 = Joystick_get_Vertical_m3105283820(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnDrag_m1548353041 (Joystick_t9498292 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerDown_m1243099850 (Joystick_t9498292 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerUp_m3173419772 (Joystick_t9498292 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Joystick::ClampJoystick()
extern "C"  void Joystick_ClampJoystick_m2501349361 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_joystickMode_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		Vector2_t2156229523 * L_1 = __this->get_address_of_inputVector_4();
		float L_2 = L_1->get_x_0();
		Vector2_t2156229523  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3970636864((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->set_inputVector_4(L_3);
	}

IL_0027:
	{
		int32_t L_4 = __this->get_joystickMode_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		Vector2_t2156229523 * L_5 = __this->get_address_of_inputVector_4();
		float L_6 = L_5->get_y_1();
		Vector2_t2156229523  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3970636864((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->set_inputVector_4(L_7);
	}

IL_004e:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjectPooler::.ctor()
extern "C"  void ObjectPooler__ctor_m986760805 (ObjectPooler_t521731848 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPooler__ctor_m986760805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1270283955 * L_0 = (List_1_t1270283955 *)il2cpp_codegen_object_new(List_1_t1270283955_il2cpp_TypeInfo_var);
		List_1__ctor_m2344233155(L_0, /*hidden argument*/List_1__ctor_m2344233155_RuntimeMethod_var);
		__this->set_pools_5(L_0);
		Dictionary_2_t745152412 * L_1 = (Dictionary_2_t745152412 *)il2cpp_codegen_object_new(Dictionary_2_t745152412_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3078442726(L_1, /*hidden argument*/Dictionary_2__ctor_m3078442726_RuntimeMethod_var);
		__this->set_poolDictionary_6(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t1698578593_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m1861290560(__this, /*hidden argument*/Singleton_1__ctor_m1861290560_RuntimeMethod_var);
		return;
	}
}
// System.Void ObjectPooler::Start()
extern "C"  void ObjectPooler_Start_m793295583 (ObjectPooler_t521731848 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPooler_Start_m793295583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pool_t4093176509 * V_0 = NULL;
	Enumerator_t3159527832  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Queue_1_t959896113 * V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t1113636619 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1270283955 * L_0 = __this->get_pools_5();
		NullCheck(L_0);
		Enumerator_t3159527832  L_1 = List_1_GetEnumerator_m781241078(L_0, /*hidden argument*/List_1_GetEnumerator_m781241078_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0011:
		{
			Pool_t4093176509 * L_2 = Enumerator_get_Current_m3425812555((Enumerator_t3159527832 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3425812555_RuntimeMethod_var);
			V_0 = L_2;
			Queue_1_t959896113 * L_3 = (Queue_1_t959896113 *)il2cpp_codegen_object_new(Queue_1_t959896113_il2cpp_TypeInfo_var);
			Queue_1__ctor_m3618464516(L_3, /*hidden argument*/Queue_1__ctor_m3618464516_RuntimeMethod_var);
			V_2 = L_3;
			V_3 = 0;
			goto IL_0047;
		}

IL_0026:
		{
			Pool_t4093176509 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t1113636619 * L_5 = L_4->get_prefab_1();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			GameObject_t1113636619 * L_6 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
			V_4 = L_6;
			GameObject_t1113636619 * L_7 = V_4;
			NullCheck(L_7);
			GameObject_SetActive_m796801857(L_7, (bool)0, /*hidden argument*/NULL);
			Queue_1_t959896113 * L_8 = V_2;
			GameObject_t1113636619 * L_9 = V_4;
			NullCheck(L_8);
			Queue_1_Enqueue_m2666802599(L_8, L_9, /*hidden argument*/Queue_1_Enqueue_m2666802599_RuntimeMethod_var);
			int32_t L_10 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_0047:
		{
			int32_t L_11 = V_3;
			Pool_t4093176509 * L_12 = V_0;
			NullCheck(L_12);
			int32_t L_13 = L_12->get_size_2();
			if ((((int32_t)L_11) < ((int32_t)L_13)))
			{
				goto IL_0026;
			}
		}

IL_0053:
		{
			Dictionary_2_t745152412 * L_14 = __this->get_poolDictionary_6();
			Pool_t4093176509 * L_15 = V_0;
			NullCheck(L_15);
			String_t* L_16 = L_15->get_tag_0();
			Queue_1_t959896113 * L_17 = V_2;
			NullCheck(L_14);
			Dictionary_2_Add_m1312697002(L_14, L_16, L_17, /*hidden argument*/Dictionary_2_Add_m1312697002_RuntimeMethod_var);
		}

IL_0065:
		{
			bool L_18 = Enumerator_MoveNext_m3332874318((Enumerator_t3159527832 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3332874318_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0011;
			}
		}

IL_0071:
		{
			IL2CPP_LEAVE(0x84, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2837525318((Enumerator_t3159527832 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2837525318_RuntimeMethod_var);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0084:
	{
		return;
	}
}
// UnityEngine.GameObject ObjectPooler::SpawnFormPool(System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t1113636619 * ObjectPooler_SpawnFormPool_m3902427701 (ObjectPooler_t521731848 * __this, String_t* ___tag0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPooler_SpawnFormPool_m3902427701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		Dictionary_2_t745152412 * L_0 = __this->get_poolDictionary_6();
		String_t* L_1 = ___tag0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3182273321(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3182273321_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_3 = ___tag0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral265425869, L_3, _stringLiteral3917197541, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return (GameObject_t1113636619 *)NULL;
	}

IL_0028:
	{
		Dictionary_2_t745152412 * L_5 = __this->get_poolDictionary_6();
		String_t* L_6 = ___tag0;
		NullCheck(L_5);
		Queue_1_t959896113 * L_7 = Dictionary_2_get_Item_m3259100016(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m3259100016_RuntimeMethod_var);
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = Queue_1_Dequeue_m526815917(L_7, /*hidden argument*/Queue_1_Dequeue_m526815917_RuntimeMethod_var);
		V_0 = L_8;
		GameObject_t1113636619 * L_9 = V_0;
		NullCheck(L_9);
		GameObject_SetActive_m796801857(L_9, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = V_0;
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = ___position1;
		NullCheck(L_11);
		Transform_set_position_m3387557959(L_11, L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = V_0;
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_15 = ___rotation2;
		NullCheck(L_14);
		Transform_set_rotation_m3524318132(L_14, L_15, /*hidden argument*/NULL);
		Dictionary_2_t745152412 * L_16 = __this->get_poolDictionary_6();
		String_t* L_17 = ___tag0;
		NullCheck(L_16);
		Queue_1_t959896113 * L_18 = Dictionary_2_get_Item_m3259100016(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m3259100016_RuntimeMethod_var);
		GameObject_t1113636619 * L_19 = V_0;
		NullCheck(L_18);
		Queue_1_Enqueue_m2666802599(L_18, L_19, /*hidden argument*/Queue_1_Enqueue_m2666802599_RuntimeMethod_var);
		GameObject_t1113636619 * L_20 = V_0;
		return L_20;
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
// System.Void ObjectPooler/Pool::.ctor()
extern "C"  void Pool__ctor_m1947213248 (Pool_t4093176509 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Player2DExample::.ctor()
extern "C"  void Player2DExample__ctor_m25542223 (Player2DExample_t3660207970 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveSpeed_2((8.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player2DExample::Update()
extern "C"  void Player2DExample_Update_m1065258874 (Player2DExample_t3660207970 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player2DExample_Update_m1065258874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_1 = __this->get_joystick_3();
		NullCheck(L_1);
		float L_2 = Joystick_get_Horizontal_m3614099306(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_5 = __this->get_joystick_3();
		NullCheck(L_5);
		float L_6 = Joystick_get_Vertical_m3105283820(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t3722313464  L_9 = V_0;
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_11 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_15 = Quaternion_LookRotation_m3197602968(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m3524318132(L_12, L_15, /*hidden argument*/NULL);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = V_0;
		float L_18 = __this->get_moveSpeed_2();
		Vector3_t3722313464  L_19 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		float L_20 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_Translate_m1990195114(L_16, L_21, 0, /*hidden argument*/NULL);
	}

IL_0078:
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
// System.Void Player3DExample::.ctor()
extern "C"  void Player3DExample__ctor_m3148918762 (Player3DExample_t3538731783 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveSpeed_2((8.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player3DExample::Update()
extern "C"  void Player3DExample_Update_m584191189 (Player3DExample_t3538731783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player3DExample_Update_m584191189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_1 = __this->get_joystick_3();
		NullCheck(L_1);
		float L_2 = Joystick_get_Horizontal_m3614099306(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_5 = __this->get_joystick_3();
		NullCheck(L_5);
		float L_6 = Joystick_get_Vertical_m3105283820(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t3722313464  L_9 = V_0;
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_11 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_14 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m3524318132(L_12, L_14, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = V_0;
		float L_17 = __this->get_moveSpeed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_Translate_m1990195114(L_15, L_20, 0, /*hidden argument*/NULL);
	}

IL_0073:
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
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m1333951952 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController__ctor_m1333951952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Speed_2((12.0f));
		__this->set_m_turnSpeed_3((180.0f));
		__this->set_rotateSpeed_4((10.0f));
		__this->set_transitionDuration_5((0.1f));
		__this->set_moveSpeed_7((8.0f));
		__this->set_shootSpeed_8((0.1f));
		__this->set_triggerSize_12((2.5f));
		__this->set_drawLine_13((bool)1);
		List_1_t2585711361 * L_0 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_0, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_aroundMeList_20(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1746698410 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1746698410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_m_animator_14(L_0);
		LineRenderer_t3154350270 * L_1 = Component_GetComponent_TisLineRenderer_t3154350270_m1658315391(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t3154350270_m1658315391_RuntimeMethod_var);
		__this->set_lineRenderer_21(L_1);
		PlayerController_InitDetectionTrigger_m442008980(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m848427540 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		PlayerController_MoveingAndRotation_m435555172(__this, /*hidden argument*/NULL);
		bool L_0 = __this->get_shooting_19();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PlayerController_Shoot_m3174924244(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PlayerController_OnTriggerEnter_m676506753 (PlayerController_t2064355688 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter_m676506753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2585711361 * L_0 = __this->get_aroundMeList_20();
		Collider_t1773347010 * L_1 = ___other0;
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = List_1_Contains_m4222374550(L_0, L_2, /*hidden argument*/List_1_Contains_m4222374550_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		Collider_t1773347010 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = Component_get_tag_m2716693327(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_5, _stringLiteral3452654525, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		List_1_t2585711361 * L_7 = __this->get_aroundMeList_20();
		Collider_t1773347010 * L_8 = ___other0;
		NullCheck(L_8);
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_m2765963565(L_7, L_9, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
	}

IL_003c:
	{
		return;
	}
}
// System.Void PlayerController::OnTriggerExit(UnityEngine.Collider)
extern "C"  void PlayerController_OnTriggerExit_m2337431891 (PlayerController_t2064355688 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerExit_m2337431891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnTriggerExitU3Ec__AnonStorey0_t2021806301 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3COnTriggerExitU3Ec__AnonStorey0_t2021806301 * L_0 = (U3COnTriggerExitU3Ec__AnonStorey0_t2021806301 *)il2cpp_codegen_object_new(U3COnTriggerExitU3Ec__AnonStorey0_t2021806301_il2cpp_TypeInfo_var);
		U3COnTriggerExitU3Ec__AnonStorey0__ctor_m1254506306(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnTriggerExitU3Ec__AnonStorey0_t2021806301 * L_1 = V_0;
		Collider_t1773347010 * L_2 = ___other0;
		NullCheck(L_1);
		L_1->set_other_0(L_2);
		List_1_t2585711361 * L_3 = __this->get_aroundMeList_20();
		U3COnTriggerExitU3Ec__AnonStorey0_t2021806301 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3COnTriggerExitU3Ec__AnonStorey0_U3CU3Em__0_m3352742767_RuntimeMethod_var;
		Predicate_1_t1938930743 * L_6 = (Predicate_1_t1938930743 *)il2cpp_codegen_object_new(Predicate_1_t1938930743_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m2391302690(L_6, L_4, L_5, /*hidden argument*/Predicate_1__ctor_m2391302690_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_7 = List_1_FindIndex_m1168129328(L_3, L_6, /*hidden argument*/List_1_FindIndex_m1168129328_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		List_1_t2585711361 * L_9 = __this->get_aroundMeList_20();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		List_1_RemoveAt_m3509344782(L_9, L_10, /*hidden argument*/List_1_RemoveAt_m3509344782_RuntimeMethod_var);
	}

IL_0038:
	{
		return;
	}
}
// System.Void PlayerController::InitDetectionTrigger()
extern "C"  void PlayerController_InitDetectionTrigger_m442008980 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_InitDetectionTrigger_m442008980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1773347010 * L_0 = __this->get_detectionTrigger_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Collider_t1773347010 * L_2 = __this->get_detectionTrigger_11();
		float L_3 = __this->get_triggerSize_12();
		NullCheck(((SphereCollider_t2077223608 *)IsInstSealed((RuntimeObject*)L_2, SphereCollider_t2077223608_il2cpp_TypeInfo_var)));
		SphereCollider_set_radius_m4130116958(((SphereCollider_t2077223608 *)IsInstSealed((RuntimeObject*)L_2, SphereCollider_t2077223608_il2cpp_TypeInfo_var)), L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void PlayerController::RotateObjectBaseOnTarget()
extern "C"  void PlayerController_RotateObjectBaseOnTarget_m2945554379 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_RotateObjectBaseOnTarget_m2945554379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		List_1_t2585711361 * L_0 = __this->get_aroundMeList_20();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2812834599(L_0, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		GameObject_t1113636619 * L_2 = PlayerController_GetMostClosedTarget_m172570197(__this, /*hidden argument*/NULL);
		__this->set_closeTarget_17(L_2);
		GameObject_t1113636619 * L_3 = __this->get_closeTarget_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0081;
		}
	}
	{
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_closeTarget_17();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = (&V_0)->get_x_1();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12 = (&V_1)->get_y_2();
		GameObject_t1113636619 * L_13 = __this->get_closeTarget_17();
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t3722313464  L_15 = Transform_get_position_m36019626(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = (&V_2)->get_z_3();
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), L_9, L_12, L_16, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_LookAt_m3649447396(L_5, L_17, /*hidden argument*/NULL);
	}

IL_0081:
	{
		return;
	}
}
// UnityEngine.GameObject PlayerController::GetMostClosedTarget()
extern "C"  GameObject_t1113636619 * PlayerController_GetMostClosedTarget_m172570197 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_GetMostClosedTarget_m172570197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		V_1 = (std::numeric_limits<float>::max());
		V_2 = (0.0f);
		V_3 = 0;
		goto IL_0056;
	}

IL_0015:
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		List_1_t2585711361 * L_2 = __this->get_aroundMeList_20();
		int32_t L_3 = V_3;
		NullCheck(L_2);
		GameObject_t1113636619 * L_4 = List_1_get_Item_m3743125852(L_2, L_3, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_7 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_1, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = V_2;
		float L_9 = V_1;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_0052;
		}
	}
	{
		float L_10 = V_2;
		V_1 = L_10;
		List_1_t2585711361 * L_11 = __this->get_aroundMeList_20();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		GameObject_t1113636619 * L_13 = List_1_get_Item_m3743125852(L_11, L_12, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		V_0 = L_13;
	}

IL_0052:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0056:
	{
		int32_t L_15 = V_3;
		List_1_t2585711361 * L_16 = __this->get_aroundMeList_20();
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m2812834599(L_16, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0015;
		}
	}
	{
		GameObject_t1113636619 * L_18 = V_0;
		return L_18;
	}
}
// System.Void PlayerController::MoveingAndRotation()
extern "C"  void PlayerController_MoveingAndRotation_m435555172 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_MoveingAndRotation_m435555172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_1 = __this->get_moveJoystick_9();
		NullCheck(L_1);
		float L_2 = Joystick_get_Vertical_m3105283820(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_5 = __this->get_moveJoystick_9();
		NullCheck(L_5);
		float L_6 = Joystick_get_Horizontal_m3614099306(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t3722313464  L_9 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_10 = __this->get_rotateJoystick_10();
		NullCheck(L_10);
		float L_11 = Joystick_get_Vertical_m3105283820(L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joystick_t9498292 * L_14 = __this->get_rotateJoystick_10();
		NullCheck(L_14);
		float L_15 = Joystick_get_Horizontal_m3614099306(L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_12, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Joystick_t9498292 * L_18 = __this->get_moveJoystick_9();
		NullCheck(L_18);
		float L_19 = Joystick_get_Vertical_m3105283820(L_18, /*hidden argument*/NULL);
		Joystick_t9498292 * L_20 = __this->get_moveJoystick_9();
		NullCheck(L_20);
		float L_21 = Joystick_get_Horizontal_m3614099306(L_20, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_2), L_19, (0.0f), L_21, /*hidden argument*/NULL);
		Joystick_t9498292 * L_22 = __this->get_rotateJoystick_10();
		NullCheck(L_22);
		float L_23 = Joystick_get_Vertical_m3105283820(L_22, /*hidden argument*/NULL);
		Joystick_t9498292 * L_24 = __this->get_rotateJoystick_10();
		NullCheck(L_24);
		float L_25 = Joystick_get_Horizontal_m3614099306(L_24, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_3), L_23, (0.0f), L_25, /*hidden argument*/NULL);
		Vector3_t3722313464  L_26 = V_2;
		Vector3_t3722313464  L_27 = V_3;
		float L_28 = Vector3_Angle_m3731191531(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		Vector3_t3722313464  L_29 = V_0;
		Vector3_t3722313464  L_30 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_31 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_01b2;
		}
	}
	{
		Vector3_t3722313464  L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_33 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_34 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_015e;
		}
	}
	{
		Transform_t3600365921 * L_35 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_36 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Quaternion_t2301928331  L_37 = Transform_get_rotation_m3502953881(L_36, /*hidden argument*/NULL);
		Vector3_t3722313464  L_38 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_39 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		float L_40 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_41 = __this->get_rotateSpeed_4();
		Quaternion_t2301928331  L_42 = Quaternion_Slerp_m1234055455(NULL /*static, unused*/, L_37, L_39, ((float)il2cpp_codegen_multiply((float)L_40, (float)L_41)), /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_rotation_m3524318132(L_35, L_42, /*hidden argument*/NULL);
		float L_43 = V_4;
		if ((!(((float)L_43) <= ((float)(90.0f)))))
		{
			goto IL_012d;
		}
	}
	{
		Transform_t3600365921 * L_44 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_45 = V_1;
		float L_46 = __this->get_moveSpeed_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_47 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		float L_48 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_49 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_Translate_m1990195114(L_44, L_49, 0, /*hidden argument*/NULL);
		goto IL_0159;
	}

IL_012d:
	{
		Transform_t3600365921 * L_50 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_51 = V_0;
		float L_52 = __this->get_moveSpeed_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_53 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		Vector3_t3722313464  L_54 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_53, (4.0f), /*hidden argument*/NULL);
		float L_55 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_56 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_Translate_m1990195114(L_50, L_56, 0, /*hidden argument*/NULL);
	}

IL_0159:
	{
		goto IL_01ad;
	}

IL_015e:
	{
		Transform_t3600365921 * L_57 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_58 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		Quaternion_t2301928331  L_59 = Transform_get_rotation_m3502953881(L_58, /*hidden argument*/NULL);
		Vector3_t3722313464  L_60 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_61 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
		float L_62 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_63 = __this->get_rotateSpeed_4();
		Quaternion_t2301928331  L_64 = Quaternion_Slerp_m1234055455(NULL /*static, unused*/, L_59, L_61, ((float)il2cpp_codegen_multiply((float)L_62, (float)L_63)), /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_rotation_m3524318132(L_57, L_64, /*hidden argument*/NULL);
		Transform_t3600365921 * L_65 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_66 = V_0;
		float L_67 = __this->get_moveSpeed_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_68 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_66, L_67, /*hidden argument*/NULL);
		float L_69 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_70 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_68, L_69, /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_Translate_m1990195114(L_65, L_70, 0, /*hidden argument*/NULL);
	}

IL_01ad:
	{
		goto IL_01ef;
	}

IL_01b2:
	{
		Vector3_t3722313464  L_71 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_72 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_73 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_71, L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_01ef;
		}
	}
	{
		Transform_t3600365921 * L_74 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_75 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_75);
		Quaternion_t2301928331  L_76 = Transform_get_rotation_m3502953881(L_75, /*hidden argument*/NULL);
		Vector3_t3722313464  L_77 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_78 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_77, /*hidden argument*/NULL);
		float L_79 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_80 = __this->get_rotateSpeed_4();
		Quaternion_t2301928331  L_81 = Quaternion_Slerp_m1234055455(NULL /*static, unused*/, L_76, L_78, ((float)il2cpp_codegen_multiply((float)L_79, (float)L_80)), /*hidden argument*/NULL);
		NullCheck(L_74);
		Transform_set_rotation_m3524318132(L_74, L_81, /*hidden argument*/NULL);
	}

IL_01ef:
	{
		Joystick_t9498292 * L_82 = __this->get_moveJoystick_9();
		NullCheck(L_82);
		float L_83 = Joystick_get_Vertical_m3105283820(L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_84 = fabsf(L_83);
		Joystick_t9498292 * L_85 = __this->get_moveJoystick_9();
		NullCheck(L_85);
		float L_86 = Joystick_get_Horizontal_m3614099306(L_85, /*hidden argument*/NULL);
		float L_87 = fabsf(L_86);
		float L_88 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (1.0f), ((float)il2cpp_codegen_add((float)L_84, (float)L_87)), /*hidden argument*/NULL);
		V_5 = L_88;
		Joystick_t9498292 * L_89 = __this->get_rotateJoystick_10();
		NullCheck(L_89);
		float L_90 = Joystick_get_Vertical_m3105283820(L_89, /*hidden argument*/NULL);
		float L_91 = fabsf(L_90);
		if ((((float)L_91) > ((float)(0.0f))))
		{
			goto IL_0255;
		}
	}
	{
		Joystick_t9498292 * L_92 = __this->get_rotateJoystick_10();
		NullCheck(L_92);
		float L_93 = Joystick_get_Horizontal_m3614099306(L_92, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_94 = fabsf(L_93);
		if ((!(((float)L_94) > ((float)(0.0f)))))
		{
			goto IL_0276;
		}
	}

IL_0255:
	{
		float L_95 = V_4;
		if ((!(((float)L_95) > ((float)(90.0f)))))
		{
			goto IL_0276;
		}
	}
	{
		Animator_t434523843 * L_96 = __this->get_m_animator_14();
		NullCheck(L_96);
		Animator_set_speed_m1181320995(L_96, (0.8f), /*hidden argument*/NULL);
		goto IL_02a4;
	}

IL_0276:
	{
		float L_97 = V_5;
		if ((!(((float)L_97) == ((float)(0.0f)))))
		{
			goto IL_0297;
		}
	}
	{
		Animator_t434523843 * L_98 = __this->get_m_animator_14();
		NullCheck(L_98);
		Animator_set_speed_m1181320995(L_98, (1.0f), /*hidden argument*/NULL);
		goto IL_02a4;
	}

IL_0297:
	{
		Animator_t434523843 * L_99 = __this->get_m_animator_14();
		float L_100 = V_5;
		NullCheck(L_99);
		Animator_set_speed_m1181320995(L_99, L_100, /*hidden argument*/NULL);
	}

IL_02a4:
	{
		Joystick_t9498292 * L_101 = __this->get_moveJoystick_9();
		NullCheck(L_101);
		float L_102 = Joystick_get_Vertical_m3105283820(L_101, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_103 = fabsf(L_102);
		if ((((float)L_103) > ((float)(0.05f))))
		{
			goto IL_02d8;
		}
	}
	{
		Joystick_t9498292 * L_104 = __this->get_moveJoystick_9();
		NullCheck(L_104);
		float L_105 = Joystick_get_Horizontal_m3614099306(L_104, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_106 = fabsf(L_105);
		if ((!(((float)L_106) > ((float)(0.05f)))))
		{
			goto IL_02e6;
		}
	}

IL_02d8:
	{
		float L_107 = V_4;
		PlayerController_ChangeAnimation_m339543989(__this, L_107, (bool)1, /*hidden argument*/NULL);
		goto IL_02ef;
	}

IL_02e6:
	{
		float L_108 = V_4;
		PlayerController_ChangeAnimation_m339543989(__this, L_108, (bool)0, /*hidden argument*/NULL);
	}

IL_02ef:
	{
		bool L_109 = __this->get_drawLine_13();
		if (!L_109)
		{
			goto IL_0300;
		}
	}
	{
		PlayerController_DrawLine_m506901979(__this, /*hidden argument*/NULL);
	}

IL_0300:
	{
		return;
	}
}
// System.Void PlayerController::DrawLine()
extern "C"  void PlayerController_DrawLine_m506901979 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_DrawLine_m506901979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LineRenderer_t3154350270 * L_0 = __this->get_lineRenderer_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0065;
		}
	}
	{
		LineRenderer_t3154350270 * L_2 = __this->get_lineRenderer_21();
		NullCheck(L_2);
		LineRenderer_SetVertexCount_m2434880629(L_2, 2, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_3 = __this->get_lineRenderer_21();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		LineRenderer_SetPosition_m2111131184(L_3, 0, L_5, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_6 = __this->get_lineRenderer_21();
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_forward_m747522392(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_8, (10.0f), /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		LineRenderer_SetPosition_m2111131184(L_6, 1, L_12, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void PlayerController::ChangeAnimation(System.Single,System.Boolean)
extern "C"  void PlayerController_ChangeAnimation_m339543989 (PlayerController_t2064355688 * __this, float ___angle0, bool ___moving1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___moving1;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		float L_1 = ___angle0;
		if ((!(((float)L_1) <= ((float)(90.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = AnimationState_get_RUN_m936729998(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlayerController_SetAnimation_m1099564868(__this, L_2, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_0021:
	{
		String_t* L_3 = AnimationState_get_BACK_m2195162337(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlayerController_SetAnimation_m1099564868(__this, L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		goto IL_003c;
	}

IL_0031:
	{
		String_t* L_4 = AnimationState_get_IDLE_m2992949454(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlayerController_SetAnimation_m1099564868(__this, L_4, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void PlayerController::SetAnimation(System.String)
extern "C"  void PlayerController_SetAnimation_m1099564868 (PlayerController_t2064355688 * __this, String_t* ___aniName0, const RuntimeMethod* method)
{
	AnimatorStateInfo_t509032636  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_t434523843 * L_0 = __this->get_m_animator_14();
		NullCheck(L_0);
		AnimatorStateInfo_t509032636  L_1 = Animator_GetCurrentAnimatorStateInfo_m18694920(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___aniName0;
		bool L_3 = AnimatorStateInfo_IsName_m3393819976((AnimatorStateInfo_t509032636 *)(&V_0), L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		Animator_t434523843 * L_4 = __this->get_m_animator_14();
		NullCheck(L_4);
		bool L_5 = Animator_IsInTransition_m2711427730(L_4, 0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		Animator_t434523843 * L_6 = __this->get_m_animator_14();
		String_t* L_7 = ___aniName0;
		NullCheck(L_6);
		Animator_SetTrigger_m2134052629(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void PlayerController::ShootSwitcher(System.Boolean)
extern "C"  void PlayerController_ShootSwitcher_m3086803701 (PlayerController_t2064355688 * __this, bool ___status0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___status0;
		__this->set_shooting_19(L_0);
		return;
	}
}
// System.Void PlayerController::Shoot()
extern "C"  void PlayerController_Shoot_m3174924244 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Shoot_m3174924244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_shootTimeCount_18();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_shootTimeCount_18(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		float L_2 = __this->get_shootTimeCount_18();
		float L_3 = __this->get_shootSpeed_8();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0065;
		}
	}
	{
		Animator_t434523843 * L_4 = __this->get_m_animator_14();
		String_t* L_5 = AnimationState_get_SHOOT_m1083791399(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = __this->get_transitionDuration_5();
		NullCheck(L_4);
		Animator_CrossFadeInFixedTime_m1909546330(L_4, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t677613222_il2cpp_TypeInfo_var);
		BulletSpawner_t3795733773 * L_7 = Singleton_1_get_Instance_m229738282(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m229738282_RuntimeMethod_var);
		Transform_t3600365921 * L_8 = __this->get_bulletBornPos_6();
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t2301928331  L_11 = Transform_get_rotation_m3502953881(L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		BulletSpawner_Spawn_m1096849015(L_7, L_9, L_11, /*hidden argument*/NULL);
		__this->set_shootTimeCount_18((0.0f));
	}

IL_0065:
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
// System.Void PlayerController/<OnTriggerExit>c__AnonStorey0::.ctor()
extern "C"  void U3COnTriggerExitU3Ec__AnonStorey0__ctor_m1254506306 (U3COnTriggerExitU3Ec__AnonStorey0_t2021806301 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PlayerController/<OnTriggerExit>c__AnonStorey0::<>m__0(UnityEngine.GameObject)
extern "C"  bool U3COnTriggerExitU3Ec__AnonStorey0_U3CU3Em__0_m3352742767 (U3COnTriggerExitU3Ec__AnonStorey0_t2021806301 * __this, GameObject_t1113636619 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnTriggerExitU3Ec__AnonStorey0_U3CU3Em__0_m3352742767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___x0;
		Collider_t1773347010 * L_1 = __this->get_other_0();
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.String PlayerController/AnimationState::get_IDLE()
extern "C"  String_t* AnimationState_get_IDLE_m2992949454 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationState_get_IDLE_m2992949454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1628612613;
	}
}
// System.String PlayerController/AnimationState::get_RUN()
extern "C"  String_t* AnimationState_get_RUN_m936729998 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationState_get_RUN_m936729998_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral4073296194;
	}
}
// System.String PlayerController/AnimationState::get_BACK()
extern "C"  String_t* AnimationState_get_BACK_m2195162337 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationState_get_BACK_m2195162337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1167841337;
	}
}
// System.String PlayerController/AnimationState::get_SHOOT()
extern "C"  String_t* AnimationState_get_SHOOT_m1083791399 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationState_get_SHOOT_m1083791399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1198113798;
	}
}
// System.String PlayerController/AnimationState::get_DEPTH()
extern "C"  String_t* AnimationState_get_DEPTH_m3494441815 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationState_get_DEPTH_m3494441815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3141791012;
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
// System.Void VariableJoystick::.ctor()
extern "C"  void VariableJoystick__ctor_m1597116632 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick__ctor_m1597116632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isFixed_7((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_joystickCenter_9(L_0);
		Joystick__ctor_m1272315817(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::Start()
extern "C"  void VariableJoystick_Start_m900724618 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isFixed_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		VariableJoystick_OnFixed_m4141959043(__this, /*hidden argument*/NULL);
		goto IL_001c;
	}

IL_0016:
	{
		VariableJoystick_OnFloat_m165815926(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void VariableJoystick::ChangeFixed(System.Boolean)
extern "C"  void VariableJoystick_ChangeFixed_m3111545193 (VariableJoystick_t2643911586 * __this, bool ___joystickFixed0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___joystickFixed0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		VariableJoystick_OnFixed_m4141959043(__this, /*hidden argument*/NULL);
		goto IL_0017;
	}

IL_0011:
	{
		VariableJoystick_OnFloat_m165815926(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		bool L_1 = ___joystickFixed0;
		__this->set_isFixed_7(L_1);
		return;
	}
}
// System.Void VariableJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VariableJoystick_OnDrag_m3080315221 (VariableJoystick_t2643911586 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnDrag_m3080315221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	VariableJoystick_t2643911586 * G_B2_0 = NULL;
	VariableJoystick_t2643911586 * G_B1_0 = NULL;
	Vector2_t2156229523  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	VariableJoystick_t2643911586 * G_B3_1 = NULL;
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = __this->get_joystickCenter_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_5 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = RectTransform_get_sizeDelta_m2183112744(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_x_0();
		G_B1_0 = __this;
		if ((!(((float)L_4) > ((float)((float)((float)L_7/(float)(2.0f)))))))
		{
			G_B2_0 = __this;
			goto IL_0044;
		}
	}
	{
		Vector2_t2156229523  L_8 = Vector2_get_normalized_m2683665860((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_0063;
	}

IL_0044:
	{
		Vector2_t2156229523  L_9 = V_0;
		RectTransform_t3704657025 * L_10 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = RectTransform_get_sizeDelta_m2183112744(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = (&V_2)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_13 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_9, ((float)((float)L_12/(float)(2.0f))), /*hidden argument*/NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B2_0;
	}

IL_0063:
	{
		NullCheck(G_B3_1);
		((Joystick_t9498292 *)G_B3_1)->set_inputVector_4(G_B3_0);
		Joystick_ClampJoystick_m2501349361(__this, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_14 = ((Joystick_t9498292 *)__this)->get_handle_6();
		Vector2_t2156229523  L_15 = ((Joystick_t9498292 *)__this)->get_inputVector_4();
		RectTransform_t3704657025 * L_16 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = RectTransform_get_sizeDelta_m2183112744(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = (&V_3)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_19 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		Vector2_t2156229523  L_20 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_19, (2.0f), /*hidden argument*/NULL);
		float L_21 = ((Joystick_t9498292 *)__this)->get_handleLimit_2();
		Vector2_t2156229523  L_22 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m4126691837(L_14, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VariableJoystick_OnPointerDown_m4235218688 (VariableJoystick_t2643911586 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnPointerDown_m4235218688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isFixed_7();
		if (L_0)
		{
			goto IL_004e;
		}
	}
	{
		RectTransform_t3704657025 * L_1 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_3 = ((Joystick_t9498292 *)__this)->get_background_5();
		PointerEventData_t3807901092 * L_4 = ___eventData0;
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = PointerEventData_get_position_m437660275(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_m3387557959(L_3, L_6, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_7 = ((Joystick_t9498292 *)__this)->get_handle_6();
		Vector2_t2156229523  L_8 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_set_anchoredPosition_m4126691837(L_7, L_8, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_9 = ___eventData0;
		NullCheck(L_9);
		Vector2_t2156229523  L_10 = PointerEventData_get_position_m437660275(L_9, /*hidden argument*/NULL);
		__this->set_joystickCenter_9(L_10);
	}

IL_004e:
	{
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VariableJoystick_OnPointerUp_m3792644295 (VariableJoystick_t2643911586 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnPointerUp_m3792644295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isFixed_7();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		RectTransform_t3704657025 * L_1 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Joystick_t9498292 *)__this)->set_inputVector_4(L_3);
		RectTransform_t3704657025 * L_4 = ((Joystick_t9498292 *)__this)->get_handle_6();
		Vector2_t2156229523  L_5 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_anchoredPosition_m4126691837(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::OnFixed()
extern "C"  void VariableJoystick_OnFixed_m4141959043 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnFixed_m4141959043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0 = __this->get_fixedScreenPosition_8();
		__this->set_joystickCenter_9(L_0);
		RectTransform_t3704657025 * L_1 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_3 = ((Joystick_t9498292 *)__this)->get_handle_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m4126691837(L_3, L_4, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_5 = ((Joystick_t9498292 *)__this)->get_background_5();
		Vector2_t2156229523  L_6 = __this->get_fixedScreenPosition_8();
		NullCheck(L_5);
		RectTransform_set_anchoredPosition_m4126691837(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::OnFloat()
extern "C"  void VariableJoystick_OnFloat_m165815926 (VariableJoystick_t2643911586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_OnFloat_m165815926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = ((Joystick_t9498292 *)__this)->get_handle_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m4126691837(L_0, L_1, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_2 = ((Joystick_t9498292 *)__this)->get_background_5();
		NullCheck(L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
