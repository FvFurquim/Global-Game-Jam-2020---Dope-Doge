#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// IMoveBehaviour[]
struct IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Bonk
struct Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C;
// BoxBehaviour
struct BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CheckCollider
struct CheckCollider_t4F11163FAA28DC2CD18E7410E36EA20DF6AA2EA3;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DoubleJump
struct DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4;
// Empty
struct Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3;
// EndLevel
struct EndLevel_tC1CDE7523D4661BB0C070D85B20DB22E2D614586;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GridGravity
struct GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// IMoveBehaviour
struct IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InstantiateGambiarra
struct InstantiateGambiarra_tE692EE94BFB1BD4D7454CC1CA5EC0D10150BBEE2;
// Jump
struct Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A;
// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MoveLeft
struct MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD;
// MoveRight
struct MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354;
// MovementController
struct MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SkipCutscene
struct SkipCutscene_t673D0813A861FD50AB23F46B946D20938C0311F2;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Trash
struct Trash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// disable
struct disable_tF01F3CE4364395995F3831A7A11D3589E18E02E8;
// exitGame
struct exitGame_t8FA808C41EE6B10E1E7F31E226B06EEB7FFBF21F;
// funcoesDeMovimento
struct funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5;
// mostrarItens
struct mostrarItens_t61AA2100C988C5E54706B4FE14041D97ADC07066;
// nextLevel
struct nextLevel_t59DFA086408AC6B6B0D238904C37A2E5CD4846F7;
// trocarCursor
struct trocarCursor_t3FAC9E3829225CDB77DABB4DA5C06300A37E8674;
// videoTerminou
struct videoTerminou_t3CABE41A65271F95906BE307EA34A1AFC4FF1257;
// voltarAoMenu
struct voltarAoMenu_t753BB2DCBD387327CEFB0169656FAD1431CF8F7E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PlayerMovement/<ChangeMove>d__11
struct U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274;
// PlayerMovement/<waitForKeyPress>d__12
struct U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8;

IL2CPP_EXTERN_C RuntimeClass* Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____7FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895;
IL2CPP_EXTERN_C String_t* _stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral427DA1531752318F714978CE07403919B437E29F;
IL2CPP_EXTERN_C String_t* _stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50;
IL2CPP_EXTERN_C String_t* _stringLiteral76AD4AEAB8DD84DD3D79886D20A26860A1C9CCE7;
IL2CPP_EXTERN_C String_t* _stringLiteral7E3655DE7AC66259BA139AC74F09D02B44ABE755;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9056648175E205DDD0F4E9F14BC2000731E74DC7;
IL2CPP_EXTERN_C String_t* _stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B;
IL2CPP_EXTERN_C String_t* _stringLiteral9CB088E5ADDB19B3769CA5EE24809765C5648A07;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81;
IL2CPP_EXTERN_C String_t* _stringLiteralBA910F1B68F1D365059112B8F3C68C2AFE0DEB27;
IL2CPP_EXTERN_C String_t* _stringLiteralCCF10E1B7CC4A1872D2F6E661C9128B3823D1A38;
IL2CPP_EXTERN_C String_t* _stringLiteralFFE83BCAF65075368BDB82322ADA7CF5A6A57B29;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_mD3D7EAE10398E2B6F7BA475D7564FF6465E3D2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m39A7A964518F91CC060E4BB947EC003B1E21FD4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_m2AD09AE2265BF75D8C137DC0DE96920C4C7F0622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_m59B7C8C8B1387CE86B93403312B8EE70B46294A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTrash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509_m76B335FF54768965DD2111BCF5157C5BDC6B6036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisfuncoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5_m2219925BA114A27A83AB0E97778E03AC54B9E50B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeMoveU3Ed__11_System_Collections_IEnumerator_Reset_m7B4AACDC68C01945737EB73AB475C812E17A7326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwaitForKeyPressU3Ed__12_System_Collections_IEnumerator_Reset_m903EC91743CC9680758E04E54E5B39512471DE2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Empty
struct  Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// PlayerMovement/<ChangeMove>d__11
struct  U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274  : public RuntimeObject
{
public:
	// System.Int32 PlayerMovement/<ChangeMove>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerMovement/<ChangeMove>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerMovement PlayerMovement/<ChangeMove>d__11::<>4__this
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___U3CU3E4__this_2;
	// UnityEngine.Collider2D PlayerMovement/<ChangeMove>d__11::col2d
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col2d_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274, ___U3CU3E4__this_2)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_col2d_3() { return static_cast<int32_t>(offsetof(U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274, ___col2d_3)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_col2d_3() const { return ___col2d_3; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_col2d_3() { return &___col2d_3; }
	inline void set_col2d_3(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___col2d_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___col2d_3), (void*)value);
	}
};


// PlayerMovement/<waitForKeyPress>d__12
struct  U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D  : public RuntimeObject
{
public:
	// System.Int32 PlayerMovement/<waitForKeyPress>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerMovement/<waitForKeyPress>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerMovement PlayerMovement/<waitForKeyPress>d__12::<>4__this
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___U3CU3E4__this_2;
	// UnityEngine.Collider2D PlayerMovement/<waitForKeyPress>d__12::col2d
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col2d_3;
	// System.Boolean PlayerMovement/<waitForKeyPress>d__12::<done>5__2
	bool ___U3CdoneU3E5__2_4;
	// System.Int32 PlayerMovement/<waitForKeyPress>d__12::<pos>5__3
	int32_t ___U3CposU3E5__3_5;
	// System.Single PlayerMovement/<waitForKeyPress>d__12::<delayTime>5__4
	float ___U3CdelayTimeU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D, ___U3CU3E4__this_2)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_col2d_3() { return static_cast<int32_t>(offsetof(U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D, ___col2d_3)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_col2d_3() const { return ___col2d_3; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_col2d_3() { return &___col2d_3; }
	inline void set_col2d_3(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___col2d_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___col2d_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdoneU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D, ___U3CdoneU3E5__2_4)); }
	inline bool get_U3CdoneU3E5__2_4() const { return ___U3CdoneU3E5__2_4; }
	inline bool* get_address_of_U3CdoneU3E5__2_4() { return &___U3CdoneU3E5__2_4; }
	inline void set_U3CdoneU3E5__2_4(bool value)
	{
		___U3CdoneU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CposU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D, ___U3CposU3E5__3_5)); }
	inline int32_t get_U3CposU3E5__3_5() const { return ___U3CposU3E5__3_5; }
	inline int32_t* get_address_of_U3CposU3E5__3_5() { return &___U3CposU3E5__3_5; }
	inline void set_U3CposU3E5__3_5(int32_t value)
	{
		___U3CposU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CdelayTimeU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D, ___U3CdelayTimeU3E5__4_6)); }
	inline float get_U3CdelayTimeU3E5__4_6() const { return ___U3CdelayTimeU3E5__4_6; }
	inline float* get_address_of_U3CdelayTimeU3E5__4_6() { return &___U3CdelayTimeU3E5__4_6; }
	inline void set_U3CdelayTimeU3E5__4_6(float value)
	{
		___U3CdelayTimeU3E5__4_6 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D24
struct  __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2__padding[24];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D24 <PrivateImplementationDetails>::7FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220
	__StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2  ___7FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0;

public:
	inline static int32_t get_offset_of_U37FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___7FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0)); }
	inline __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2  get_U37FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0() const { return ___7FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0; }
	inline __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2 * get_address_of_U37FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0() { return &___7FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0; }
	inline void set_U37FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0(__StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2  value)
	{
		___7FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorMode
struct  CursorMode_t7E5099ADC88D7CC5EAD437FFD4A8DF4622DA6FC2 
{
public:
	// System.Int32 UnityEngine.CursorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorMode_t7E5099ADC88D7CC5EAD437FFD4A8DF4622DA6FC2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___prepareCompleted_4)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___loopPointReached_5)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___started_6)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_started_6() const { return ___started_6; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameDropped_7)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___errorReceived_8)); }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___seekCompleted_9)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameReady_11)); }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};


// Bonk
struct  Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Bonk::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// funcoesDeMovimento Bonk::funcs
	funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * ___funcs_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_funcs_5() { return static_cast<int32_t>(offsetof(Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C, ___funcs_5)); }
	inline funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * get_funcs_5() const { return ___funcs_5; }
	inline funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 ** get_address_of_funcs_5() { return &___funcs_5; }
	inline void set_funcs_5(funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * value)
	{
		___funcs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___funcs_5), (void*)value);
	}
};


// BoxBehaviour
struct  BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BoxBehaviour::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// System.Single BoxBehaviour::moveSpeed
	float ___moveSpeed_5;
	// UnityEngine.Transform BoxBehaviour::movePoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___movePoint_6;
	// UnityEngine.GameObject BoxBehaviour::prefabBox
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabBox_7;
	// UnityEngine.GameObject BoxBehaviour::prefabBoxMove
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabBoxMove_8;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}

	inline static int32_t get_offset_of_movePoint_6() { return static_cast<int32_t>(offsetof(BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0, ___movePoint_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_movePoint_6() const { return ___movePoint_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_movePoint_6() { return &___movePoint_6; }
	inline void set_movePoint_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___movePoint_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movePoint_6), (void*)value);
	}

	inline static int32_t get_offset_of_prefabBox_7() { return static_cast<int32_t>(offsetof(BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0, ___prefabBox_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabBox_7() const { return ___prefabBox_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabBox_7() { return &___prefabBox_7; }
	inline void set_prefabBox_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabBox_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabBox_7), (void*)value);
	}

	inline static int32_t get_offset_of_prefabBoxMove_8() { return static_cast<int32_t>(offsetof(BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0, ___prefabBoxMove_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabBoxMove_8() const { return ___prefabBoxMove_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabBoxMove_8() { return &___prefabBoxMove_8; }
	inline void set_prefabBoxMove_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabBoxMove_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabBoxMove_8), (void*)value);
	}
};


// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// CheckCollider
struct  CheckCollider_t4F11163FAA28DC2CD18E7410E36EA20DF6AA2EA3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CheckCollider::endHud
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___endHud_4;

public:
	inline static int32_t get_offset_of_endHud_4() { return static_cast<int32_t>(offsetof(CheckCollider_t4F11163FAA28DC2CD18E7410E36EA20DF6AA2EA3, ___endHud_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_endHud_4() const { return ___endHud_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_endHud_4() { return &___endHud_4; }
	inline void set_endHud_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___endHud_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endHud_4), (void*)value);
	}
};


// DoubleJump
struct  DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject DoubleJump::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.Vector3 DoubleJump::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_5;
	// System.Int32 DoubleJump::numJumps
	int32_t ___numJumps_6;
	// System.Single DoubleJump::delayTime
	float ___delayTime_7;
	// System.Boolean DoubleJump::alreadyZero
	bool ___alreadyZero_8;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4, ___direction_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_5() const { return ___direction_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_5 = value;
	}

	inline static int32_t get_offset_of_numJumps_6() { return static_cast<int32_t>(offsetof(DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4, ___numJumps_6)); }
	inline int32_t get_numJumps_6() const { return ___numJumps_6; }
	inline int32_t* get_address_of_numJumps_6() { return &___numJumps_6; }
	inline void set_numJumps_6(int32_t value)
	{
		___numJumps_6 = value;
	}

	inline static int32_t get_offset_of_delayTime_7() { return static_cast<int32_t>(offsetof(DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4, ___delayTime_7)); }
	inline float get_delayTime_7() const { return ___delayTime_7; }
	inline float* get_address_of_delayTime_7() { return &___delayTime_7; }
	inline void set_delayTime_7(float value)
	{
		___delayTime_7 = value;
	}

	inline static int32_t get_offset_of_alreadyZero_8() { return static_cast<int32_t>(offsetof(DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4, ___alreadyZero_8)); }
	inline bool get_alreadyZero_8() const { return ___alreadyZero_8; }
	inline bool* get_address_of_alreadyZero_8() { return &___alreadyZero_8; }
	inline void set_alreadyZero_8(bool value)
	{
		___alreadyZero_8 = value;
	}
};


// EndLevel
struct  EndLevel_tC1CDE7523D4661BB0C070D85B20DB22E2D614586  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GridGravity
struct  GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 GridGravity::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_4;
	// UnityEngine.BoxCollider2D GridGravity::col
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___col_5;
	// UnityEngine.Vector3 GridGravity::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_6;
	// UnityEngine.Collider2D GridGravity::col2d
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col2d_7;
	// System.Single GridGravity::onAirTime
	float ___onAirTime_8;
	// System.Boolean GridGravity::onAir
	bool ___onAir_9;
	// System.Boolean GridGravity::hasMovedOnAir
	bool ___hasMovedOnAir_10;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB, ___direction_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_4() const { return ___direction_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_col_5() { return static_cast<int32_t>(offsetof(GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB, ___col_5)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_col_5() const { return ___col_5; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_col_5() { return &___col_5; }
	inline void set_col_5(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___col_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___col_5), (void*)value);
	}

	inline static int32_t get_offset_of_pos_6() { return static_cast<int32_t>(offsetof(GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB, ___pos_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_6() const { return ___pos_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_6() { return &___pos_6; }
	inline void set_pos_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_6 = value;
	}

	inline static int32_t get_offset_of_col2d_7() { return static_cast<int32_t>(offsetof(GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB, ___col2d_7)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_col2d_7() const { return ___col2d_7; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_col2d_7() { return &___col2d_7; }
	inline void set_col2d_7(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___col2d_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___col2d_7), (void*)value);
	}

	inline static int32_t get_offset_of_onAirTime_8() { return static_cast<int32_t>(offsetof(GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB, ___onAirTime_8)); }
	inline float get_onAirTime_8() const { return ___onAirTime_8; }
	inline float* get_address_of_onAirTime_8() { return &___onAirTime_8; }
	inline void set_onAirTime_8(float value)
	{
		___onAirTime_8 = value;
	}

	inline static int32_t get_offset_of_onAir_9() { return static_cast<int32_t>(offsetof(GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB, ___onAir_9)); }
	inline bool get_onAir_9() const { return ___onAir_9; }
	inline bool* get_address_of_onAir_9() { return &___onAir_9; }
	inline void set_onAir_9(bool value)
	{
		___onAir_9 = value;
	}

	inline static int32_t get_offset_of_hasMovedOnAir_10() { return static_cast<int32_t>(offsetof(GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB, ___hasMovedOnAir_10)); }
	inline bool get_hasMovedOnAir_10() const { return ___hasMovedOnAir_10; }
	inline bool* get_address_of_hasMovedOnAir_10() { return &___hasMovedOnAir_10; }
	inline void set_hasMovedOnAir_10(bool value)
	{
		___hasMovedOnAir_10 = value;
	}
};


// InstantiateGambiarra
struct  InstantiateGambiarra_tE692EE94BFB1BD4D7454CC1CA5EC0D10150BBEE2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Jump
struct  Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Jump::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.Vector3 Jump::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A, ___direction_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_5() const { return ___direction_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_5 = value;
	}
};


// MainMenu
struct  MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MainMenu::HUD
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HUD_4;

public:
	inline static int32_t get_offset_of_HUD_4() { return static_cast<int32_t>(offsetof(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C, ___HUD_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HUD_4() const { return ___HUD_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HUD_4() { return &___HUD_4; }
	inline void set_HUD_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HUD_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HUD_4), (void*)value);
	}
};


// MoveLeft
struct  MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MoveLeft::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// funcoesDeMovimento MoveLeft::funcs
	funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * ___funcs_5;
	// UnityEngine.Vector3 MoveLeft::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_6;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_funcs_5() { return static_cast<int32_t>(offsetof(MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD, ___funcs_5)); }
	inline funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * get_funcs_5() const { return ___funcs_5; }
	inline funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 ** get_address_of_funcs_5() { return &___funcs_5; }
	inline void set_funcs_5(funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * value)
	{
		___funcs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___funcs_5), (void*)value);
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD, ___direction_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_6() const { return ___direction_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_6 = value;
	}
};


// MoveRight
struct  MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MoveRight::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// funcoesDeMovimento MoveRight::funcs
	funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * ___funcs_5;
	// UnityEngine.Vector3 MoveRight::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_6;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_funcs_5() { return static_cast<int32_t>(offsetof(MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354, ___funcs_5)); }
	inline funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * get_funcs_5() const { return ___funcs_5; }
	inline funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 ** get_address_of_funcs_5() { return &___funcs_5; }
	inline void set_funcs_5(funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * value)
	{
		___funcs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___funcs_5), (void*)value);
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354, ___direction_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_6() const { return ___direction_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_6 = value;
	}
};


// MovementController
struct  MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 MovementController::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_4;
	// System.Boolean MovementController::hasMoved
	bool ___hasMoved_5;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___direction_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_4() const { return ___direction_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_hasMoved_5() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___hasMoved_5)); }
	inline bool get_hasMoved_5() const { return ___hasMoved_5; }
	inline bool* get_address_of_hasMoved_5() { return &___hasMoved_5; }
	inline void set_hasMoved_5(bool value)
	{
		___hasMoved_5 = value;
	}
};


// PauseMenu
struct  PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PauseMenu::pauseMenuUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseMenuUI_5;

public:
	inline static int32_t get_offset_of_pauseMenuUI_5() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___pauseMenuUI_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseMenuUI_5() const { return ___pauseMenuUI_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseMenuUI_5() { return &___pauseMenuUI_5; }
	inline void set_pauseMenuUI_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseMenuUI_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenuUI_5), (void*)value);
	}
};

struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields
{
public:
	// System.Boolean PauseMenu::isPaused
	bool ___isPaused_4;

public:
	inline static int32_t get_offset_of_isPaused_4() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields, ___isPaused_4)); }
	inline bool get_isPaused_4() const { return ___isPaused_4; }
	inline bool* get_address_of_isPaused_4() { return &___isPaused_4; }
	inline void set_isPaused_4(bool value)
	{
		___isPaused_4 = value;
	}
};


// PlayerMovement
struct  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlayerMovement::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Transform PlayerMovement::movePoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___movePoint_5;
	// System.Boolean PlayerMovement::hasMoved
	bool ___hasMoved_6;
	// System.Boolean PlayerMovement::enable
	bool ___enable_7;
	// IMoveBehaviour[] PlayerMovement::mvs
	IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* ___mvs_8;
	// UnityEngine.GameObject[] PlayerMovement::mvsObj
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___mvsObj_9;
	// UnityEngine.KeyCode[] PlayerMovement::key
	KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* ___key_10;
	// UnityEngine.GameObject PlayerMovement::bonk
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bonk_11;
	// UnityEngine.GameObject PlayerMovement::bonkSmoke
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bonkSmoke_12;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_movePoint_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___movePoint_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_movePoint_5() const { return ___movePoint_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_movePoint_5() { return &___movePoint_5; }
	inline void set_movePoint_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___movePoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movePoint_5), (void*)value);
	}

	inline static int32_t get_offset_of_hasMoved_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___hasMoved_6)); }
	inline bool get_hasMoved_6() const { return ___hasMoved_6; }
	inline bool* get_address_of_hasMoved_6() { return &___hasMoved_6; }
	inline void set_hasMoved_6(bool value)
	{
		___hasMoved_6 = value;
	}

	inline static int32_t get_offset_of_enable_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___enable_7)); }
	inline bool get_enable_7() const { return ___enable_7; }
	inline bool* get_address_of_enable_7() { return &___enable_7; }
	inline void set_enable_7(bool value)
	{
		___enable_7 = value;
	}

	inline static int32_t get_offset_of_mvs_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___mvs_8)); }
	inline IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* get_mvs_8() const { return ___mvs_8; }
	inline IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68** get_address_of_mvs_8() { return &___mvs_8; }
	inline void set_mvs_8(IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* value)
	{
		___mvs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mvs_8), (void*)value);
	}

	inline static int32_t get_offset_of_mvsObj_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___mvsObj_9)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_mvsObj_9() const { return ___mvsObj_9; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_mvsObj_9() { return &___mvsObj_9; }
	inline void set_mvsObj_9(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___mvsObj_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mvsObj_9), (void*)value);
	}

	inline static int32_t get_offset_of_key_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___key_10)); }
	inline KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* get_key_10() const { return ___key_10; }
	inline KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871** get_address_of_key_10() { return &___key_10; }
	inline void set_key_10(KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* value)
	{
		___key_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_10), (void*)value);
	}

	inline static int32_t get_offset_of_bonk_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___bonk_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bonk_11() const { return ___bonk_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bonk_11() { return &___bonk_11; }
	inline void set_bonk_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bonk_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bonk_11), (void*)value);
	}

	inline static int32_t get_offset_of_bonkSmoke_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___bonkSmoke_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bonkSmoke_12() const { return ___bonkSmoke_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bonkSmoke_12() { return &___bonkSmoke_12; }
	inline void set_bonkSmoke_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bonkSmoke_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bonkSmoke_12), (void*)value);
	}
};


// SkipCutscene
struct  SkipCutscene_t673D0813A861FD50AB23F46B946D20938C0311F2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single SkipCutscene::delayTime
	float ___delayTime_4;

public:
	inline static int32_t get_offset_of_delayTime_4() { return static_cast<int32_t>(offsetof(SkipCutscene_t673D0813A861FD50AB23F46B946D20938C0311F2, ___delayTime_4)); }
	inline float get_delayTime_4() const { return ___delayTime_4; }
	inline float* get_address_of_delayTime_4() { return &___delayTime_4; }
	inline void set_delayTime_4(float value)
	{
		___delayTime_4 = value;
	}
};


// Trash
struct  Trash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// disable
struct  disable_tF01F3CE4364395995F3831A7A11D3589E18E02E8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject disable::branco
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___branco_4;

public:
	inline static int32_t get_offset_of_branco_4() { return static_cast<int32_t>(offsetof(disable_tF01F3CE4364395995F3831A7A11D3589E18E02E8, ___branco_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_branco_4() const { return ___branco_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_branco_4() { return &___branco_4; }
	inline void set_branco_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___branco_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___branco_4), (void*)value);
	}
};


// exitGame
struct  exitGame_t8FA808C41EE6B10E1E7F31E226B06EEB7FFBF21F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// funcoesDeMovimento
struct  funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// mostrarItens
struct  mostrarItens_t61AA2100C988C5E54706B4FE14041D97ADC07066  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject mostrarItens::doge
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___doge_4;
	// PlayerMovement mostrarItens::src
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___src_5;
	// UnityEngine.GameObject[] mostrarItens::slots
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___slots_6;
	// UnityEngine.UI.Image[] mostrarItens::srp
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___srp_7;

public:
	inline static int32_t get_offset_of_doge_4() { return static_cast<int32_t>(offsetof(mostrarItens_t61AA2100C988C5E54706B4FE14041D97ADC07066, ___doge_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_doge_4() const { return ___doge_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_doge_4() { return &___doge_4; }
	inline void set_doge_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___doge_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___doge_4), (void*)value);
	}

	inline static int32_t get_offset_of_src_5() { return static_cast<int32_t>(offsetof(mostrarItens_t61AA2100C988C5E54706B4FE14041D97ADC07066, ___src_5)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_src_5() const { return ___src_5; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_src_5() { return &___src_5; }
	inline void set_src_5(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___src_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___src_5), (void*)value);
	}

	inline static int32_t get_offset_of_slots_6() { return static_cast<int32_t>(offsetof(mostrarItens_t61AA2100C988C5E54706B4FE14041D97ADC07066, ___slots_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_slots_6() const { return ___slots_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_slots_6() { return &___slots_6; }
	inline void set_slots_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___slots_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slots_6), (void*)value);
	}

	inline static int32_t get_offset_of_srp_7() { return static_cast<int32_t>(offsetof(mostrarItens_t61AA2100C988C5E54706B4FE14041D97ADC07066, ___srp_7)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_srp_7() const { return ___srp_7; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_srp_7() { return &___srp_7; }
	inline void set_srp_7(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___srp_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___srp_7), (void*)value);
	}
};


// nextLevel
struct  nextLevel_t59DFA086408AC6B6B0D238904C37A2E5CD4846F7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator nextLevel::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;
	// System.Single nextLevel::delayTime
	float ___delayTime_5;
	// System.Boolean nextLevel::isPet
	bool ___isPet_6;
	// UnityEngine.GameObject nextLevel::HUD
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HUD_7;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(nextLevel_t59DFA086408AC6B6B0D238904C37A2E5CD4846F7, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}

	inline static int32_t get_offset_of_delayTime_5() { return static_cast<int32_t>(offsetof(nextLevel_t59DFA086408AC6B6B0D238904C37A2E5CD4846F7, ___delayTime_5)); }
	inline float get_delayTime_5() const { return ___delayTime_5; }
	inline float* get_address_of_delayTime_5() { return &___delayTime_5; }
	inline void set_delayTime_5(float value)
	{
		___delayTime_5 = value;
	}

	inline static int32_t get_offset_of_isPet_6() { return static_cast<int32_t>(offsetof(nextLevel_t59DFA086408AC6B6B0D238904C37A2E5CD4846F7, ___isPet_6)); }
	inline bool get_isPet_6() const { return ___isPet_6; }
	inline bool* get_address_of_isPet_6() { return &___isPet_6; }
	inline void set_isPet_6(bool value)
	{
		___isPet_6 = value;
	}

	inline static int32_t get_offset_of_HUD_7() { return static_cast<int32_t>(offsetof(nextLevel_t59DFA086408AC6B6B0D238904C37A2E5CD4846F7, ___HUD_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HUD_7() const { return ___HUD_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HUD_7() { return &___HUD_7; }
	inline void set_HUD_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HUD_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HUD_7), (void*)value);
	}
};


// trocarCursor
struct  trocarCursor_t3FAC9E3829225CDB77DABB4DA5C06300A37E8674  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D trocarCursor::seta
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___seta_4;

public:
	inline static int32_t get_offset_of_seta_4() { return static_cast<int32_t>(offsetof(trocarCursor_t3FAC9E3829225CDB77DABB4DA5C06300A37E8674, ___seta_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_seta_4() const { return ___seta_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_seta_4() { return &___seta_4; }
	inline void set_seta_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___seta_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seta_4), (void*)value);
	}
};


// videoTerminou
struct  videoTerminou_t3CABE41A65271F95906BE307EA34A1AFC4FF1257  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Video.VideoPlayer videoTerminou::video
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___video_4;

public:
	inline static int32_t get_offset_of_video_4() { return static_cast<int32_t>(offsetof(videoTerminou_t3CABE41A65271F95906BE307EA34A1AFC4FF1257, ___video_4)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_video_4() const { return ___video_4; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_video_4() { return &___video_4; }
	inline void set_video_4(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___video_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___video_4), (void*)value);
	}
};


// voltarAoMenu
struct  voltarAoMenu_t753BB2DCBD387327CEFB0169656FAD1431CF8F7E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// IMoveBehaviour[]
struct IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<funcoesDeMovimento>()
inline funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * GameObject_GetComponent_TisfuncoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5_m2219925BA114A27A83AB0E97778E03AC54B9E50B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Bonk::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bonk__ctor_mCB9D14DE3F19D530401932A956A0E7900A0BCDBE (Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.SpriteRenderer::get_flipX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRenderer_get_flipX_mCB73CAF5724B925903C9D9805D3F7B8AD0C509F5 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapBox(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size1, float ___angle2, int32_t ___layerMask3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<BoxBehaviour>()
inline BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * GameObject_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_m2AD09AE2265BF75D8C137DC0DE96920C4C7F0622 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void BoxBehaviour::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxBehaviour_Explode_m07E2280A362C8E69D4923F33497EC133025B4B4D (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * __this, const RuntimeMethod* method);
// System.Void funcoesDeMovimento::Bonk(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void funcoesDeMovimento_Bonk_m85676446F13B292D5E162FFB71350D8FC2D3C26C (funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Trash>()
inline Trash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509 * GameObject_GetComponent_TisTrash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509_m76B335FF54768965DD2111BCF5157C5BDC6B6036 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Trash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Trash::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trash_Explode_mBCBDFEAC228D9D16917A6176E040C4708B85D002 (Trash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509 * __this, const RuntimeMethod* method);
// System.Void BoxBehaviour::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxBehaviour__ctor_m65F54EEA4212810E321AB60F3171CF6564715115 (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<GridGravity>()
inline GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * Component_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m39A7A964518F91CC060E4BB947EC003B1E21FD4C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerMovement>()
inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void InstantiateGambiarra::Instant(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateGambiarra_Instant_mBA2ECC534F1C24EBF11F55DD597B3D84D9D4B604 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, const RuntimeMethod* method);
// System.Void Empty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Empty__ctor_m610CA03220B282A1026DD9373BD13C7F6C007FD8 (Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void DoubleJump::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleJump__ctor_m9C15FF7C31D9B5C204DA17A20CF3F371F46F2A9B (DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GridGravity>()
inline GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void DoubleJump::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleJump_Jump_mA4E648BE16552646300F479F8DBA1B557250E912 (DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<PlayerMovement>()
inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<BoxBehaviour>()
inline BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * Component_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_mD3D7EAE10398E2B6F7BA475D7564FF6465E3D2F7 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Jump::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump__ctor_mB2AB0CFE0AA70D1FBBADE3A2E0D4A6441E9533F8 (Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void MoveLeft::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveLeft__ctor_m5FE2FEC345C6D0B863BF8432FF73FF3371B87378 (MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method);
// System.Void funcoesDeMovimento::AndarComecou(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void funcoesDeMovimento_AndarComecou_mB95738AFC9F6C09BA45DFA329008804FADB72E55 (funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___dog0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean BoxBehaviour::MoveToDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxBehaviour_MoveToDirection_m0AA21C17ECB725F28037626853D57C65285CD7EF (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Void MoveRight::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveRight__ctor_m5A848349FC179C1FD9629C809BA037BECA7CAFFA (MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void MovementController::GetMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController_GetMovementDirection_m1F856A557BD83B6FE12F221C0C6DE732CB9940DC (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Pause_m395165A04A026E9974327328181ACFA512DD76C7 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<IMoveBehaviour>()
inline RuntimeObject* GameObject_GetComponent_TisIMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_m59B7C8C8B1387CE86B93403312B8EE70B46294A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerMovement::ChangeMove(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_ChangeMove_mEBB3961BADE1E3B1AD4E41A63B3F1C04B2E463C2 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col2d0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void PlayerMovement/<ChangeMove>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMoveU3Ed__11__ctor_m14F113DCA43A8A76A78DC8B7AE7B4693A42F6B56 (U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void PlayerMovement/<waitForKeyPress>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitForKeyPressU3Ed__12__ctor_mA21F6C9F7269E56EEC845EFB3FF2075EFFDB27DB (U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_anyKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKey_mF484987F7619AE4EB70CF96CB40AFBEF721986EB (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3 (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::SetCursor(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.CursorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_SetCursor_m7EBC8C73DB36A950EFA4AC7DA1EC4E8CD10867FC (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___hotspot1, int32_t ___cursorMode2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.UInt64 UnityEngine.Video.VideoPlayer::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37 (uint64_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerMovement::waitForKeyPress(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_waitForKeyPress_m904F096929FA555F6C3C176141D30DE4F12D6A28 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col2d0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Int32 PlayerMovement::GetPosByKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerMovement_GetPosByKey_mCBBD4CA1F7F1BAC7ADB8A7BA5C11850C30D52787 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void PlayerMovement::DropMove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_DropMove_m845C5CEE0253D97C9D345648C26F63554B1BC785 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, int32_t ___pos0, const RuntimeMethod* method);
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
// System.Void Bonk::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bonk__ctor_mCB9D14DE3F19D530401932A956A0E7900A0BCDBE (Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisfuncoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5_m2219925BA114A27A83AB0E97778E03AC54B9E50B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Bonk(GameObject player){
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// this.player = player;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___player0;
		__this->set_player_4(L_0);
		// funcs = player.GetComponent<funcoesDeMovimento>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___player0;
		funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * L_2;
		L_2 = GameObject_GetComponent_TisfuncoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5_m2219925BA114A27A83AB0E97778E03AC54B9E50B(L_1, /*hidden argument*/GameObject_GetComponent_TisfuncoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5_m2219925BA114A27A83AB0E97778E03AC54B9E50B_RuntimeMethod_var);
		__this->set_funcs_5(L_2);
		// }
		return;
	}
}
// IMoveBehaviour Bonk::GetMove(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Bonk_GetMove_m5EE1C985FE6DFF3E887D2AF62675CE5DBA3E706B (Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Bonk(player);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___player0;
		Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C * L_1 = (Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C *)il2cpp_codegen_object_new(Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C_il2cpp_TypeInfo_var);
		Bonk__ctor_mCB9D14DE3F19D530401932A956A0E7900A0BCDBE(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Bonk::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bonk_Execute_mA7F2E88A8F4A9371A49095CF399E4B3B6E29FF46 (Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_m2AD09AE2265BF75D8C137DC0DE96920C4C7F0622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509_m76B335FF54768965DD2111BCF5157C5BDC6B6036_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9056648175E205DDD0F4E9F14BC2000731E74DC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_2 = NULL;
	{
		// int signal = 1;
		V_0 = 1;
		// if(!player.GetComponent<SpriteRenderer>().flipX)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		bool L_2;
		L_2 = SpriteRenderer_get_flipX_mCB73CAF5724B925903C9D9805D3F7B8AD0C509F5(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// signal = -1;
		V_0 = (-1);
	}

IL_0016:
	{
		// Vector3 direction = new Vector3(signal * 2f, 0, 0);
		int32_t L_3 = V_0;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)il2cpp_codegen_multiply((float)((float)((float)L_3)), (float)(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		// Vector3 pos = player.transform.position + direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		// Collider2D col2d = Physics2D.OverlapBox(pos, new Vector2(1f, 1f), 1f, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11;
		L_11 = Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991(L_9, L_10, (1.0f), 1, /*hidden argument*/NULL);
		V_2 = L_11;
		// if(col2d != null && col2d.gameObject.tag == "Box"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00a6;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00a6;
		}
	}
	{
		// col2d.gameObject.GetComponent<BoxBehaviour>().Explode();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_18 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * L_20;
		L_20 = GameObject_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_m2AD09AE2265BF75D8C137DC0DE96920C4C7F0622(L_19, /*hidden argument*/GameObject_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_m2AD09AE2265BF75D8C137DC0DE96920C4C7F0622_RuntimeMethod_var);
		BoxBehaviour_Explode_m07E2280A362C8E69D4923F33497EC133025B4B4D(L_20, /*hidden argument*/NULL);
		// funcs.Bonk(player);
		funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * L_21 = __this->get_funcs_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_player_4();
		funcoesDeMovimento_Bonk_m85676446F13B292D5E162FFB71350D8FC2D3C26C(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		// if(col2d != null && col2d.gameObject.tag == "Trash"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00f1;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_25 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_27, _stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00f1;
		}
	}
	{
		// Debug.Log("ue");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9056648175E205DDD0F4E9F14BC2000731E74DC7, /*hidden argument*/NULL);
		// col2d.gameObject.GetComponent<Trash>().Explode();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_29 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_29, /*hidden argument*/NULL);
		Trash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509 * L_31;
		L_31 = GameObject_GetComponent_TisTrash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509_m76B335FF54768965DD2111BCF5157C5BDC6B6036(L_30, /*hidden argument*/GameObject_GetComponent_TisTrash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509_m76B335FF54768965DD2111BCF5157C5BDC6B6036_RuntimeMethod_var);
		Trash_Explode_mBCBDFEAC228D9D16917A6176E040C4708B85D002(L_31, /*hidden argument*/NULL);
		// funcs.Bonk(player);
		funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * L_32 = __this->get_funcs_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_player_4();
		funcoesDeMovimento_Bonk_m85676446F13B292D5E162FFB71350D8FC2D3C26C(L_32, L_33, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		// }
		return;
	}
}
// System.Void Bonk::PseudoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bonk_PseudoUpdate_mB0FF5991AEB35DF810B006D10EC0449007885BD6 (Bonk_tB82BD99A69ED5151F81C8B662FC566D9D159381C * __this, const RuntimeMethod* method)
{
	{
		// public void PseudoUpdate(){}
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
// System.Void BoxBehaviour::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxBehaviour__ctor_m65F54EEA4212810E321AB60F3171CF6564715115 (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	{
		// public BoxBehaviour(GameObject player){
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// this.player = player;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___player0;
		__this->set_player_4(L_0);
		// }
		return;
	}
}
// IMoveBehaviour BoxBehaviour::GetMove(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxBehaviour_GetMove_m22410A33BBA6DC384A237DAB59E6861D801BFECD (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoxBehaviour newBox = new BoxBehaviour(player);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___player0;
		BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * L_1 = (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 *)il2cpp_codegen_object_new(BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_il2cpp_TypeInfo_var);
		BoxBehaviour__ctor_m65F54EEA4212810E321AB60F3171CF6564715115(L_1, L_0, /*hidden argument*/NULL);
		// newBox.prefabBox = this.prefabBox;
		BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_prefabBox_7();
		L_2->set_prefabBox_7(L_3);
		// newBox.prefabBoxMove = this.prefabBoxMove;
		BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * L_4 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_prefabBoxMove_8();
		L_4->set_prefabBoxMove_8(L_5);
		// return newBox;
		return L_4;
	}
}
// System.Boolean BoxBehaviour::MoveToDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxBehaviour_MoveToDirection_m0AA21C17ECB725F28037626853D57C65285CD7EF (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m39A7A964518F91CC060E4BB947EC003B1E21FD4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Vector3.Distance(transform.position, movePoint.position) <= 0.05f){
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_movePoint_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_1, L_3, /*hidden argument*/NULL);
		if ((!(((float)L_4) <= ((float)(0.0500000007f)))))
		{
			goto IL_0080;
		}
	}
	{
		// Vector3 pos = transform.position + direction;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___direction0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		// Collider2D col2d = Physics2D.OverlapBox(pos, new Vector2(1f, 1f), 1f, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11;
		L_11 = Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991(L_9, L_10, (1.0f), 1, /*hidden argument*/NULL);
		// if(col2d == null){
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		// if(!GetComponent<GridGravity>().onAir){
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_13;
		L_13 = Component_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m39A7A964518F91CC060E4BB947EC003B1E21FD4C(__this, /*hidden argument*/Component_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m39A7A964518F91CC060E4BB947EC003B1E21FD4C_RuntimeMethod_var);
		bool L_14 = L_13->get_onAir_9();
		if (L_14)
		{
			goto IL_0080;
		}
	}
	{
		// movePoint.position += direction;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_movePoint_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = L_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___direction0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_18, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_19, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0080:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void BoxBehaviour::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxBehaviour_Execute_mBA67A8FE73D6934D1434C67B5EC3FDBFD9452323 (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int signal = 1;
		V_0 = 1;
		// int aPos = -1;
		V_1 = (-1);
		// if(!player.GetComponent<SpriteRenderer>().flipX)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		bool L_2;
		L_2 = SpriteRenderer_get_flipX_mCB73CAF5724B925903C9D9805D3F7B8AD0C509F5(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// signal = -1;
		V_0 = (-1);
	}

IL_0018:
	{
		// Vector3 direction = new Vector3(signal * 2f, 0, 0);
		int32_t L_3 = V_0;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), ((float)il2cpp_codegen_multiply((float)((float)((float)L_3)), (float)(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		// Vector3 pos = player.transform.position + direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// Collider2D col2d = Physics2D.OverlapBox(pos, new Vector2(1f, 1f), 1f, 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12;
		L_12 = Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991(L_10, L_11, (1.0f), 1, /*hidden argument*/NULL);
		// if(col2d == null){
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0113;
		}
	}
	{
		// for(int i = 0; i < player.GetComponent<PlayerMovement>().mvs.Length; i++){
		V_4 = 0;
		goto IL_00ac;
	}

IL_0078:
	{
		// if(player.GetComponent<PlayerMovement>().mvs[i].GetType() == typeof(BoxBehaviour)){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_player_4();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_15;
		L_15 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_14, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_16 = L_15->get_mvs_8();
		int32_t L_17 = V_4;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		Type_t * L_20;
		L_20 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_19, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_21 = { reinterpret_cast<intptr_t> (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22;
		L_22 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_20, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00a6;
		}
	}
	{
		// aPos = i;
		int32_t L_24 = V_4;
		V_1 = L_24;
		// break;
		goto IL_00c2;
	}

IL_00a6:
	{
		// for(int i = 0; i < player.GetComponent<PlayerMovement>().mvs.Length; i++){
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00ac:
	{
		// for(int i = 0; i < player.GetComponent<PlayerMovement>().mvs.Length; i++){
		int32_t L_26 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_player_4();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_28;
		L_28 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_27, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_29 = L_28->get_mvs_8();
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_0078;
		}
	}

IL_00c2:
	{
		// if(aPos != -1){
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)(-1))))
		{
			goto IL_0113;
		}
	}
	{
		// Vector3 newPos = pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_3;
		V_5 = L_31;
		// newPos.y = pos.y + 0.15f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_3;
		float L_33 = L_32.get_y_3();
		(&V_5)->set_y_3(((float)il2cpp_codegen_add((float)L_33, (float)(0.150000006f))));
		// InstantiateGambiarra.Instant(prefabBox, newPos);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_prefabBox_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_5;
		InstantiateGambiarra_Instant_mBA2ECC534F1C24EBF11F55DD597B3D84D9D4B604(L_34, L_35, /*hidden argument*/NULL);
		// player.GetComponent<PlayerMovement>().mvs[aPos] = new Empty();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_player_4();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_37;
		L_37 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_36, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_38 = L_37->get_mvs_8();
		int32_t L_39 = V_1;
		Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 * L_40 = (Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 *)il2cpp_codegen_object_new(Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3_il2cpp_TypeInfo_var);
		Empty__ctor_m610CA03220B282A1026DD9373BD13C7F6C007FD8(L_40, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39), (RuntimeObject*)L_40);
		// player.GetComponent<PlayerMovement>().mvsObj[aPos] = null;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_player_4();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_42;
		L_42 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_41, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_43 = L_42->get_mvsObj_9();
		int32_t L_44 = V_1;
		ArrayElementTypeCheck (L_43, NULL);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0113:
	{
		// }
		return;
	}
}
// System.Void BoxBehaviour::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxBehaviour_Explode_m07E2280A362C8E69D4923F33497EC133025B4B4D (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 newPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// newPos.y = transform.position.y - 0.22f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		(&V_0)->set_y_3(((float)il2cpp_codegen_subtract((float)L_4, (float)(0.219999999f))));
		// Instantiate(prefabBoxMove, transform.position, gameObject.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_prefabBoxMove_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_7, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoxBehaviour::PseudoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxBehaviour_PseudoUpdate_m7CB85DE0D70CCE6FA63DA03AD46D5F021B0482E0 (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * __this, const RuntimeMethod* method)
{
	{
		// public void PseudoUpdate(){}
		return;
	}
}
// System.Void BoxBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxBehaviour_Start_m2D2E2214BD1ED7AD3582FE3775D4A6EC4F013FE3 (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * __this, const RuntimeMethod* method)
{
	{
		// movePoint.parent = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_movePoint_6();
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_0, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoxBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxBehaviour_Update_m13B05562E1AEE18E45272D6AA432D0A0BC08C626 (BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = Vector3.MoveTowards(transform.position, movePoint.position, moveSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_movePoint_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_moveSpeed_5();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_2, L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_7, /*hidden argument*/NULL);
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
// System.Void CheckCollider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckCollider_Start_m3B3D2A4AF64D705F5DC156BF83696D280F89C108 (CheckCollider_t4F11163FAA28DC2CD18E7410E36EA20DF6AA2EA3 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CheckCollider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckCollider_Update_mA1ADCB27284355FD51D6D49EE13198D4B098AFE8 (CheckCollider_t4F11163FAA28DC2CD18E7410E36EA20DF6AA2EA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCF10E1B7CC4A1872D2F6E661C9128B3823D1A38);
		s_Il2CppMethodInitialized = true;
	}
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_0 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Collider2D col2d = Physics2D.OverlapBox(transform.position, new Vector2(1f, 1f), 1f, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4;
		L_4 = Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991(L_2, L_3, (1.0f), 1, /*hidden argument*/NULL);
		V_0 = L_4;
		// if(col2d != null && col2d.gameObject.tag == "KillFloor"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007c;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteralCCF10E1B7CC4A1872D2F6E661C9128B3823D1A38, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		// if(tag != "Dog")
		String_t* L_11;
		L_11 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(__this, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_11, _stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_13, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_006a:
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_14;
		L_14 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_1 = L_14;
		String_t* L_15;
		L_15 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_15, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// if(col2d != null && col2d.gameObject.tag == "EndGameFlag"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_18 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ba;
		}
	}
	{
		// if(tag == "Dog")
		String_t* L_22;
		L_22 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(__this, /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
		// endHud.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_endHud_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)1, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void CheckCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckCollider__ctor_mA43496912E99DEE1B909EA36EEBEBBA6E18DD59D (CheckCollider_t4F11163FAA28DC2CD18E7410E36EA20DF6AA2EA3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DoubleJump::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleJump__ctor_m9C15FF7C31D9B5C204DA17A20CF3F371F46F2A9B (DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	{
		// private Vector3 direction = new Vector3(0, 2f, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (2.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_5(L_0);
		// public DoubleJump(GameObject player){
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// this.player = player;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___player0;
		__this->set_player_4(L_1);
		// numJumps = 2;
		__this->set_numJumps_6(2);
		// delayTime = Time.time + 0.5f;
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_delayTime_7(((float)il2cpp_codegen_add((float)L_2, (float)(0.5f))));
		// alreadyZero = false;
		__this->set_alreadyZero_8((bool)0);
		// }
		return;
	}
}
// IMoveBehaviour DoubleJump::GetMove(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DoubleJump_GetMove_m3CAD7A4BE447406BC37B894E23B2E443C5A736A8 (DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new DoubleJump(player);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___player0;
		DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4 * L_1 = (DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4 *)il2cpp_codegen_object_new(DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4_il2cpp_TypeInfo_var);
		DoubleJump__ctor_m9C15FF7C31D9B5C204DA17A20CF3F371F46F2A9B(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DoubleJump::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleJump_Execute_mB051AB82BA0C84411DBAA2F0E7CF9C4752C1AB8B (DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		s_Il2CppMethodInitialized = true;
	}
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_0 = NULL;
	{
		// Vector3 pos = player.transform.position + direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_direction_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		// Collider2D col2d = Physics2D.OverlapBox(pos, new Vector2(1f, 1f), 1f, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7;
		L_7 = Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991(L_5, L_6, (1.0f), 1, /*hidden argument*/NULL);
		V_0 = L_7;
		// if(col2d == null || (col2d != null && (col2d.gameObject.tag == "Move" || col2d.gameObject.tag == "EndGameFlag"))){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_007b;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00b1;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007b;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b1;
		}
	}

IL_007b:
	{
		// if(!player.GetComponent<GridGravity>().onAir){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_21;
		L_21 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_20, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		bool L_22 = L_21->get_onAir_9();
		if (L_22)
		{
			goto IL_009b;
		}
	}
	{
		// Jump();
		DoubleJump_Jump_mA4E648BE16552646300F479F8DBA1B557250E912(__this, /*hidden argument*/NULL);
		// numJumps = 1;
		__this->set_numJumps_6(1);
		// }
		return;
	}

IL_009b:
	{
		// else if(numJumps < 2){
		int32_t L_23 = __this->get_numJumps_6();
		if ((((int32_t)L_23) >= ((int32_t)2)))
		{
			goto IL_00b1;
		}
	}
	{
		// Jump();
		DoubleJump_Jump_mA4E648BE16552646300F479F8DBA1B557250E912(__this, /*hidden argument*/NULL);
		// numJumps = 2;
		__this->set_numJumps_6(2);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void DoubleJump::PseudoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleJump_PseudoUpdate_m0EFA576C8109AD2B2B0E0E331C1A86C0DF6FDBE9 (DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(delayTime < Time.time){
		float L_0 = __this->get_delayTime_7();
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0046;
		}
	}
	{
		// if(!player.GetComponent<GridGravity>().onAir && !alreadyZero){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_3;
		L_3 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_2, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		bool L_4 = L_3->get_onAir_9();
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		bool L_5 = __this->get_alreadyZero_8();
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		// alreadyZero = true;
		__this->set_alreadyZero_8((bool)1);
		// numJumps = 0;
		__this->set_numJumps_6(0);
	}

IL_0035:
	{
		// delayTime = Time.time + 0.5f;
		float L_6;
		L_6 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_delayTime_7(((float)il2cpp_codegen_add((float)L_6, (float)(0.5f))));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void DoubleJump::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleJump_Jump_mA4E648BE16552646300F479F8DBA1B557250E912 (DoubleJump_t39D9C58062752E8C6930CEB56947A9AB60CE85B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.GetComponent<PlayerMovement>().movePoint.position += direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_4();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1;
		L_1 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = L_1->get_movePoint_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_direction_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// player.GetComponent<GridGravity>().hasMovedOnAir = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_8;
		L_8 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_7, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		L_8->set_hasMovedOnAir_10((bool)0);
		// alreadyZero = false;
		__this->set_alreadyZero_8((bool)0);
		// delayTime = Time.time + 0.5f;
		float L_9;
		L_9 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_delayTime_7(((float)il2cpp_codegen_add((float)L_9, (float)(0.5f))));
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
// System.Void Empty::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Empty_Execute_m4E37D08AF5EC07CAFCEB5A700C030F549EB74005 (Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 * __this, const RuntimeMethod* method)
{
	{
		// public void Execute(){}
		return;
	}
}
// System.Void Empty::PseudoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Empty_PseudoUpdate_m9EA599E506A4155D34DDB186A1886206C58E35E5 (Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 * __this, const RuntimeMethod* method)
{
	{
		// public void PseudoUpdate(){}
		return;
	}
}
// IMoveBehaviour Empty::GetMove(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Empty_GetMove_m0023091B9F91343E4F94429488FC106B11E98B68 (Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IMoveBehaviour GetMove(GameObject player){return new Empty();}
		Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 * L_0 = (Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 *)il2cpp_codegen_object_new(Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3_il2cpp_TypeInfo_var);
		Empty__ctor_m610CA03220B282A1026DD9373BD13C7F6C007FD8(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Empty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Empty__ctor_m610CA03220B282A1026DD9373BD13C7F6C007FD8 (Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void EndLevel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndLevel_Start_m045C1432E5E20A26F523AE2E0DB1680BE01FF64C (EndLevel_tC1CDE7523D4661BB0C070D85B20DB22E2D614586 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EndLevel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndLevel_Update_mCAB6EA15F073C9B0EAD7298063ECE0E244F490AB (EndLevel_tC1CDE7523D4661BB0C070D85B20DB22E2D614586 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EndLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndLevel__ctor_m8B8076137402B2804A386C67AB7350A53B1FFB6A (EndLevel_tC1CDE7523D4661BB0C070D85B20DB22E2D614586 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GridGravity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGravity_Start_mCE2E69E38B6D1F023E3FEA59EA2FD38F34A76842 (GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// col = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_0;
		L_0 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_col_5(L_0);
		// pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_pos_6(L_2);
		// hasMovedOnAir = true;
		__this->set_hasMovedOnAir_10((bool)1);
		// col2d = Physics2D.OverlapBox(pos, new Vector2(1f, 1f), 1f, 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_pos_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6;
		L_6 = Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991(L_4, L_5, (1.0f), 1, /*hidden argument*/NULL);
		__this->set_col2d_7(L_6);
		// if(col2d == null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = __this->get_col2d_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		// onAir = true;
		__this->set_onAir_9((bool)1);
		return;
	}

IL_0065:
	{
		// onAir = false;
		__this->set_onAir_9((bool)0);
		// }
		return;
	}
}
// System.Void GridGravity::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGravity_Update_m7784FC110FA933533728FEA67813FE8A0A113413 (GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_mD3D7EAE10398E2B6F7BA475D7564FF6465E3D2F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m39A7A964518F91CC060E4BB947EC003B1E21FD4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCF10E1B7CC4A1872D2F6E661C9128B3823D1A38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// direction = new Vector3(0, -2f, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (-2.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_4(L_0);
		// pos = transform.position + direction;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_direction_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		__this->set_pos_6(L_4);
		// col2d = Physics2D.OverlapBox(pos, new Vector2(1f, 1f), 1f, 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_pos_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8;
		L_8 = Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991(L_6, L_7, (1.0f), 1, /*hidden argument*/NULL);
		__this->set_col2d_7(L_8);
		// if(col2d == null || ((col2d != null && (col2d.gameObject.tag == "Move" || (col2d.gameObject.tag == "Box" && col2d.GetComponent<GridGravity>().onAir) || col2d.gameObject.tag == "EndGameFlag" || col2d.gameObject.tag == "KillFloor")))){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = __this->get_col2d_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0108;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11 = __this->get_col2d_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_01ff;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = __this->get_col2d_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_15, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0108;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_17 = __this->get_col2d_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00cd;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_21 = __this->get_col2d_7();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_22;
		L_22 = Component_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m39A7A964518F91CC060E4BB947EC003B1E21FD4C(L_21, /*hidden argument*/Component_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m39A7A964518F91CC060E4BB947EC003B1E21FD4C_RuntimeMethod_var);
		bool L_23 = L_22->get_onAir_9();
		if (L_23)
		{
			goto IL_0108;
		}
	}

IL_00cd:
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_24 = __this->get_col2d_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0108;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_28 = __this->get_col2d_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_28, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_29, /*hidden argument*/NULL);
		bool L_31;
		L_31 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_30, _stringLiteralCCF10E1B7CC4A1872D2F6E661C9128B3823D1A38, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_01ff;
		}
	}

IL_0108:
	{
		// if(!onAir){
		bool L_32 = __this->get_onAir_9();
		if (L_32)
		{
			goto IL_0121;
		}
	}
	{
		// onAirTime = Time.time + 1f;
		float L_33;
		L_33 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_onAirTime_8(((float)il2cpp_codegen_add((float)L_33, (float)(1.0f))));
	}

IL_0121:
	{
		// onAir = true;
		__this->set_onAir_9((bool)1);
		// if(Time.time > onAirTime){
		float L_34;
		L_34 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_35 = __this->get_onAirTime_8();
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_0206;
		}
	}
	{
		// if(tag == "Dog")
		String_t* L_36;
		L_36 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(__this, /*hidden argument*/NULL);
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_017b;
		}
	}
	{
		// GetComponent<PlayerMovement>().movePoint.position += new Vector3(0f, -2f, 0f);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_38;
		L_38 = Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C(__this, /*hidden argument*/Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = L_38->get_movePoint_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = L_39;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_42), (0.0f), (-2.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_41, L_42, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_43, /*hidden argument*/NULL);
		goto IL_01e6;
	}

IL_017b:
	{
		// else if(tag == "Box"){
		String_t* L_44;
		L_44 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(__this, /*hidden argument*/NULL);
		bool L_45;
		L_45 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_44, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01e6;
		}
	}
	{
		// if(!(col2d != null && col2d.gameObject.tag == "EndGameFlag"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_46 = __this->get_col2d_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_01b7;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_48 = __this->get_col2d_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_48, /*hidden argument*/NULL);
		String_t* L_50;
		L_50 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_49, /*hidden argument*/NULL);
		bool L_51;
		L_51 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_50, _stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_01e6;
		}
	}

IL_01b7:
	{
		// GetComponent<BoxBehaviour>().movePoint.position += new Vector3(0f, -2f, 0f);
		BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * L_52;
		L_52 = Component_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_mD3D7EAE10398E2B6F7BA475D7564FF6465E3D2F7(__this, /*hidden argument*/Component_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_mD3D7EAE10398E2B6F7BA475D7564FF6465E3D2F7_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = L_52->get_movePoint_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54 = L_53;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_54, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_56), (0.0f), (-2.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_55, L_56, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_54, L_57, /*hidden argument*/NULL);
	}

IL_01e6:
	{
		// onAirTime = Time.time + 1f;
		float L_58;
		L_58 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_onAirTime_8(((float)il2cpp_codegen_add((float)L_58, (float)(1.0f))));
		// hasMovedOnAir = false;
		__this->set_hasMovedOnAir_10((bool)0);
		// }
		return;
	}

IL_01ff:
	{
		// onAir = false;
		__this->set_onAir_9((bool)0);
	}

IL_0206:
	{
		// }
		return;
	}
}
// System.Void GridGravity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridGravity__ctor_m94AF9B19ECA25724EAF0EC5B50A29A8CA545124D (GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void InstantiateGambiarra::Instant(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateGambiarra_Instant_mBA2ECC534F1C24EBF11F55DD597B3D84D9D4B604 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(go, pos, go.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___go0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___pos1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___go0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_1, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void InstantiateGambiarra::Dest(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateGambiarra_Dest_m0DBD66CCF9C7DA5D4833F77242221E3391950290 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(go);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___go0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InstantiateGambiarra::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateGambiarra__ctor_mD34A6C776CDB840BF49ACF7F4448C992FB2CD53A (InstantiateGambiarra_tE692EE94BFB1BD4D7454CC1CA5EC0D10150BBEE2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Jump::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump__ctor_mB2AB0CFE0AA70D1FBBADE3A2E0D4A6441E9533F8 (Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	{
		// private Vector3 direction = new Vector3(0, 2f, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (2.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_5(L_0);
		// public Jump(GameObject player){
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// this.player = player;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___player0;
		__this->set_player_4(L_1);
		// }
		return;
	}
}
// IMoveBehaviour Jump::GetMove(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Jump_GetMove_mCB183F3508F2C7088109A60083B6E502A77A2CE8 (Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Jump(player);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___player0;
		Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A * L_1 = (Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A *)il2cpp_codegen_object_new(Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A_il2cpp_TypeInfo_var);
		Jump__ctor_mB2AB0CFE0AA70D1FBBADE3A2E0D4A6441E9533F8(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Jump::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_Execute_m231E53BD1C181C860CE49CEB03C8352A7F3A6017 (Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		s_Il2CppMethodInitialized = true;
	}
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_0 = NULL;
	{
		// Vector3 pos = player.transform.position + direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_direction_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		// Collider2D col2d = Physics2D.OverlapBox(pos, new Vector2(1f, 1f), 1f, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7;
		L_7 = Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991(L_5, L_6, (1.0f), 1, /*hidden argument*/NULL);
		V_0 = L_7;
		// if(col2d == null  || (col2d != null && (col2d.gameObject.tag == "Move" || col2d.gameObject.tag == "EndGameFlag"))){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_007b;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00c4;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007b;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c4;
		}
	}

IL_007b:
	{
		// if(!player.GetComponent<GridGravity>().onAir){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_21;
		L_21 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_20, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		bool L_22 = L_21->get_onAir_9();
		if (L_22)
		{
			goto IL_00c4;
		}
	}
	{
		// player.GetComponent<PlayerMovement>().movePoint.position += direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_player_4();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_24;
		L_24 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_23, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = L_24->get_movePoint_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = L_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_direction_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_28, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_29, /*hidden argument*/NULL);
		// player.GetComponent<GridGravity>().hasMovedOnAir = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_31;
		L_31 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_30, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		L_31->set_hasMovedOnAir_10((bool)0);
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void Jump::PseudoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_PseudoUpdate_m0A66DB4E5E97B8C3D5FF1FB53D0D14D092224336 (Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A * __this, const RuntimeMethod* method)
{
	{
		// public void PseudoUpdate(){}
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
// System.Void MainMenu::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Play_m2149EC8228ACC7B581B979DB27BCE127F5EBD2B9 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Quit_m65E045D8746B583667D2641184783FDD7796758A (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Quit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::PetPet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PetPet_m1AD6301A52D3BD89657176620C1C4B1015C10F90 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		// HUD.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_HUD_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m4D77CEC8F91682A2D9492AE815F89B178BF9717D (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MoveLeft::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveLeft__ctor_m5FE2FEC345C6D0B863BF8432FF73FF3371B87378 (MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisfuncoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5_m2219925BA114A27A83AB0E97778E03AC54B9E50B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 direction = new Vector3(-2f, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (-2.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_6(L_0);
		// public MoveLeft(GameObject player){
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// this.player = player;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___player0;
		__this->set_player_4(L_1);
		// funcs = player.GetComponent<funcoesDeMovimento>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___player0;
		funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * L_3;
		L_3 = GameObject_GetComponent_TisfuncoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5_m2219925BA114A27A83AB0E97778E03AC54B9E50B(L_2, /*hidden argument*/GameObject_GetComponent_TisfuncoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5_m2219925BA114A27A83AB0E97778E03AC54B9E50B_RuntimeMethod_var);
		__this->set_funcs_5(L_3);
		// }
		return;
	}
}
// IMoveBehaviour MoveLeft::GetMove(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveLeft_GetMove_mA2C2CAF74E1CC2C8742FFA4797AF5086317F7600 (MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new MoveLeft(player);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___player0;
		MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD * L_1 = (MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD *)il2cpp_codegen_object_new(MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD_il2cpp_TypeInfo_var);
		MoveLeft__ctor_m5FE2FEC345C6D0B863BF8432FF73FF3371B87378(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void MoveLeft::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveLeft_Execute_mCA2166A24446CD65E818BE42147A62DF5C8851BE (MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_m2AD09AE2265BF75D8C137DC0DE96920C4C7F0622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		s_Il2CppMethodInitialized = true;
	}
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_0 = NULL;
	bool V_1 = false;
	{
		// funcs.AndarComecou(player);
		funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * L_0 = __this->get_funcs_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_4();
		funcoesDeMovimento_AndarComecou_mB95738AFC9F6C09BA45DFA329008804FADB72E55(L_0, L_1, /*hidden argument*/NULL);
		// Vector3 pos = player.transform.position + direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_direction_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		// Collider2D col2d = Physics2D.OverlapBox(pos, new Vector2(1f, 1f), 1f, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9;
		L_9 = Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991(L_7, L_8, (1.0f), 1, /*hidden argument*/NULL);
		V_0 = L_9;
		// bool isPossible = true;
		V_1 = (bool)1;
		// player.GetComponent<SpriteRenderer>().flipX = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_player_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_11;
		L_11 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_10, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_11, (bool)0, /*hidden argument*/NULL);
		// if(col2d == null  || ((col2d != null && (col2d.gameObject.tag == "Move" || col2d.gameObject.tag == "Box" || col2d.gameObject.tag == "EndGameFlag")))){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00bc;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0174;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00bc;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_20 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00bc;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_24 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0174;
		}
	}

IL_00bc:
	{
		// if(!player.GetComponent<GridGravity>().onAir || (player.GetComponent<GridGravity>().onAir && !player.GetComponent<GridGravity>().hasMovedOnAir)){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_29;
		L_29 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_28, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		bool L_30 = L_29->get_onAir_9();
		if (!L_30)
		{
			goto IL_00f5;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_32;
		L_32 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_31, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		bool L_33 = L_32->get_onAir_9();
		if (!L_33)
		{
			goto IL_0174;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_35;
		L_35 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_34, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		bool L_36 = L_35->get_hasMovedOnAir_10();
		if (L_36)
		{
			goto IL_0174;
		}
	}

IL_00f5:
	{
		// if(col2d != null && col2d.gameObject.tag == "Box"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_37 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_012c;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_39 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		String_t* L_41;
		L_41 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_40, /*hidden argument*/NULL);
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_012c;
		}
	}
	{
		// isPossible = col2d.gameObject.GetComponent<BoxBehaviour>().MoveToDirection(direction);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_43 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_43, /*hidden argument*/NULL);
		BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * L_45;
		L_45 = GameObject_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_m2AD09AE2265BF75D8C137DC0DE96920C4C7F0622(L_44, /*hidden argument*/GameObject_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_m2AD09AE2265BF75D8C137DC0DE96920C4C7F0622_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = __this->get_direction_6();
		bool L_47;
		L_47 = BoxBehaviour_MoveToDirection_m0AA21C17ECB725F28037626853D57C65285CD7EF(L_45, L_46, /*hidden argument*/NULL);
		V_1 = L_47;
	}

IL_012c:
	{
		// if(isPossible){
		bool L_48 = V_1;
		if (!L_48)
		{
			goto IL_0174;
		}
	}
	{
		// player.GetComponent<PlayerMovement>().movePoint.position += new Vector3(-2f, 0f, 0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = __this->get_player_4();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_50;
		L_50 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_49, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51 = L_50->get_movePoint_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52 = L_51;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_54), (-2.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_53, L_54, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_52, L_55, /*hidden argument*/NULL);
		// player.GetComponent<GridGravity>().hasMovedOnAir = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_57;
		L_57 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_56, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		L_57->set_hasMovedOnAir_10((bool)1);
	}

IL_0174:
	{
		// }
		return;
	}
}
// System.Void MoveLeft::PseudoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveLeft_PseudoUpdate_mD9769B830EF6A7A591D6B64E66CCBECFD6841B87 (MoveLeft_tEB49C1270AE6D72CDD25CF38566D38A707E40AAD * __this, const RuntimeMethod* method)
{
	{
		// public void PseudoUpdate(){}
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
// System.Void MoveRight::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveRight__ctor_m5A848349FC179C1FD9629C809BA037BECA7CAFFA (MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisfuncoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5_m2219925BA114A27A83AB0E97778E03AC54B9E50B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 direction = new Vector3(2f, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (2.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_6(L_0);
		// public MoveRight(GameObject player){
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// this.player = player;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___player0;
		__this->set_player_4(L_1);
		// funcs = player.GetComponent<funcoesDeMovimento>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___player0;
		funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * L_3;
		L_3 = GameObject_GetComponent_TisfuncoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5_m2219925BA114A27A83AB0E97778E03AC54B9E50B(L_2, /*hidden argument*/GameObject_GetComponent_TisfuncoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5_m2219925BA114A27A83AB0E97778E03AC54B9E50B_RuntimeMethod_var);
		__this->set_funcs_5(L_3);
		// }
		return;
	}
}
// IMoveBehaviour MoveRight::GetMove(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveRight_GetMove_m9D9B6EDCE86F485782DE997018662B65DA4FD633 (MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new MoveRight(player);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___player0;
		MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354 * L_1 = (MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354 *)il2cpp_codegen_object_new(MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354_il2cpp_TypeInfo_var);
		MoveRight__ctor_m5A848349FC179C1FD9629C809BA037BECA7CAFFA(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void MoveRight::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveRight_Execute_mB4310F46BECCBA98C160A933B6774C5C0A987E24 (MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_m2AD09AE2265BF75D8C137DC0DE96920C4C7F0622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		s_Il2CppMethodInitialized = true;
	}
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_0 = NULL;
	bool V_1 = false;
	{
		// funcs.AndarComecou(player);
		funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * L_0 = __this->get_funcs_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_4();
		funcoesDeMovimento_AndarComecou_mB95738AFC9F6C09BA45DFA329008804FADB72E55(L_0, L_1, /*hidden argument*/NULL);
		// Vector3 pos = player.transform.position + direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_direction_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		// Collider2D col2d = Physics2D.OverlapBox(pos, new Vector2(1f, 1f), 1f, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9;
		L_9 = Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991(L_7, L_8, (1.0f), 1, /*hidden argument*/NULL);
		V_0 = L_9;
		// bool isPossible = true;
		V_1 = (bool)1;
		// player.GetComponent<SpriteRenderer>().flipX = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_player_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_11;
		L_11 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_10, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_11, (bool)1, /*hidden argument*/NULL);
		// if(col2d == null || ((col2d != null && (col2d.gameObject.tag == "Move" || col2d.gameObject.tag == "Box" || col2d.gameObject.tag == "EndGameFlag")))){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00bc;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0166;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00bc;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_20 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00bc;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_24 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral108A7390F4AA87336291AFF318697DC7F8F7B895, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0166;
		}
	}

IL_00bc:
	{
		// if(!player.GetComponent<GridGravity>().onAir || (player.GetComponent<GridGravity>().onAir && !player.GetComponent<GridGravity>().hasMovedOnAir)){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_29;
		L_29 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_28, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		bool L_30 = L_29->get_onAir_9();
		if (!L_30)
		{
			goto IL_00f5;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_32;
		L_32 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_31, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		bool L_33 = L_32->get_onAir_9();
		if (!L_33)
		{
			goto IL_0166;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_35;
		L_35 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_34, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		bool L_36 = L_35->get_hasMovedOnAir_10();
		if (L_36)
		{
			goto IL_0166;
		}
	}

IL_00f5:
	{
		// if(col2d != null && col2d.gameObject.tag == "Box"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_37 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_012c;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_39 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		String_t* L_41;
		L_41 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_40, /*hidden argument*/NULL);
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_012c;
		}
	}
	{
		// isPossible = col2d.gameObject.GetComponent<BoxBehaviour>().MoveToDirection(direction);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_43 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_43, /*hidden argument*/NULL);
		BoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0 * L_45;
		L_45 = GameObject_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_m2AD09AE2265BF75D8C137DC0DE96920C4C7F0622(L_44, /*hidden argument*/GameObject_GetComponent_TisBoxBehaviour_t467354AC0F413670EAB1F1C8DDBF7942D72F82E0_m2AD09AE2265BF75D8C137DC0DE96920C4C7F0622_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = __this->get_direction_6();
		bool L_47;
		L_47 = BoxBehaviour_MoveToDirection_m0AA21C17ECB725F28037626853D57C65285CD7EF(L_45, L_46, /*hidden argument*/NULL);
		V_1 = L_47;
	}

IL_012c:
	{
		// if(isPossible){
		bool L_48 = V_1;
		if (!L_48)
		{
			goto IL_0166;
		}
	}
	{
		// player.GetComponent<PlayerMovement>().movePoint.position += direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = __this->get_player_4();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_50;
		L_50 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_49, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51 = L_50->get_movePoint_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52 = L_51;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = __this->get_direction_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_53, L_54, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_52, L_55, /*hidden argument*/NULL);
		// player.GetComponent<GridGravity>().hasMovedOnAir = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = __this->get_player_4();
		GridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB * L_57;
		L_57 = GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9(L_56, /*hidden argument*/GameObject_GetComponent_TisGridGravity_tF0E96319B150B4BAB6CB62C44E4CE5E42A21B6EB_m9F984F4ACE3A7DBEAC06754E8036801AE6753EB9_RuntimeMethod_var);
		L_57->set_hasMovedOnAir_10((bool)1);
	}

IL_0166:
	{
		// }
		return;
	}
}
// System.Void MoveRight::PseudoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveRight_PseudoUpdate_mE0D7117573B4E1E097962C328D8DE2A720D0E43E (MoveRight_tE17955CE7D607577BB5142C610B8DF7B0146C354 * __this, const RuntimeMethod* method)
{
	{
		// public void PseudoUpdate(){}
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
// System.Void MovementController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController_Update_m7D1BDC66D4AF69409B866221EBE0714F65B04BCA (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetAxisRaw("Horizontal") == 0)
		float L_0;
		L_0 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// hasMoved = false;
		__this->set_hasMoved_5((bool)0);
		return;
	}

IL_0019:
	{
		// else if (Input.GetAxisRaw("Horizontal") != 0 && !hasMoved) {
		float L_1;
		L_1 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_003f;
		}
	}
	{
		bool L_2 = __this->get_hasMoved_5();
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		// hasMoved = true;
		__this->set_hasMoved_5((bool)1);
		// GetMovementDirection();
		MovementController_GetMovementDirection_m1F856A557BD83B6FE12F221C0C6DE732CB9940DC(__this, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void MovementController::GetMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController_GetMovementDirection_m1F856A557BD83B6FE12F221C0C6DE732CB9940DC (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetAxisRaw("Horizontal") < 0){
		float L_0;
		L_0 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// direction = new Vector3(-2, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (-2.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_4(L_1);
		// transform.position += direction;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_direction_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0048:
	{
		// else if (Input.GetAxisRaw("Horizontal") > 0){
		float L_7;
		L_7 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		// direction = new Vector3(2, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (2.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_4(L_8);
		// transform.position += direction;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_direction_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_12, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_13, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void MovementController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController__ctor_mB51ACF4C89A382D5DE2BAB652693DE37CCB8EE88 (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m191CABDC11442A2CC104FC8B3244D04826E7BD57 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown(KeyCode.Escape)){
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// if(isPaused)
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		bool L_1 = ((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->get_isPaused_4();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Resume();
		PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717(__this, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		// Pause();
		PauseMenu_Pause_m395165A04A026E9974327328181ACFA512DD76C7(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenuUI_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// isPaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_isPaused_4((bool)0);
		// }
		return;
	}
}
// System.Void PauseMenu::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Pause_m395165A04A026E9974327328181ACFA512DD76C7 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenuUI_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// isPaused = true;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_isPaused_4((bool)1);
		// }
		return;
	}
}
// System.Void PauseMenu::LoadMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_LoadMenu_m79C5C947F247BFB6AF8CB5A79D3265871A8101FE (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Restart_m18BB1805D8E72A6B8EDD190BD99D0C1AF76C805E (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Resume();
		PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_mA1A281F3359C234E5CF24FFEAC20C12C48D69018 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__cctor_m6819B2CD3B03CB44F1D7914C847058A7C1B7D924 (const RuntimeMethod* method)
{
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
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_m59B7C8C8B1387CE86B93403312B8EE70B46294A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____7FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// movePoint.parent = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_movePoint_5();
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_0, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// enable = true;
		__this->set_enable_7((bool)1);
		// mvs = new IMoveBehaviour[4];
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_1 = (IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68*)(IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68*)SZArrayNew(IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_mvs_8(L_1);
		// key = new KeyCode[6] {KeyCode.E, KeyCode.Q, KeyCode.A, KeyCode.S, KeyCode.D, KeyCode.F};
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_2 = (KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871*)(KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871*)SZArrayNew(KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871_il2cpp_TypeInfo_var, (uint32_t)6);
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_3 = L_2;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____7FF881082CD6A15274AA348EBD5CE42E22E7D4DFF8D3809EA2FD64AEFA283220_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_3, L_4, /*hidden argument*/NULL);
		__this->set_key_10(L_3);
		// for(int i = 0; i < mvs.Length; i++){
		V_0 = 0;
		goto IL_008b;
	}

IL_003a:
	{
		// if(mvsObj[i] == null)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_mvsObj_9();
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		// mvs[i] = new Empty();
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_10 = __this->get_mvs_8();
		int32_t L_11 = V_0;
		Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 * L_12 = (Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 *)il2cpp_codegen_object_new(Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3_il2cpp_TypeInfo_var);
		Empty__ctor_m610CA03220B282A1026DD9373BD13C7F6C007FD8(L_12, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (RuntimeObject*)L_12);
		goto IL_0087;
	}

IL_0059:
	{
		// mvs[i] = mvsObj[i].GetComponent<IMoveBehaviour>().GetMove(gameObject);
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_13 = __this->get_mvs_8();
		int32_t L_14 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_mvsObj_9();
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		RuntimeObject* L_19;
		L_19 = GameObject_GetComponent_TisIMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_m59B7C8C8B1387CE86B93403312B8EE70B46294A6(L_18, /*hidden argument*/GameObject_GetComponent_TisIMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_m59B7C8C8B1387CE86B93403312B8EE70B46294A6_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* IMoveBehaviour IMoveBehaviour::GetMove(UnityEngine.GameObject) */, IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_il2cpp_TypeInfo_var, L_19, L_20);
		ArrayElementTypeCheck (L_13, L_21);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject*)L_21);
		// mvsObj[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_22 = __this->get_mvsObj_9();
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)0, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// for(int i = 0; i < mvs.Length; i++){
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_008b:
	{
		// for(int i = 0; i < mvs.Length; i++){
		int32_t L_27 = V_0;
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_28 = __this->get_mvs_8();
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		s_Il2CppMethodInitialized = true;
	}
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if(!PauseMenu.isPaused){
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		bool L_0 = ((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->get_isPaused_4();
		if (L_0)
		{
			goto IL_01da;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, movePoint.position, moveSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_movePoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_moveSpeed_4();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_3, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_8, /*hidden argument*/NULL);
		// for(int i = 0; i < mvs.Length; i++)
		V_1 = 0;
		goto IL_0051;
	}

IL_0040:
	{
		// mvs[i].PseudoUpdate();
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_9 = __this->get_mvs_8();
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		InterfaceActionInvoker0::Invoke(1 /* System.Void IMoveBehaviour::PseudoUpdate() */, IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_il2cpp_TypeInfo_var, L_12);
		// for(int i = 0; i < mvs.Length; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0051:
	{
		// for(int i = 0; i < mvs.Length; i++)
		int32_t L_14 = V_1;
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_15 = __this->get_mvs_8();
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		// Collider2D col2d = Physics2D.OverlapBox(transform.position, new Vector2(1f, 1f), 1f, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_19), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_20;
		L_20 = Physics2D_OverlapBox_m776FE1F17E3431006115516786EB13092EDC0991(L_18, L_19, (1.0f), 1, /*hidden argument*/NULL);
		V_0 = L_20;
		// if(!Input.GetKey(KeyCode.A) && !Input.GetKey(KeyCode.S) && !Input.GetKey(KeyCode.D) && !Input.GetKey(KeyCode.F) && !Input.GetKey(KeyCode.Q) && !Input.GetKey(KeyCode.E))
		bool L_21;
		L_21 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00c5;
		}
	}
	{
		bool L_22;
		L_22 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)115), /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00c5;
		}
	}
	{
		bool L_23;
		L_23 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00c5;
		}
	}
	{
		bool L_24;
		L_24 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)102), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00c5;
		}
	}
	{
		bool L_25;
		L_25 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)113), /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		bool L_26;
		L_26 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)101), /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		// hasMoved = false;
		__this->set_hasMoved_6((bool)0);
		return;
	}

IL_00c5:
	{
		// else if(!hasMoved){
		bool L_27 = __this->get_hasMoved_6();
		if (L_27)
		{
			goto IL_01da;
		}
	}
	{
		// hasMoved = true;
		__this->set_hasMoved_6((bool)1);
		// if(Vector3.Distance(transform.position, movePoint.position) <= 0.05f && enable){
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_movePoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32;
		L_32 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_29, L_31, /*hidden argument*/NULL);
		if ((!(((float)L_32) <= ((float)(0.0500000007f)))))
		{
			goto IL_01da;
		}
	}
	{
		bool L_33 = __this->get_enable_7();
		if (!L_33)
		{
			goto IL_01da;
		}
	}
	{
		// if(Input.GetKey(key[0]))
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_34 = __this->get_key_10();
		int32_t L_35 = 0;
		int32_t L_36 = (int32_t)(L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		bool L_37;
		L_37 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0144;
		}
	}
	{
		// if(col2d != null && col2d.gameObject.tag == "Move")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_38 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0144;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_40 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_40, /*hidden argument*/NULL);
		String_t* L_42;
		L_42 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_41, /*hidden argument*/NULL);
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0144;
		}
	}
	{
		// StartCoroutine(ChangeMove(col2d));
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_44 = V_0;
		RuntimeObject* L_45;
		L_45 = PlayerMovement_ChangeMove_mEBB3961BADE1E3B1AD4E41A63B3F1C04B2E463C2(__this, L_44, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_46;
		L_46 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_45, /*hidden argument*/NULL);
	}

IL_0144:
	{
		// if(Input.GetKey(key[2]))
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_47 = __this->get_key_10();
		int32_t L_48 = 2;
		int32_t L_49 = (int32_t)(L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		bool L_50;
		L_50 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0160;
		}
	}
	{
		// mvs[0].Execute();
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_51 = __this->get_mvs_8();
		int32_t L_52 = 0;
		RuntimeObject* L_53 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		InterfaceActionInvoker0::Invoke(0 /* System.Void IMoveBehaviour::Execute() */, IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_il2cpp_TypeInfo_var, L_53);
	}

IL_0160:
	{
		// if(Input.GetKey(key[3]))
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_54 = __this->get_key_10();
		int32_t L_55 = 3;
		int32_t L_56 = (int32_t)(L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		bool L_57;
		L_57 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_017c;
		}
	}
	{
		// mvs[1].Execute();
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_58 = __this->get_mvs_8();
		int32_t L_59 = 1;
		RuntimeObject* L_60 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		InterfaceActionInvoker0::Invoke(0 /* System.Void IMoveBehaviour::Execute() */, IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_il2cpp_TypeInfo_var, L_60);
	}

IL_017c:
	{
		// if(Input.GetKey(key[4]))
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_61 = __this->get_key_10();
		int32_t L_62 = 4;
		int32_t L_63 = (int32_t)(L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		bool L_64;
		L_64 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_63, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_0198;
		}
	}
	{
		// mvs[2].Execute();
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_65 = __this->get_mvs_8();
		int32_t L_66 = 2;
		RuntimeObject* L_67 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		InterfaceActionInvoker0::Invoke(0 /* System.Void IMoveBehaviour::Execute() */, IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_il2cpp_TypeInfo_var, L_67);
	}

IL_0198:
	{
		// if(Input.GetKey(key[5]))
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_68 = __this->get_key_10();
		int32_t L_69 = 5;
		int32_t L_70 = (int32_t)(L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		bool L_71;
		L_71 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_70, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		// mvs[3].Execute();
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_72 = __this->get_mvs_8();
		int32_t L_73 = 3;
		RuntimeObject* L_74 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		InterfaceActionInvoker0::Invoke(0 /* System.Void IMoveBehaviour::Execute() */, IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_il2cpp_TypeInfo_var, L_74);
	}

IL_01b4:
	{
		// if(Input.GetKey(key[1])){
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_75 = __this->get_key_10();
		int32_t L_76 = 1;
		int32_t L_77 = (int32_t)(L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		bool L_78;
		L_78 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_77, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_01da;
		}
	}
	{
		// if(col2d == null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_79 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_79, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_01da;
		}
	}
	{
		// StartCoroutine(ChangeMove(null));
		RuntimeObject* L_81;
		L_81 = PlayerMovement_ChangeMove_mEBB3961BADE1E3B1AD4E41A63B3F1C04B2E463C2(__this, (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 *)NULL, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_82;
		L_82 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_81, /*hidden argument*/NULL);
	}

IL_01da:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerMovement::ChangeMove(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_ChangeMove_mEBB3961BADE1E3B1AD4E41A63B3F1C04B2E463C2 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col2d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274 * L_0 = (U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274 *)il2cpp_codegen_object_new(U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274_il2cpp_TypeInfo_var);
		U3CChangeMoveU3Ed__11__ctor_m14F113DCA43A8A76A78DC8B7AE7B4693A42F6B56(L_0, 0, /*hidden argument*/NULL);
		U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274 * L_2 = L_1;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___col2d0;
		L_2->set_col2d_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator PlayerMovement::waitForKeyPress(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_waitForKeyPress_m904F096929FA555F6C3C176141D30DE4F12D6A28 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col2d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D * L_0 = (U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D *)il2cpp_codegen_object_new(U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D_il2cpp_TypeInfo_var);
		U3CwaitForKeyPressU3Ed__12__ctor_mA21F6C9F7269E56EEC845EFB3FF2075EFFDB27DB(L_0, 0, /*hidden argument*/NULL);
		U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D * L_2 = L_1;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___col2d0;
		L_2->set_col2d_3(L_3);
		return L_2;
	}
}
// System.Void PlayerMovement::DropMove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_DropMove_m845C5CEE0253D97C9D345648C26F63554B1BC785 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, int32_t ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mvsObj[pos] != null){
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_mvsObj_9();
		int32_t L_1 = ___pos0;
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		// mvs[pos] = new Empty();
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_5 = __this->get_mvs_8();
		int32_t L_6 = ___pos0;
		Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 * L_7 = (Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 *)il2cpp_codegen_object_new(Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3_il2cpp_TypeInfo_var);
		Empty__ctor_m610CA03220B282A1026DD9373BD13C7F6C007FD8(L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject*)L_7);
		// mvsObj[pos].transform.position = transform.position;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get_mvsObj_9();
		int32_t L_9 = ___pos0;
		int32_t L_10 = L_9;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_14, /*hidden argument*/NULL);
		// mvsObj[pos].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_mvsObj_9();
		int32_t L_16 = ___pos0;
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// mvsObj[pos] = null;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = __this->get_mvsObj_9();
		int32_t L_20 = ___pos0;
		ArrayElementTypeCheck (L_19, NULL);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Int32 PlayerMovement::GetPosByKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerMovement_GetPosByKey_mCBBD4CA1F7F1BAC7ADB8A7BA5C11850C30D52787 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// if(Input.GetKey(key[2]))
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_0 = __this->get_key_10();
		int32_t L_1 = 2;
		int32_t L_2 = (int32_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0011:
	{
		// if(Input.GetKey(key[3]))
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_4 = __this->get_key_10();
		int32_t L_5 = 3;
		int32_t L_6 = (int32_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0022;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0022:
	{
		// if(Input.GetKey(key[4]))
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_8 = __this->get_key_10();
		int32_t L_9 = 4;
		int32_t L_10 = (int32_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11;
		L_11 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0033;
		}
	}
	{
		// return 2;
		return 2;
	}

IL_0033:
	{
		// if(Input.GetKey(key[5]))
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_12 = __this->get_key_10();
		int32_t L_13 = 5;
		int32_t L_14 = (int32_t)(L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0044;
		}
	}
	{
		// return 3;
		return 3;
	}

IL_0044:
	{
		// if(Input.GetKey(key[1]))
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_16 = __this->get_key_10();
		int32_t L_17 = 1;
		int32_t L_18 = (int32_t)(L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		bool L_19;
		L_19 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0055;
		}
	}
	{
		// return 4;
		return 4;
	}

IL_0055:
	{
		// return -1;
		return (-1);
	}
}
// IMoveBehaviour[] PlayerMovement::AllEmpty(IMoveBehaviour[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* PlayerMovement_AllEmpty_mB6F0731CC5FF58B2F4F84ADD554F5DFE7C302D72 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* ___original0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IMoveBehaviour[] clone = new IMoveBehaviour[original.Length];
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_0 = ___original0;
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_1 = (IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68*)(IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68*)SZArrayNew(IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for(int i = 0; i < original.Length; i++){
		V_1 = 0;
		goto IL_001f;
	}

IL_000d:
	{
		// clone[i] = original[i];
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_2 = V_0;
		int32_t L_3 = V_1;
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_4 = ___original0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ArrayElementTypeCheck (L_2, L_7);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_7);
		// original[i] = new Empty();
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_8 = ___original0;
		int32_t L_9 = V_1;
		Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 * L_10 = (Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3 *)il2cpp_codegen_object_new(Empty_t527A8573ADB2246DF43704B4DBAC0FCB5C2CF2C3_il2cpp_TypeInfo_var);
		Empty__ctor_m610CA03220B282A1026DD9373BD13C7F6C007FD8(L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (RuntimeObject*)L_10);
		// for(int i = 0; i < original.Length; i++){
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_001f:
	{
		// for(int i = 0; i < original.Length; i++){
		int32_t L_12 = V_1;
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_13 = ___original0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// return clone;
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_14 = V_0;
		return L_14;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SkipCutscene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipCutscene_Start_m4DA077795A180A5770077EA478A7CD1592FE2651 (SkipCutscene_t673D0813A861FD50AB23F46B946D20938C0311F2 * __this, const RuntimeMethod* method)
{
	{
		// delayTime = Time.time + 2f;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_delayTime_4(((float)il2cpp_codegen_add((float)L_0, (float)(2.0f))));
		// }
		return;
	}
}
// System.Void SkipCutscene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipCutscene_Update_m9C5E75F6571EABC9A0D2662D3E24247B13A7D9E5 (SkipCutscene_t673D0813A861FD50AB23F46B946D20938C0311F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(Time.time > delayTime)
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_delayTime_4();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0028;
		}
	}
	{
		// if (Input.anyKey)
		bool L_2;
		L_2 = Input_get_anyKey_mF484987F7619AE4EB70CF96CB40AFBEF721986EB(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_3;
		L_3 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void SkipCutscene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipCutscene__ctor_m427D816F03CBCA5DFC89E9E3B6B122AB15B614AD (SkipCutscene_t673D0813A861FD50AB23F46B946D20938C0311F2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Trash::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trash_Explode_mBCBDFEAC228D9D16917A6176E040C4708B85D002 (Trash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Trash::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trash__ctor_m7537133777859D2CE1942620306350F7FBFFD157 (Trash_t5D7E711C76F6812E430AFF9663D8DFF5EA51C509 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void disable::desativar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void disable_desativar_mC3ECFCAA14EAC43491EAC7B7570DA6C4123A6167 (disable_tF01F3CE4364395995F3831A7A11D3589E18E02E8 * __this, const RuntimeMethod* method)
{
	{
		// branco.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_branco_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void disable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void disable__ctor_mDB488E70C0B7AD46FDFEAD8967F9604A2B2D7913 (disable_tF01F3CE4364395995F3831A7A11D3589E18E02E8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void exitGame::fechar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void exitGame_fechar_m05DFDA19028C861299172E5DB220F6A29CDB5F1D (exitGame_t8FA808C41EE6B10E1E7F31E226B06EEB7FFBF21F * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit ();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void exitGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void exitGame__ctor_mCE903D2B9C5DAE2D514FD2F2E444769849D83C8A (exitGame_t8FA808C41EE6B10E1E7F31E226B06EEB7FFBF21F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void funcoesDeMovimento::AndarComecou(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void funcoesDeMovimento_AndarComecou_mB95738AFC9F6C09BA45DFA329008804FADB72E55 (funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___dog0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral427DA1531752318F714978CE07403919B437E29F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Animator anim = dog.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___dog0;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		// anim.SetTrigger("Andar");
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_1, _stringLiteral427DA1531752318F714978CE07403919B437E29F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void funcoesDeMovimento::Bonk(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void funcoesDeMovimento_Bonk_m85676446F13B292D5E162FFB71350D8FC2D3C26C (funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E3655DE7AC66259BA139AC74F09D02B44ABE755);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Animator anim = player.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___player0;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		// anim.SetTrigger("Bonk");
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_1, _stringLiteral7E3655DE7AC66259BA139AC74F09D02B44ABE755, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void funcoesDeMovimento::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void funcoesDeMovimento__ctor_m9134D6AB2B484E5B4F3DEADA96E8BD3C6E437093 (funcoesDeMovimento_t40AE7E7D8A825B45A4B77E66E21773E0949164E5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void mostrarItens::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mostrarItens_Start_m7793C3CE331D227E6BCD198B00356EEB8217295C (mostrarItens_t61AA2100C988C5E54706B4FE14041D97ADC07066 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76AD4AEAB8DD84DD3D79886D20A26860A1C9CCE7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// doge = GameObject.FindWithTag("Dog");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2, /*hidden argument*/NULL);
		__this->set_doge_4(L_0);
		// src = doge.GetComponent<PlayerMovement>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_doge_4();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_2;
		L_2 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_1, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		__this->set_src_5(L_2);
		// slots = GameObject.FindGameObjectsWithTag("Slot");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3;
		L_3 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral76AD4AEAB8DD84DD3D79886D20A26860A1C9CCE7, /*hidden argument*/NULL);
		__this->set_slots_6(L_3);
		// for(int i = 0; i<4;i++){
		V_0 = 0;
		goto IL_004e;
	}

IL_0035:
	{
		// srp[i] = slots[i].GetComponent<Image>();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_4 = __this->get_srp_7();
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_slots_6();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10;
		L_10 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_9, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C *)L_10);
		// for(int i = 0; i<4;i++){
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004e:
	{
		// for(int i = 0; i<4;i++){
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Void mostrarItens::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mostrarItens_Update_m4A624B0203B38E05CBAD5B6319B88ABAF7A9A498 (mostrarItens_t61AA2100C988C5E54706B4FE14041D97ADC07066 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for(int i = 0; i<4;i++){
		V_0 = 0;
		goto IL_0096;
	}

IL_0007:
	{
		// if(src.mvsObj[i] != null){
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0 = __this->get_src_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0->get_mvsObj_9();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006a;
		}
	}
	{
		// srp[i].sprite = src.mvsObj[i].GetComponent<SpriteRenderer>().sprite;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_6 = __this->get_srp_7();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_10 = __this->get_src_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = L_10->get_mvsObj_9();
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_16;
		L_16 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_15, /*hidden argument*/NULL);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_9, L_16, /*hidden argument*/NULL);
		// Color temp = srp[i].color;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_17 = __this->get_srp_7();
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		L_21 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_20);
		V_1 = L_21;
		// temp.a = 255;
		(&V_1)->set_a_3((255.0f));
		// srp[i].color = temp;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_22 = __this->get_srp_7();
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26 = V_1;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_26);
		// }
		goto IL_0092;
	}

IL_006a:
	{
		// Color temp = srp[i].color;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_27 = __this->get_srp_7();
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31;
		L_31 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_30);
		V_2 = L_31;
		// temp.a = 0;
		(&V_2)->set_a_3((0.0f));
		// srp[i].color = temp;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_32 = __this->get_srp_7();
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36 = V_2;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_36);
	}

IL_0092:
	{
		// for(int i = 0; i<4;i++){
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0096:
	{
		// for(int i = 0; i<4;i++){
		int32_t L_38 = V_0;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void mostrarItens::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mostrarItens__ctor_m1FA5BAD0F9EE239040B098A17E54623FA68101D9 (mostrarItens_t61AA2100C988C5E54706B4FE14041D97ADC07066 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Image[] srp = new Image[4];
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_0 = (ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224*)(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224*)SZArrayNew(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_srp_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void nextLevel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nextLevel_Start_m02553780936257FAF952126CE53A8AB90FB922B2 (nextLevel_t59DFA086408AC6B6B0D238904C37A2E5CD4846F7 * __this, const RuntimeMethod* method)
{
	{
		// delayTime = Time.time + 1f;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_delayTime_5(((float)il2cpp_codegen_add((float)L_0, (float)(1.0f))));
		// }
		return;
	}
}
// System.Void nextLevel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nextLevel_Update_m6583F64B7B099B9929E97821CA4DFCFCBB1CF9E2 (nextLevel_t59DFA086408AC6B6B0D238904C37A2E5CD4846F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(Time.time > delayTime){
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_delayTime_5();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_003d;
		}
	}
	{
		// if (Input.anyKey){
		bool L_2;
		L_2 = Input_get_anyKey_mF484987F7619AE4EB70CF96CB40AFBEF721986EB(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// if(isPet)
		bool L_3 = __this->get_isPet_6();
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// HUD.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_HUD_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_0029:
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_5;
		L_5 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void nextLevel::proximoNivel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nextLevel_proximoNivel_m9B799C9A4B75B4A0445946EC5DE8FDDA8BDCC123 (nextLevel_t59DFA086408AC6B6B0D238904C37A2E5CD4846F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFE83BCAF65075368BDB82322ADA7CF5A6A57B29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("fadeToWhite", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteralFFE83BCAF65075368BDB82322ADA7CF5A6A57B29, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void nextLevel::onFadeComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nextLevel_onFadeComplete_m0E6FACF6BD22D27468C938A7F470C84B259527A1 (nextLevel_t59DFA086408AC6B6B0D238904C37A2E5CD4846F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void nextLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nextLevel__ctor_m59B03A0573FB68AD01C79868703ABFBDAAB63A10 (nextLevel_t59DFA086408AC6B6B0D238904C37A2E5CD4846F7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void trocarCursor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trocarCursor_Start_m15600495E78A69BE04439D3DC1B574A768CDAB56 (trocarCursor_t3FAC9E3829225CDB77DABB4DA5C06300A37E8674 * __this, const RuntimeMethod* method)
{
	{
		// Cursor.SetCursor(seta,Vector2.zero, CursorMode.ForceSoftware);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_seta_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		Cursor_SetCursor_m7EBC8C73DB36A950EFA4AC7DA1EC4E8CD10867FC(L_0, L_1, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void trocarCursor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trocarCursor__ctor_m1AF34BC1D903E02D4FB9C0C1E0724A0A51303118 (trocarCursor_t3FAC9E3829225CDB77DABB4DA5C06300A37E8674 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void videoTerminou::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void videoTerminou_Start_m3EEA142E3B42690EF84D9F4E2EB2491B797328B5 (videoTerminou_t3CABE41A65271F95906BE307EA34A1AFC4FF1257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// video = GetComponent<VideoPlayer>();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0;
		L_0 = Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365(__this, /*hidden argument*/Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365_RuntimeMethod_var);
		__this->set_video_4(L_0);
		// }
		return;
	}
}
// System.Void videoTerminou::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void videoTerminou_Update_mC42BDD87E79A756F69E8513D8278D7837CF89E66 (videoTerminou_t3CABE41A65271F95906BE307EA34A1AFC4FF1257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CB088E5ADDB19B3769CA5EE24809765C5648A07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA910F1B68F1D365059112B8F3C68C2AFE0DEB27);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint64_t V_1 = 0;
	{
		// if((ulong)video.frame == (video.frameCount - 1)){
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_video_4();
		int64_t L_1;
		L_1 = VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E(L_0, /*hidden argument*/NULL);
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_2 = __this->get_video_4();
		uint64_t L_3;
		L_3 = VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044(L_2, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_1) == ((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)((int64_t)((int64_t)1))))))))
		{
			goto IL_003a;
		}
	}
	{
		// Debug.Log("entrou aqui");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9CB088E5ADDB19B3769CA5EE24809765C5648A07, /*hidden argument*/NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4;
		L_4 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_003a:
	{
		// Debug.Log((ulong)video.frame + " !=" + video.frameCount);
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_6 = __this->get_video_4();
		int64_t L_7;
		L_7 = VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8;
		L_8 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&V_1), /*hidden argument*/NULL);
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_9 = __this->get_video_4();
		uint64_t L_10;
		L_10 = VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11;
		L_11 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_8, _stringLiteralBA910F1B68F1D365059112B8F3C68C2AFE0DEB27, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void videoTerminou::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void videoTerminou__ctor_mB9C564AF1114CA2BB79A30570BED31B2331AFFD4 (videoTerminou_t3CABE41A65271F95906BE307EA34A1AFC4FF1257 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void voltarAoMenu::menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void voltarAoMenu_menu_mED7EA6B3D53C52AC0F2B109AB610B082DBD5E49D (voltarAoMenu_t753BB2DCBD387327CEFB0169656FAD1431CF8F7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void voltarAoMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void voltarAoMenu__ctor_m38F2C3E9931F9B6D1BAB4BDCB6EFA359671E28A5 (voltarAoMenu_t753BB2DCBD387327CEFB0169656FAD1431CF8F7E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement/<ChangeMove>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMoveU3Ed__11__ctor_m14F113DCA43A8A76A78DC8B7AE7B4693A42F6B56 (U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerMovement/<ChangeMove>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMoveU3Ed__11_System_IDisposable_Dispose_m3066D4A701A82F0F44696321F155D374E7DDD30C (U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerMovement/<ChangeMove>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeMoveU3Ed__11_MoveNext_m30C3225F3ACFF0A5BF455DDC620ECB1CD03FD0D7 (U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return waitForKeyPress(col2d);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4 = V_1;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = __this->get_col2d_3();
		RuntimeObject* L_6;
		L_6 = PlayerMovement_waitForKeyPress_m904F096929FA555F6C3C176141D30DE4F12D6A28(L_4, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object PlayerMovement/<ChangeMove>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CChangeMoveU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAA424E50522E891BAE50068494D2121995270E27 (U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerMovement/<ChangeMove>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMoveU3Ed__11_System_Collections_IEnumerator_Reset_m7B4AACDC68C01945737EB73AB475C812E17A7326 (U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeMoveU3Ed__11_System_Collections_IEnumerator_Reset_m7B4AACDC68C01945737EB73AB475C812E17A7326_RuntimeMethod_var)));
	}
}
// System.Object PlayerMovement/<ChangeMove>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CChangeMoveU3Ed__11_System_Collections_IEnumerator_get_Current_mCB16B7A721D2E78AD507F20C1A47AA65C945500F (U3CChangeMoveU3Ed__11_t3CC3FDE7BF5BC7A2CED53CBA313AEE305C8BE274 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void PlayerMovement/<waitForKeyPress>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitForKeyPressU3Ed__12__ctor_mA21F6C9F7269E56EEC845EFB3FF2075EFFDB27DB (U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerMovement/<waitForKeyPress>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitForKeyPressU3Ed__12_System_IDisposable_Dispose_m9141DEB658F6776CFE20C595C3EC415B592761EC (U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerMovement/<waitForKeyPress>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwaitForKeyPressU3Ed__12_MoveNext_mC7D0D6F8463BE7D9D6136F37795E834E79EAE4E6 (U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_m59B7C8C8B1387CE86B93403312B8EE70B46294A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0078;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// bool done = false;
		__this->set_U3CdoneU3E5__2_4((bool)0);
		// int pos = -1;
		__this->set_U3CposU3E5__3_5((-1));
		// float delayTime = Time.time + 0.25f;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CdelayTimeU3E5__4_6(((float)il2cpp_codegen_add((float)L_4, (float)(0.25f))));
		// enable = false;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_5 = V_1;
		L_5->set_enable_7((bool)0);
		goto IL_007f;
	}

IL_0046:
	{
		// if(Time.time > delayTime){
		float L_6;
		L_6 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_7 = __this->get_U3CdelayTimeU3E5__4_6();
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_0068;
		}
	}
	{
		// pos = GetPosByKey();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_8 = V_1;
		int32_t L_9;
		L_9 = PlayerMovement_GetPosByKey_mCBBD4CA1F7F1BAC7ADB8A7BA5C11850C30D52787(L_8, /*hidden argument*/NULL);
		__this->set_U3CposU3E5__3_5(L_9);
		// if(pos != -1){
		int32_t L_10 = __this->get_U3CposU3E5__3_5();
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0087;
		}
	}

IL_0068:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0078:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_007f:
	{
		// while(!done){
		bool L_11 = __this->get_U3CdoneU3E5__2_4();
		if (!L_11)
		{
			goto IL_0046;
		}
	}

IL_0087:
	{
		// if(pos != 4){
		int32_t L_12 = __this->get_U3CposU3E5__3_5();
		if ((((int32_t)L_12) == ((int32_t)4)))
		{
			goto IL_00fb;
		}
	}
	{
		// DropMove(pos);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_13 = V_1;
		int32_t L_14 = __this->get_U3CposU3E5__3_5();
		PlayerMovement_DropMove_m845C5CEE0253D97C9D345648C26F63554B1BC785(L_13, L_14, /*hidden argument*/NULL);
		// if(col2d != null){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_15 = __this->get_col2d_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00fb;
		}
	}
	{
		// mvs[pos] = col2d.gameObject.GetComponent<IMoveBehaviour>().GetMove(gameObject);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_17 = V_1;
		IMoveBehaviourU5BU5D_t3FEEF61B7CB38471C072EA8F8C509778727ECC68* L_18 = L_17->get_mvs_8();
		int32_t L_19 = __this->get_U3CposU3E5__3_5();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_20 = __this->get_col2d_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		RuntimeObject* L_22;
		L_22 = GameObject_GetComponent_TisIMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_m59B7C8C8B1387CE86B93403312B8EE70B46294A6(L_21, /*hidden argument*/GameObject_GetComponent_TisIMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_m59B7C8C8B1387CE86B93403312B8EE70B46294A6_RuntimeMethod_var);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_23 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* IMoveBehaviour IMoveBehaviour::GetMove(UnityEngine.GameObject) */, IMoveBehaviour_t3E942A6F41B5A63C4A2A5D031845722D62629E03_il2cpp_TypeInfo_var, L_22, L_24);
		ArrayElementTypeCheck (L_18, L_25);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject*)L_25);
		// mvsObj[pos] = col2d.gameObject;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_26 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_27 = L_26->get_mvsObj_9();
		int32_t L_28 = __this->get_U3CposU3E5__3_5();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_29 = __this->get_col2d_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_29, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_30);
		// col2d.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_31 = __this->get_col2d_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_31, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_32, (bool)0, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		// enable = true;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_33 = V_1;
		L_33->set_enable_7((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object PlayerMovement/<waitForKeyPress>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitForKeyPressU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA3FAF0CA45C4DB798F6B5D5FE74171ADCF9A6239 (U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerMovement/<waitForKeyPress>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitForKeyPressU3Ed__12_System_Collections_IEnumerator_Reset_m903EC91743CC9680758E04E54E5B39512471DE2A (U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwaitForKeyPressU3Ed__12_System_Collections_IEnumerator_Reset_m903EC91743CC9680758E04E54E5B39512471DE2A_RuntimeMethod_var)));
	}
}
// System.Object PlayerMovement/<waitForKeyPress>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitForKeyPressU3Ed__12_System_Collections_IEnumerator_get_Current_mDC13FAF0683A5FA0440A870AE0D6E6BDA54B9F47 (U3CwaitForKeyPressU3Ed__12_tBB3913C0AA0B498C79DC6E50288F4AFDAA977B2D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
