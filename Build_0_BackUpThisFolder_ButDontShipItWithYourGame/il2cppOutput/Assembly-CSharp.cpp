#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Comparison`1<UnityEngine.GameObject>
struct Comparison_1_t48F09636634857D61E406009D472941BB2A2358F;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BoostPlatform
struct BoostPlatform_t5C54908576139DEBAD77EA38FB01A72B9813AA18;
// BreakForce
struct BreakForce_t569CE76946BFDF2755502FA1582EF9197A01622F;
// BreakPlatform
struct BreakPlatform_t85B27B1279BBC4596C4933C6F411DD618E139955;
// CFX_AutoDestructShuriken
struct CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3;
// CFX_AutoRotate
struct CFX_AutoRotate_t6DF14621E2CB1E17A063E58A98C18828CEB51D4E;
// CFX_AutoStopLoopedEffect
struct CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A;
// CFX_Demo_New
struct CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31;
// CFX_Demo_RandomDir
struct CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2;
// CFX_Demo_RandomDirectionTranslate
struct CFX_Demo_RandomDirectionTranslate_t3680095D7DFA9CE930384E0F1126006F7310D853;
// CFX_Demo_RotateCamera
struct CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897;
// CFX_Demo_Translate
struct CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902;
// CFX_LightFlicker
struct CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B;
// CFX_LightIntensityFade
struct CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CharacterMovement
struct CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// CollisionRay
struct CollisionRay_t9EE7329C4598F095D4980940D0CE2CC98A74197E;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DiveForce
struct DiveForce_tC9A1036BE26E7E6D19BAF1009A3512950451774A;
// WebXR.Interactions.FPSCounter
struct FPSCounter_t7417F8E6C1F1B4AB0DFB3CBD7A71B68A96921E66;
// Flapping
struct Flapping_t4C88BAB95E8FCCF596C31FE6979CF1B67CF31940;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GlideControl
struct GlideControl_t510AEDF1DF8E236772AF3A291A4C59DFE9CD5F2C;
// GroundAirEventManager
struct GroundAirEventManager_t50D1A55663A08FA52B5C1C3E83F7E92853A21895;
// Hand_L
struct Hand_L_t9CA7778AA2547A7AA0F2CD880C41002445A34620;
// Hand_R
struct Hand_R_tDDA4D33378F8E8C87C294892678E2C9345711391;
// HooksLawDampen
struct HooksLawDampen_tA7E3A6F2C4F581EA3878340B5882D5F9713F4979;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// IK_Hand
struct IK_Hand_t2695DB1E7C6B4731D7B4356B57AED6300E69DFEE;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// ImpactSystem
struct ImpactSystem_tE02ACD2EE34954ADECC7ABDE7EAFCAFDA0847850;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// InvertPlatform
struct InvertPlatform_tE5AE295C4A650146301B016F4F96FA2DF21E1438;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// JoystickMovement
struct JoystickMovement_tBA4B340FE18515419CD2F3FB2059B56BC990BA0D;
// JumpPlatform
struct JumpPlatform_t1DD8E1B0CBE2D3F8FF2D6A5B8427CB1946B3ED37;
// Ladder
struct Ladder_t80787B68F0CCDF3F94C66C38E602881D6326F841;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// MeshGenerator
struct MeshGenerator_t25A0679B7EB967AA082713868489AF33C0249621;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// ReflectPlatform
struct ReflectPlatform_t937A7B0002EB6535D29C1DD54FAC79B50D0A73C0;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Skiing
struct Skiing_tD8BB293DE98F9BE839C94A1536D2AEF8D1D6AE97;
// SnapTurn
struct SnapTurn_t67E613B5620540D106582BD5F889E125FD4FA608;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TiltControl
struct TiltControl_t59F3FE49FD2814A774278AAD12415EF241A93CFC;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// VelocityText
struct VelocityText_t7AF8317B7E6D0263448574344F74D73FEFFCC1C6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WingsBelowCamera
struct WingsBelowCamera_t2215302E1537E96D0C2E409E878A28CBAC81D476;
// angleToHUD
struct angleToHUD_tBA6DBEC4EB2ECC0EFBFB36D36EBE45FD9FB1C9FE;
// blink
struct blink_t163770A9B0A65D5E6B462A4F0E180A2F60269CF6;
// canvasLayerMove
struct canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE;
// fillWithMove
struct fillWithMove_t86C01CFDFFC6AFE53ACC3289B31F3CFD34D69949;
// opacityWithMove
struct opacityWithMove_tBB85E90725B164EAD0B34B3B436CDD5B880D8FD1;
// rotateWithMove
struct rotateWithMove_t6F9099F3D4C554EA1F717AA02BD9D3BEAC2D028B;
// slideWithMove
struct slideWithMove_t4661C9241CCB3DA9AD203C251D0D4E9C986F7000;
// CFX_AutoDestructShuriken/<CheckIfAlive>d__2
struct U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511;
// CFX_Demo_New/<>c
struct U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963;
// CFX_Demo_New/<CheckForDeletedParticles>d__25
struct U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t48F09636634857D61E406009D472941BB2A2358F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05B8DD997BF9F7D0806A038EC22F9D13BEB77E76;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral84F265F9B20CE54405899CB221EF7C691FC5D61C;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralBEBC54B2B3D2A59541375C139C15B52B4B751D64;
IL2CPP_EXTERN_C String_t* _stringLiteralC1EBBA863C4CF7E0932C8325E2A21E01AD33310F;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD1046DA385CC71E65DC28A26FB63D2FD75B98985;
IL2CPP_EXTERN_C String_t* _stringLiteralD238E770F2389DAB6F8D3B05BE9EE1B08FCA9312;
IL2CPP_EXTERN_C String_t* _stringLiteralE17E01A6CDB454BE09B74C544A2901D6C9F990AF;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TiscanvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE_m746B600CAE458C20442F9D974A0419FFA8C65372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mCBEE22E31FA4513E11FB040E9AADCD6E718DBCA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckForDeletedParticlesU3Ed__25_System_Collections_IEnumerator_Reset_m766243C9C80375A777FE2A13B85C392B56EB0DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_Reset_m8659443A2B072F0CFA4D0D77AFD3821588EE1068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__16_0_m269E213B94F91F8696A3055A7EB523172900185C_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CFX_AutoDestructShuriken/<CheckIfAlive>d__2
struct U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511  : public RuntimeObject
{
	// System.Int32 CFX_AutoDestructShuriken/<CheckIfAlive>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CFX_AutoDestructShuriken/<CheckIfAlive>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CFX_AutoDestructShuriken CFX_AutoDestructShuriken/<CheckIfAlive>d__2::<>4__this
	CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* ___U3CU3E4__this_2;
	// UnityEngine.ParticleSystem CFX_AutoDestructShuriken/<CheckIfAlive>d__2::<ps>5__2
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___U3CpsU3E5__2_3;
};

// CFX_Demo_New/<>c
struct U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963  : public RuntimeObject
{
};

// CFX_Demo_New/<CheckForDeletedParticles>d__25
struct U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0  : public RuntimeObject
{
	// System.Int32 CFX_Demo_New/<CheckForDeletedParticles>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CFX_Demo_New/<CheckForDeletedParticles>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CFX_Demo_New CFX_Demo_New/<CheckForDeletedParticles>d__25::<>4__this
	CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* ___U3CU3E4__this_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.ContactPoint
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Comparison`1<UnityEngine.GameObject>
struct Comparison_1_t48F09636634857D61E406009D472941BB2A2358F  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// BoostPlatform
struct BoostPlatform_t5C54908576139DEBAD77EA38FB01A72B9813AA18  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BoostPlatform::boostForce
	float ___boostForce_4;
	// UnityEngine.Rigidbody BoostPlatform::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
};

// BreakForce
struct BreakForce_t569CE76946BFDF2755502FA1582EF9197A01622F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody BreakForce::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
	// System.Single BreakForce::breakForce
	float ___breakForce_5;
	// UnityEngine.InputSystem.InputActionReference BreakForce::joystickRightClickReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___joystickRightClickReference_6;
};

// BreakPlatform
struct BreakPlatform_t85B27B1279BBC4596C4933C6F411DD618E139955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BreakPlatform::breakForce
	float ___breakForce_4;
};

// CFX_AutoDestructShuriken
struct CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CFX_AutoDestructShuriken::OnlyDeactivate
	bool ___OnlyDeactivate_4;
};

// CFX_AutoRotate
struct CFX_AutoRotate_t6DF14621E2CB1E17A063E58A98C18828CEB51D4E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 CFX_AutoRotate::rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation_4;
	// UnityEngine.Space CFX_AutoRotate::space
	int32_t ___space_5;
};

// CFX_AutoStopLoopedEffect
struct CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_AutoStopLoopedEffect::effectDuration
	float ___effectDuration_4;
	// System.Single CFX_AutoStopLoopedEffect::d
	float ___d_5;
};

// CFX_Demo_New
struct CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Renderer CFX_Demo_New::groundRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___groundRenderer_4;
	// UnityEngine.Collider CFX_Demo_New::groundCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___groundCollider_5;
	// UnityEngine.UI.Image CFX_Demo_New::slowMoBtn
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___slowMoBtn_6;
	// UnityEngine.UI.Text CFX_Demo_New::slowMoLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___slowMoLabel_7;
	// UnityEngine.UI.Image CFX_Demo_New::camRotBtn
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___camRotBtn_8;
	// UnityEngine.UI.Text CFX_Demo_New::camRotLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___camRotLabel_9;
	// UnityEngine.UI.Image CFX_Demo_New::groundBtn
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___groundBtn_10;
	// UnityEngine.UI.Text CFX_Demo_New::groundLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___groundLabel_11;
	// UnityEngine.UI.Text CFX_Demo_New::EffectLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___EffectLabel_12;
	// UnityEngine.UI.Text CFX_Demo_New::EffectIndexLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___EffectIndexLabel_13;
	// UnityEngine.GameObject[] CFX_Demo_New::ParticleExamples
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ParticleExamples_14;
	// System.Int32 CFX_Demo_New::exampleIndex
	int32_t ___exampleIndex_15;
	// System.Boolean CFX_Demo_New::slowMo
	bool ___slowMo_16;
	// UnityEngine.Vector3 CFX_Demo_New::defaultCamPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultCamPosition_17;
	// UnityEngine.Quaternion CFX_Demo_New::defaultCamRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___defaultCamRotation_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CFX_Demo_New::onScreenParticles
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___onScreenParticles_19;
};

// CFX_Demo_RandomDir
struct CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 CFX_Demo_RandomDir::min
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___min_4;
	// UnityEngine.Vector3 CFX_Demo_RandomDir::max
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___max_5;
};

// CFX_Demo_RandomDirectionTranslate
struct CFX_Demo_RandomDirectionTranslate_t3680095D7DFA9CE930384E0F1126006F7310D853  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_Demo_RandomDirectionTranslate::speed
	float ___speed_4;
	// UnityEngine.Vector3 CFX_Demo_RandomDirectionTranslate::baseDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___baseDir_5;
	// UnityEngine.Vector3 CFX_Demo_RandomDirectionTranslate::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_6;
	// System.Boolean CFX_Demo_RandomDirectionTranslate::gravity
	bool ___gravity_7;
	// UnityEngine.Vector3 CFX_Demo_RandomDirectionTranslate::dir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir_8;
};

// CFX_Demo_RotateCamera
struct CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_Demo_RotateCamera::speed
	float ___speed_5;
	// UnityEngine.Transform CFX_Demo_RotateCamera::rotationCenter
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rotationCenter_6;
};

// CFX_Demo_Translate
struct CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_Demo_Translate::speed
	float ___speed_4;
	// UnityEngine.Vector3 CFX_Demo_Translate::rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation_5;
	// UnityEngine.Vector3 CFX_Demo_Translate::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_6;
	// System.Boolean CFX_Demo_Translate::gravity
	bool ___gravity_7;
	// UnityEngine.Vector3 CFX_Demo_Translate::dir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir_8;
};

// CFX_LightFlicker
struct CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CFX_LightFlicker::loop
	bool ___loop_4;
	// System.Single CFX_LightFlicker::smoothFactor
	float ___smoothFactor_5;
	// System.Single CFX_LightFlicker::addIntensity
	float ___addIntensity_6;
	// System.Single CFX_LightFlicker::minIntensity
	float ___minIntensity_7;
	// System.Single CFX_LightFlicker::maxIntensity
	float ___maxIntensity_8;
	// System.Single CFX_LightFlicker::baseIntensity
	float ___baseIntensity_9;
};

// CFX_LightIntensityFade
struct CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_LightIntensityFade::duration
	float ___duration_4;
	// System.Single CFX_LightIntensityFade::delay
	float ___delay_5;
	// System.Single CFX_LightIntensityFade::finalIntensity
	float ___finalIntensity_6;
	// System.Single CFX_LightIntensityFade::baseIntensity
	float ___baseIntensity_7;
	// System.Boolean CFX_LightIntensityFade::autodestruct
	bool ___autodestruct_8;
	// System.Single CFX_LightIntensityFade::p_lifetime
	float ___p_lifetime_9;
	// System.Single CFX_LightIntensityFade::p_delay
	float ___p_delay_10;
};

// CharacterMovement
struct CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CharacterMovement::moveSpeed
	float ___moveSpeed_4;
	// System.Single CharacterMovement::skiingSpeed
	float ___skiingSpeed_5;
	// System.Single CharacterMovement::breakForce
	float ___breakForce_6;
	// System.Single CharacterMovement::misclickBreakForce
	float ___misclickBreakForce_7;
	// System.Single CharacterMovement::tiltForce
	float ___tiltForce_8;
	// System.Single CharacterMovement::maxTiltToBodyRotationRatio
	float ___maxTiltToBodyRotationRatio_9;
	// System.Single CharacterMovement::minTiltToBodyRotationRatio
	float ___minTiltToBodyRotationRatio_10;
	// System.Single CharacterMovement::glidingForce
	float ___glidingForce_11;
	// System.Single CharacterMovement::flappingForce
	float ___flappingForce_12;
	// System.Single CharacterMovement::inAirTime
	float ___inAirTime_13;
	// System.Single CharacterMovement::glideActivateTime
	float ___glideActivateTime_14;
	// System.Single CharacterMovement::cooldownPeriodInSeconds
	float ___cooldownPeriodInSeconds_15;
	// System.Single CharacterMovement::loseImpact
	float ___loseImpact_16;
	// System.Single CharacterMovement::slowImpact
	float ___slowImpact_17;
	// System.Single CharacterMovement::slowMultiplier
	float ___slowMultiplier_18;
	// UnityEngine.Rigidbody CharacterMovement::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_19;
	// System.Single CharacterMovement::lastBoostTimeStamp
	float ___lastBoostTimeStamp_20;
	// System.Boolean CharacterMovement::grounded
	bool ___grounded_21;
	// System.Boolean CharacterMovement::isUphill
	bool ___isUphill_22;
	// UnityEngine.UI.Text CharacterMovement::debugText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___debugText_23;
	// UnityEngine.UI.Text CharacterMovement::debugText1
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___debugText1_24;
	// UnityEngine.UI.Text CharacterMovement::debugText2
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___debugText2_25;
	// UnityEngine.GameObject CharacterMovement::cam
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cam_26;
	// UnityEngine.InputSystem.InputActionReference CharacterMovement::joystickLeftClickReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___joystickLeftClickReference_27;
	// UnityEngine.InputSystem.InputActionReference CharacterMovement::joystickRightClickReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___joystickRightClickReference_28;
	// UnityEngine.InputSystem.InputActionReference CharacterMovement::leftJoystickReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___leftJoystickReference_29;
	// UnityEngine.InputSystem.InputActionReference CharacterMovement::rightControllerVelocity
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___rightControllerVelocity_30;
	// UnityEngine.InputSystem.InputActionReference CharacterMovement::leftControllerVelocity
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___leftControllerVelocity_31;
	// UnityEngine.InputSystem.InputActionReference CharacterMovement::rightControllerPosition
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___rightControllerPosition_32;
	// UnityEngine.InputSystem.InputActionReference CharacterMovement::leftControllerPosition
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___leftControllerPosition_33;
};

// CollisionRay
struct CollisionRay_t9EE7329C4598F095D4980940D0CE2CC98A74197E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CollisionRay::grounded
	bool ___grounded_4;
	// UnityEngine.Rigidbody CollisionRay::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
};

// DiveForce
struct DiveForce_tC9A1036BE26E7E6D19BAF1009A3512950451774A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DiveForce::diveForce
	float ___diveForce_4;
	// UnityEngine.Rigidbody DiveForce::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
	// UnityEngine.InputSystem.InputActionReference DiveForce::joystickLeftClickReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___joystickLeftClickReference_6;
};

// WebXR.Interactions.FPSCounter
struct FPSCounter_t7417F8E6C1F1B4AB0DFB3CBD7A71B68A96921E66  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text WebXR.Interactions.FPSCounter::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
	// System.Single WebXR.Interactions.FPSCounter::fps
	float ___fps_5;
	// System.Single WebXR.Interactions.FPSCounter::framesCount
	float ___framesCount_6;
	// System.Single WebXR.Interactions.FPSCounter::lastCheck
	float ___lastCheck_7;
	// System.Single WebXR.Interactions.FPSCounter::rate
	float ___rate_8;
};

// Flapping
struct Flapping_t4C88BAB95E8FCCF596C31FE6979CF1B67CF31940  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Flapping::flappingForce
	float ___flappingForce_4;
	// UnityEngine.Rigidbody Flapping::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
	// UnityEngine.InputSystem.InputActionReference Flapping::rightControllerVelocity
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___rightControllerVelocity_6;
	// UnityEngine.InputSystem.InputActionReference Flapping::leftControllerVelocity
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___leftControllerVelocity_7;
};

// GlideControl
struct GlideControl_t510AEDF1DF8E236772AF3A291A4C59DFE9CD5F2C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GlideControl::maxTiltToBodyRotationRatio
	float ___maxTiltToBodyRotationRatio_4;
	// System.Single GlideControl::minTiltToBodyRotationRatio
	float ___minTiltToBodyRotationRatio_5;
	// System.Single GlideControl::glideActivateTime
	float ___glideActivateTime_6;
	// System.Single GlideControl::glidingForce
	float ___glidingForce_7;
	// System.Single GlideControl::inAirTime
	float ___inAirTime_8;
	// UnityEngine.Rigidbody GlideControl::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_9;
	// UnityEngine.Camera GlideControl::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_10;
	// UnityEngine.InputSystem.InputActionReference GlideControl::rightControllerPosition
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___rightControllerPosition_11;
	// UnityEngine.InputSystem.InputActionReference GlideControl::leftControllerPosition
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___leftControllerPosition_12;
};

// GroundAirEventManager
struct GroundAirEventManager_t50D1A55663A08FA52B5C1C3E83F7E92853A21895  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent GroundAirEventManager::onGround
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onGround_4;
	// UnityEngine.Events.UnityEvent GroundAirEventManager::inAir
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___inAir_5;
	// System.Single GroundAirEventManager::inAirTimeThreshold
	float ___inAirTimeThreshold_6;
	// System.Boolean GroundAirEventManager::grounded
	bool ___grounded_7;
	// System.Single GroundAirEventManager::inAirTime
	float ___inAirTime_8;
};

// Hand_L
struct Hand_L_t9CA7778AA2547A7AA0F2CD880C41002445A34620  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionReference Hand_L::leftGrabReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___leftGrabReference_4;
	// UnityEngine.InputSystem.InputActionReference Hand_L::leftTriggerReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___leftTriggerReference_5;
	// UnityEngine.GameObject Hand_L::handModel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___handModel_6;
	// UnityEngine.Animator Hand_L::handAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___handAnimator_7;
};

// Hand_R
struct Hand_R_tDDA4D33378F8E8C87C294892678E2C9345711391  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionReference Hand_R::rightGrabReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___rightGrabReference_4;
	// UnityEngine.InputSystem.InputActionReference Hand_R::rightTriggerReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___rightTriggerReference_5;
	// UnityEngine.GameObject Hand_R::handModel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___handModel_6;
	// UnityEngine.Animator Hand_R::handAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___handAnimator_7;
};

// HooksLawDampen
struct HooksLawDampen_tA7E3A6F2C4F581EA3878340B5882D5F9713F4979  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// IK_Hand
struct IK_Hand_t2695DB1E7C6B4731D7B4356B57AED6300E69DFEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject IK_Hand::followObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___followObject_4;
	// System.Single IK_Hand::Z
	float ___Z_5;
	// System.Single IK_Hand::X
	float ___X_6;
	// System.Single IK_Hand::Y
	float ___Y_7;
	// System.Single IK_Hand::pZ
	float ___pZ_8;
	// System.Single IK_Hand::pX
	float ___pX_9;
	// System.Single IK_Hand::pY
	float ___pY_10;
};

// ImpactSystem
struct ImpactSystem_tE02ACD2EE34954ADECC7ABDE7EAFCAFDA0847850  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody ImpactSystem::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
	// System.Single ImpactSystem::impactThreshold
	float ___impactThreshold_5;
	// System.Single ImpactSystem::inAirTime
	float ___inAirTime_6;
};

// InvertPlatform
struct InvertPlatform_tE5AE295C4A650146301B016F4F96FA2DF21E1438  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody InvertPlatform::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
};

// JoystickMovement
struct JoystickMovement_tBA4B340FE18515419CD2F3FB2059B56BC990BA0D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single JoystickMovement::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.InputSystem.InputActionReference JoystickMovement::leftJoystickReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___leftJoystickReference_5;
	// UnityEngine.InputSystem.InputActionReference JoystickMovement::joystickLeftClickReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___joystickLeftClickReference_6;
	// UnityEngine.Camera JoystickMovement::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_7;
	// UnityEngine.Rigidbody JoystickMovement::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_8;
	// System.Single JoystickMovement::lastBoostTimeStamp
	float ___lastBoostTimeStamp_9;
	// System.Single JoystickMovement::cooldownPeriodInSeconds
	float ___cooldownPeriodInSeconds_10;
};

// JumpPlatform
struct JumpPlatform_t1DD8E1B0CBE2D3F8FF2D6A5B8427CB1946B3ED37  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single JumpPlatform::jumpForce
	float ___jumpForce_4;
	// UnityEngine.Rigidbody JumpPlatform::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
};

// Ladder
struct Ladder_t80787B68F0CCDF3F94C66C38E602881D6326F841  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Ladder::ladderForce
	float ___ladderForce_4;
	// UnityEngine.Rigidbody Ladder::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
	// UnityEngine.Vector3 Ladder::vel
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vel_6;
};

// MeshGenerator
struct MeshGenerator_t25A0679B7EB967AA082713868489AF33C0249621  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh MeshGenerator::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	// UnityEngine.Vector3[] MeshGenerator::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_5;
	// System.Int32[] MeshGenerator::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_6;
	// System.Int32 MeshGenerator::xSize
	int32_t ___xSize_7;
	// System.Int32 MeshGenerator::zSize
	int32_t ___zSize_8;
};

// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 MouseLook::rotation
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rotation_4;
	// System.Single MouseLook::speed
	float ___speed_5;
};

// ReflectPlatform
struct ReflectPlatform_t937A7B0002EB6535D29C1DD54FAC79B50D0A73C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody ReflectPlatform::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
	// System.Boolean ReflectPlatform::invertX
	bool ___invertX_5;
	// System.Boolean ReflectPlatform::invertZ
	bool ___invertZ_6;
	// System.Single ReflectPlatform::timestamp
	float ___timestamp_7;
	// UnityEngine.GameObject ReflectPlatform::effect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___effect_8;
};

// Skiing
struct Skiing_tD8BB293DE98F9BE839C94A1536D2AEF8D1D6AE97  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Skiing::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
	// UnityEngine.Rigidbody Skiing::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
	// System.Single Skiing::misclickBreakForce
	float ___misclickBreakForce_6;
	// System.Single Skiing::skiingSpeed
	float ___skiingSpeed_7;
	// System.Single Skiing::lastBoostTimeStamp
	float ___lastBoostTimeStamp_8;
	// UnityEngine.InputSystem.InputActionReference Skiing::joystickLeftClickReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___joystickLeftClickReference_9;
	// System.Boolean Skiing::isUphill
	bool ___isUphill_10;
};

// SnapTurn
struct SnapTurn_t67E613B5620540D106582BD5F889E125FD4FA608  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionReference SnapTurn::joystickAxisReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___joystickAxisReference_4;
	// System.Boolean SnapTurn::firstFlick
	bool ___firstFlick_5;
	// UnityEngine.Vector2 SnapTurn::valueFlick
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___valueFlick_6;
};

// TiltControl
struct TiltControl_t59F3FE49FD2814A774278AAD12415EF241A93CFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TiltControl::maxTiltToBodyRotationRatio
	float ___maxTiltToBodyRotationRatio_4;
	// System.Single TiltControl::minTiltToBodyRotationRatio
	float ___minTiltToBodyRotationRatio_5;
	// System.Single TiltControl::tiltForce
	float ___tiltForce_6;
	// UnityEngine.Rigidbody TiltControl::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_7;
	// UnityEngine.Camera TiltControl::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VelocityText
struct VelocityText_t7AF8317B7E6D0263448574344F74D73FEFFCC1C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject VelocityText::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.UI.Text VelocityText::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_5;
	// UnityEngine.Rigidbody VelocityText::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
};

// WingsBelowCamera
struct WingsBelowCamera_t2215302E1537E96D0C2E409E878A28CBAC81D476  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject WingsBelowCamera::followObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___followObject_4;
};

// angleToHUD
struct angleToHUD_tBA6DBEC4EB2ECC0EFBFB36D36EBE45FD9FB1C9FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text angleToHUD::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_4;
	// AxisType angleToHUD::_axis
	int32_t ____axis_5;
};

// blink
struct blink_t163770A9B0A65D5E6B462A4F0E180A2F60269CF6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean blink::_blinking
	bool ____blinking_4;
	// UnityEngine.UI.Image blink::_image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____image_5;
	// UnityEngine.Color blink::_color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____color_6;
	// System.Single blink::_speed
	float ____speed_7;
};

// canvasLayerMove
struct canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform canvasLayerMove::_trackedObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____trackedObject_4;
	// System.Boolean canvasLayerMove::_track
	bool ____track_5;
	// System.Single canvasLayerMove::_rotateSpeed
	float ____rotateSpeed_6;
	// System.Single canvasLayerMove::_deltaX
	float ____deltaX_7;
	// System.Single canvasLayerMove::_deltaY
	float ____deltaY_8;
};

// fillWithMove
struct fillWithMove_t86C01CFDFFC6AFE53ACC3289B31F3CFD34D69949  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AxisType fillWithMove::_axis
	int32_t ____axis_4;
	// System.Single fillWithMove::_min
	float ____min_5;
	// System.Single fillWithMove::_max
	float ____max_6;
	// System.Boolean fillWithMove::_moveWithSight
	bool ____moveWithSight_7;
	// System.Single fillWithMove::_speed
	float ____speed_8;
	// System.Single fillWithMove::_normalizedValue
	float ____normalizedValue_9;
	// System.Single fillWithMove::_axisFloat
	float ____axisFloat_10;
	// System.Single fillWithMove::_lerpValue
	float ____lerpValue_11;
	// UnityEngine.UI.Image fillWithMove::_image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____image_12;
};

// opacityWithMove
struct opacityWithMove_tBB85E90725B164EAD0B34B3B436CDD5B880D8FD1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// canvasLayerMove opacityWithMove::_canvas
	canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE* ____canvas_4;
	// UnityEngine.Color opacityWithMove::_defaultColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____defaultColor_5;
	// UnityEngine.SpriteRenderer opacityWithMove::_sprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ____sprite_6;
	// System.Single opacityWithMove::_speed
	float ____speed_7;
	// System.Boolean opacityWithMove::_moveWithSight
	bool ____moveWithSight_8;
	// System.Single opacityWithMove::_opacity
	float ____opacity_9;
	// AxisType opacityWithMove::_axis
	int32_t ____axis_10;
	// System.Single opacityWithMove::_opacityChangeRatio
	float ____opacityChangeRatio_11;
};

// rotateWithMove
struct rotateWithMove_t6F9099F3D4C554EA1F717AA02BD9D3BEAC2D028B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single rotateWithMove::_max
	float ____max_4;
	// System.Single rotateWithMove::_min
	float ____min_5;
	// System.Single rotateWithMove::_speed
	float ____speed_6;
	// System.Single rotateWithMove::_normalizedValue
	float ____normalizedValue_7;
	// System.Single rotateWithMove::_lerpValue
	float ____lerpValue_8;
	// System.Boolean rotateWithMove::_moveWithSight
	bool ____moveWithSight_9;
	// AxisType rotateWithMove::_axis
	int32_t ____axis_10;
	// UnityEngine.RectTransform rotateWithMove::_thisTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____thisTransform_11;
};

// slideWithMove
struct slideWithMove_t4661C9241CCB3DA9AD203C251D0D4E9C986F7000  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single slideWithMove::_min
	float ____min_4;
	// System.Single slideWithMove::_max
	float ____max_5;
	// System.Boolean slideWithMove::_moveWithSight
	bool ____moveWithSight_6;
	// System.Single slideWithMove::_speed
	float ____speed_7;
	// System.Single slideWithMove::_normalizedValue
	float ____normalizedValue_8;
	// System.Single slideWithMove::_axisFloat
	float ____axisFloat_9;
	// System.Single slideWithMove::_lerpValue
	float ____lerpValue_10;
	// AxisType slideWithMove::_axis
	int32_t ____axis_11;
	// UnityEngine.RectTransform slideWithMove::_thisTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____thisTransform_12;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// CFX_AutoDestructShuriken/<CheckIfAlive>d__2

// CFX_AutoDestructShuriken/<CheckIfAlive>d__2

// CFX_Demo_New/<>c
struct U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields
{
	// CFX_Demo_New/<>c CFX_Demo_New/<>c::<>9
	U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.GameObject> CFX_Demo_New/<>c::<>9__16_0
	Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* ___U3CU3E9__16_0_1;
};

// CFX_Demo_New/<>c

// CFX_Demo_New/<CheckForDeletedParticles>d__25

// CFX_Demo_New/<CheckForDeletedParticles>d__25

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.InputSystem.InputBinding

// UnityEngine.InputSystem.InputBinding

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.ContactPoint

// UnityEngine.ContactPoint

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// System.Comparison`1<UnityEngine.GameObject>

// System.Comparison`1<UnityEngine.GameObject>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.InputSystem.InputActionReference

// UnityEngine.InputSystem.InputActionReference

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Light

// UnityEngine.Light

// UnityEngine.MeshCollider

// UnityEngine.MeshCollider

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// BoostPlatform

// BoostPlatform

// BreakForce

// BreakForce

// BreakPlatform

// BreakPlatform

// CFX_AutoDestructShuriken

// CFX_AutoDestructShuriken

// CFX_AutoRotate

// CFX_AutoRotate

// CFX_AutoStopLoopedEffect

// CFX_AutoStopLoopedEffect

// CFX_Demo_New

// CFX_Demo_New

// CFX_Demo_RandomDir

// CFX_Demo_RandomDir

// CFX_Demo_RandomDirectionTranslate

// CFX_Demo_RandomDirectionTranslate

// CFX_Demo_RotateCamera
struct CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields
{
	// System.Boolean CFX_Demo_RotateCamera::rotating
	bool ___rotating_4;
};

// CFX_Demo_RotateCamera

// CFX_Demo_Translate

// CFX_Demo_Translate

// CFX_LightFlicker

// CFX_LightFlicker

// CFX_LightIntensityFade

// CFX_LightIntensityFade

// CharacterMovement

// CharacterMovement

// CollisionRay

// CollisionRay

// DiveForce

// DiveForce

// WebXR.Interactions.FPSCounter

// WebXR.Interactions.FPSCounter

// Flapping

// Flapping

// GlideControl

// GlideControl

// GroundAirEventManager

// GroundAirEventManager

// Hand_L

// Hand_L

// Hand_R

// Hand_R

// HooksLawDampen

// HooksLawDampen

// IK_Hand

// IK_Hand

// ImpactSystem

// ImpactSystem

// InvertPlatform

// InvertPlatform

// JoystickMovement

// JoystickMovement

// JumpPlatform

// JumpPlatform

// Ladder

// Ladder

// MeshGenerator

// MeshGenerator

// MouseLook

// MouseLook

// ReflectPlatform

// ReflectPlatform

// Skiing

// Skiing

// SnapTurn

// SnapTurn

// TiltControl

// TiltControl

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// VelocityText

// VelocityText

// WingsBelowCamera

// WingsBelowCamera

// angleToHUD

// angleToHUD

// blink

// blink

// canvasLayerMove

// canvasLayerMove

// fillWithMove

// fillWithMove

// opacityWithMove

// opacityWithMove

// rotateWithMove

// rotateWithMove

// slideWithMove

// slideWithMove

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 m_Items[1];

	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___0_comparison, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;

// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___0_withChildren, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CFX_Demo_Translate>()
inline CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Comparison`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m3A0DAD29EFE86C10726A9BA34608E88B5BE199B9 (Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t48F09636634857D61E406009D472941BB2A2358F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_mCBEE22E31FA4513E11FB040E9AADCD6E718DBCA8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* ___0_comparison, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, Comparison_1_t48F09636634857D61E406009D472941BB2A2358F*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___0_comparison, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void CFX_Demo_New::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_UpdateUI_m3E3DA5EC770C0F2B84B5206F16CD8A2484BFD6E5 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void CFX_Demo_New::prevParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_prevParticle_m875BF4D9036B6C5B6259FFA0F787F90042B5D5F9 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) ;
// System.Void CFX_Demo_New::nextParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_nextParticle_mB5D2F30BF16AC1AD51964810AE12B27744B7E8E1 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) ;
// System.Void CFX_Demo_New::destroyParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_destroyParticles_m6E09B94A196E46E199429F9DE2AE0DD0F9079D24 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, const RuntimeMethod* method) ;
// UnityEngine.GameObject CFX_Demo_New::spawnParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CFX_Demo_New_spawnParticle_m55467606F2E464D8337565A08442BB4747468A26 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, int32_t ___1_relativeTo, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<CFX_AutoStopLoopedEffect>()
inline CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<CFX_AutoDestructShuriken>()
inline CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void CFX_Demo_New/<CheckForDeletedParticles>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__25__ctor_m920C1552D0B704439FAC777FD178B57829E2D1B6 (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void CFX_Demo_New/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m97F374614077DD1A825F933DED9B82FDCBAF91D4 (U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF (String_t* __this, String_t* ___0_strB, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Scale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, float ___2_angle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2__ctor_m107B0D89D95623B02336384ED1123B289D20231B (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_IsAlive_m4C919DCFF8EC256F68415875DF421DC53065AC7B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___0_withChildren, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, int32_t ___1_relativeTo, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A (float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_mB1D6A10F386CE1EEA99DB69486DDA6DA531D799D_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<canvasLayerMove>()
inline canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE* Component_GetComponentInParent_TiscanvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE_m746B600CAE458C20442F9D974A0419FFA8C65372 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CharacterMovement::OnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_OnGround_m42EB43EC57B90A6D9E38885A20A21B9E6CA906E0 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) ;
// System.Void CharacterMovement::InAir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_InAir_m8C653AEBE5489E27A976CFF92DF59F6D5A858A9C (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector3>()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void CharacterMovement::Impact(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_Impact_m93DB9B0EDF9A048A13F254ED578322BC7D384CE4 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_dir, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_duration, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// System.Void MeshGenerator::CreateShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_CreateShape_m7CBB9B4B015A3014B96996C08FC017E6A9B92171 (MeshGenerator_t25A0679B7EB967AA082713868489AF33C0249621* __this, const RuntimeMethod* method) ;
// System.Void MeshGenerator::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_UpdateMesh_mC84F560423DAF86C598F557D559E4278D5F9634E (MeshGenerator_t25A0679B7EB967AA082713868489AF33C0249621* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshCollider>()
inline MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void Hand_L::UpdateHandAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_L_UpdateHandAnimation_m9351709C20209E10DC61386278ED6E28F401BD0D (Hand_L_t9CA7778AA2547A7AA0F2CD880C41002445A34620* __this, const RuntimeMethod* method) ;
// System.Void Hand_R::UpdateHandAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_R_UpdateHandAnimation_m39270D8C87DF5F40B7A2EB97E73060954AF7935D (Hand_R_tDDA4D33378F8E8C87C294892678E2C9345711391* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, int32_t ___3_relativeTo, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPointOnBounds(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPointOnBounds_mBF2F0C0E76C5F11AED801931D780823A94630952 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
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
// System.Void CFX_AutoStopLoopedEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoStopLoopedEffect_OnEnable_mFAE624B7728A2F5F7865E685F4594BD0C9629FA5 (CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* __this, const RuntimeMethod* method) 
{
	{
		// d = effectDuration;
		float L_0 = __this->___effectDuration_4;
		__this->___d_5 = L_0;
		// }
		return;
	}
}
// System.Void CFX_AutoStopLoopedEffect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoStopLoopedEffect_Update_m8416521A39549298F203B44EF089B09EBD8793FD (CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* V_0 = NULL;
	{
		// if(d > 0)
		float L_0 = __this->___d_5;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// d -= Time.deltaTime;
		float L_1 = __this->___d_5;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___d_5 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if(d <= 0)
		float L_3 = __this->___d_5;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// this.GetComponent<ParticleSystem>().Stop(true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4;
		L_4 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		NullCheck(L_4);
		ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF(L_4, (bool)1, NULL);
		// CFX_Demo_Translate translation = this.gameObject.GetComponent<CFX_Demo_Translate>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* L_6;
		L_6 = GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E(L_5, GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E_RuntimeMethod_var);
		V_0 = L_6;
		// if(translation != null)
		CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// translation.enabled = false;
		CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* L_9 = V_0;
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void CFX_AutoStopLoopedEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoStopLoopedEffect__ctor_m66E2F5DD06231BC3D8D01C11A34D7D55BE5F7AAE (CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* __this, const RuntimeMethod* method) 
{
	{
		// public float effectDuration = 2.5f;
		__this->___effectDuration_4 = (2.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CFX_Demo_New::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_Awake_m2BEACA32BC84D821DF07AF25B7B0B99BFE8F7371 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t48F09636634857D61E406009D472941BB2A2358F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mCBEE22E31FA4513E11FB040E9AADCD6E718DBCA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__16_0_m269E213B94F91F8696A3055A7EB523172900185C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEBC54B2B3D2A59541375C139C15B52B4B751D64);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* G_B5_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* G_B5_1 = NULL;
	Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* G_B4_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* G_B4_1 = NULL;
	{
		// List<GameObject> particleExampleList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_0 = L_0;
		// int nbChild = this.transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		V_1 = L_2;
		// for(int i = 0; i < nbChild; i++)
		V_2 = 0;
		goto IL_0033;
	}

IL_0016:
	{
		// GameObject child = this.transform.GetChild(i).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_4 = V_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		V_3 = L_6;
		// particleExampleList.Add(child);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_3;
		NullCheck(L_7);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_7, L_8, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for(int i = 0; i < nbChild; i++)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0033:
	{
		// for(int i = 0; i < nbChild; i++)
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0016;
		}
	}
	{
		// particleExampleList.Sort( delegate(GameObject o1, GameObject o2) { return o1.name.CompareTo(o2.name); } );
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var);
		Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* L_13 = ((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1;
		Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* L_14 = L_13;
		G_B4_0 = L_14;
		G_B4_1 = L_12;
		if (L_14)
		{
			G_B5_0 = L_14;
			G_B5_1 = L_12;
			goto IL_0057;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var);
		U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* L_15 = ((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* L_16 = (Comparison_1_t48F09636634857D61E406009D472941BB2A2358F*)il2cpp_codegen_object_new(Comparison_1_t48F09636634857D61E406009D472941BB2A2358F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Comparison_1__ctor_m3A0DAD29EFE86C10726A9BA34608E88B5BE199B9(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__16_0_m269E213B94F91F8696A3055A7EB523172900185C_RuntimeMethod_var), NULL);
		Comparison_1_t48F09636634857D61E406009D472941BB2A2358F* L_17 = L_16;
		((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1), (void*)L_17);
		G_B5_0 = L_17;
		G_B5_1 = G_B4_1;
	}

IL_0057:
	{
		NullCheck(G_B5_1);
		List_1_Sort_mCBEE22E31FA4513E11FB040E9AADCD6E718DBCA8(G_B5_1, G_B5_0, List_1_Sort_mCBEE22E31FA4513E11FB040E9AADCD6E718DBCA8_RuntimeMethod_var);
		// ParticleExamples = particleExampleList.ToArray();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = V_0;
		NullCheck(L_18);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19;
		L_19 = List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C(L_18, List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		__this->___ParticleExamples_14 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ParticleExamples_14), (void*)L_19);
		// defaultCamPosition = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20;
		L_20 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		__this->___defaultCamPosition_17 = L_22;
		// defaultCamRotation = Camera.main.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23;
		L_23 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_24, NULL);
		__this->___defaultCamRotation_18 = L_25;
		// StartCoroutine("CheckForDeletedParticles");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_26;
		L_26 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralBEBC54B2B3D2A59541375C139C15B52B4B751D64, NULL);
		// UpdateUI();
		CFX_Demo_New_UpdateUI_m3E3DA5EC770C0F2B84B5206F16CD8A2484BFD6E5(__this, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_Update_m1172B662225E3FC12899D5FEEC66702AEA702EFB (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B11_1 = NULL;
	float G_B13_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B13_1;
	memset((&G_B13_1), 0, sizeof(G_B13_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B13_2 = NULL;
	{
		// if(Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// prevParticle();
		CFX_Demo_New_prevParticle_m875BF4D9036B6C5B6259FFA0F787F90042B5D5F9(__this, NULL);
		goto IL_0037;
	}

IL_0014:
	{
		// else if(Input.GetKeyDown(KeyCode.RightArrow))
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// nextParticle();
		CFX_Demo_New_nextParticle_mB5D2F30BF16AC1AD51964810AE12B27744B7E8E1(__this, NULL);
		goto IL_0037;
	}

IL_0028:
	{
		// else if(Input.GetKeyDown(KeyCode.Delete))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)127), NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// destroyParticles();
		CFX_Demo_New_destroyParticles_m6E09B94A196E46E199429F9DE2AE0DD0F9079D24(__this, NULL);
	}

IL_0037:
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_3)
		{
			goto IL_0093;
		}
	}
	{
		// RaycastHit hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_1), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// if(groundCollider.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 9999f))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = __this->___groundCollider_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_5);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_5, L_6, NULL);
		NullCheck(L_4);
		bool L_8;
		L_8 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_4, L_7, (&V_1), (9999.0f), NULL);
		if (!L_8)
		{
			goto IL_0093;
		}
	}
	{
		// GameObject particle = spawnParticle();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = CFX_Demo_New_spawnParticle_m55467606F2E464D8337565A08442BB4747468A26(__this, NULL);
		V_2 = L_9;
		// particle.transform.position = hit.point + particle.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_15, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_16, NULL);
	}

IL_0093:
	{
		// float scroll = Input.GetAxis("Mouse ScrollWheel");
		float L_17;
		L_17 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		V_0 = L_17;
		// if(scroll != 0f)
		float L_18 = V_0;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_00d4;
		}
	}
	{
		// Camera.main.transform.Translate(Vector3.forward * (scroll < 0f ? -1f : 1f), Space.Self);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19;
		L_19 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_22 = V_0;
		G_B11_0 = L_21;
		G_B11_1 = L_20;
		if ((((float)L_22) < ((float)(0.0f))))
		{
			G_B12_0 = L_21;
			G_B12_1 = L_20;
			goto IL_00c4;
		}
	}
	{
		G_B13_0 = (1.0f);
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c9;
	}

IL_00c4:
	{
		G_B13_0 = (-1.0f);
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c9:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B13_1, G_B13_0, NULL);
		NullCheck(G_B13_2);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(G_B13_2, L_23, 1, NULL);
	}

IL_00d4:
	{
		// if(Input.GetMouseButtonDown(2))
		bool L_24;
		L_24 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(2, NULL);
		if (!L_24)
		{
			goto IL_0106;
		}
	}
	{
		// Camera.main.transform.position = defaultCamPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25;
		L_25 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___defaultCamPosition_17;
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_27, NULL);
		// Camera.main.transform.rotation = defaultCamRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28;
		L_28 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = __this->___defaultCamRotation_18;
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_30, NULL);
	}

IL_0106:
	{
		// }
		return;
	}
}
// System.Void CFX_Demo_New::OnToggleGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_OnToggleGround_mC1E9AC90083482747297AA60D9CE9ECABF307929 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// var c = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_0 = L_0;
		// groundRenderer.enabled = !groundRenderer.enabled;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___groundRenderer_4;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->___groundRenderer_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_2, NULL);
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
		// c.a = groundRenderer.enabled ? 1f : 0.33f;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->___groundRenderer_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_4, NULL);
		G_B1_0 = (&V_0);
		if (L_5)
		{
			G_B2_0 = (&V_0);
			goto IL_0035;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0035:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		G_B3_1->___a_3 = G_B3_0;
		// groundBtn.color = c;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___groundBtn_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// groundLabel.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___groundLabel_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::OnToggleCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_OnToggleCamera_m756EE04AC3DC67A47CFA88C4CC86B1FB9FE0BD02 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// var c = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_0 = L_0;
		// CFX_Demo_RotateCamera.rotating = !CFX_Demo_RotateCamera.rotating;
		il2cpp_codegen_runtime_class_init_inline(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		bool L_1 = ((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4;
		((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// c.a = CFX_Demo_RotateCamera.rotating ? 1f : 0.33f;
		bool L_2 = ((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4;
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_0023;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0023:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		G_B3_1->___a_3 = G_B3_0;
		// camRotBtn.color = c;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___camRotBtn_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// camRotLabel.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___camRotLabel_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::OnToggleSlowMo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_OnToggleSlowMo_m20658A6343C784057EFACEBED012978C4F78D48B (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var c = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_0 = L_0;
		// slowMo = !slowMo;
		bool L_1 = __this->___slowMo_16;
		__this->___slowMo_16 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// if(slowMo)
		bool L_2 = __this->___slowMo_16;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// Time.timeScale = 0.33f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.330000013f), NULL);
		// c.a = 1f;
		(&V_0)->___a_3 = (1.0f);
		goto IL_004b;
	}

IL_0035:
	{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// c.a = 0.33f;
		(&V_0)->___a_3 = (0.330000013f);
	}

IL_004b:
	{
		// slowMoBtn.color = c;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___slowMoBtn_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// slowMoLabel.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___slowMoLabel_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::OnPreviousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_OnPreviousEffect_mA2A209F797976C97EB976A21083FF4C6B9652812 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	{
		// prevParticle();
		CFX_Demo_New_prevParticle_m875BF4D9036B6C5B6259FFA0F787F90042B5D5F9(__this, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::OnNextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_OnNextEffect_mBE56FE317B38E35579D4EC0868755EB2F4E4E640 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	{
		// nextParticle();
		CFX_Demo_New_nextParticle_mB5D2F30BF16AC1AD51964810AE12B27744B7E8E1(__this, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_UpdateUI_m3E3DA5EC770C0F2B84B5206F16CD8A2484BFD6E5 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// EffectLabel.text = ParticleExamples[exampleIndex].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___EffectLabel_12;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___ParticleExamples_14;
		int32_t L_2 = __this->___exampleIndex_15;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// EffectIndexLabel.text = string.Format("{0}/{1}", (exampleIndex+1).ToString("00"), ParticleExamples.Length.ToString("00"));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___EffectIndexLabel_13;
		int32_t L_7 = __this->___exampleIndex_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		String_t* L_8;
		L_8 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___ParticleExamples_14;
		NullCheck(L_9);
		V_0 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		String_t* L_10;
		L_10 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_8, L_10, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_11);
		// }
		return;
	}
}
// UnityEngine.GameObject CFX_Demo_New::spawnParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CFX_Demo_New_spawnParticle_m55467606F2E464D8337565A08442BB4747468A26 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_1 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GameObject particles = (GameObject)Instantiate(ParticleExamples[exampleIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___ParticleExamples_14;
		int32_t L_1 = __this->___exampleIndex_15;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_4;
		// particles.transform.position = new Vector3(0,particles.transform.position.y,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_11, NULL);
		// particles.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// ParticleSystem ps = particles.GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14;
		L_14 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_13, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		V_1 = L_14;
		// if (ps != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = V_1;
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_007c;
		}
	}
	{
		// var main = ps.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_17 = V_1;
		NullCheck(L_17);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_18;
		L_18 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_17, NULL);
		V_2 = L_18;
		// if (main.loop)
		bool L_19;
		L_19 = MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8((&V_2), NULL);
		if (!L_19)
		{
			goto IL_007c;
		}
	}
	{
		// ps.gameObject.AddComponent<CFX_AutoStopLoopedEffect>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_20 = V_1;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* L_22;
		L_22 = GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA(L_21, GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA_RuntimeMethod_var);
		// ps.gameObject.AddComponent<CFX_AutoDestructShuriken>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_23 = V_1;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_25;
		L_25 = GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8(L_24, GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8_RuntimeMethod_var);
	}

IL_007c:
	{
		// onScreenParticles.Add(particles);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = __this->___onScreenParticles_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_26);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_26, L_27, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// return particles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_0;
		return L_28;
	}
}
// System.Collections.IEnumerator CFX_Demo_New::CheckForDeletedParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CFX_Demo_New_CheckForDeletedParticles_m9693C5D1E5FB5189A81426EB45A4E1EE6416EE41 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* L_0 = (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0*)il2cpp_codegen_object_new(U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckForDeletedParticlesU3Ed__25__ctor_m920C1552D0B704439FAC777FD178B57829E2D1B6(L_0, 0, NULL);
		U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CFX_Demo_New::prevParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_prevParticle_m875BF4D9036B6C5B6259FFA0F787F90042B5D5F9 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	{
		// exampleIndex--;
		int32_t L_0 = __this->___exampleIndex_15;
		__this->___exampleIndex_15 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if(exampleIndex < 0) exampleIndex = ParticleExamples.Length - 1;
		int32_t L_1 = __this->___exampleIndex_15;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// if(exampleIndex < 0) exampleIndex = ParticleExamples.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___ParticleExamples_14;
		NullCheck(L_2);
		__this->___exampleIndex_15 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0027:
	{
		// UpdateUI();
		CFX_Demo_New_UpdateUI_m3E3DA5EC770C0F2B84B5206F16CD8A2484BFD6E5(__this, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::nextParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_nextParticle_mB5D2F30BF16AC1AD51964810AE12B27744B7E8E1 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	{
		// exampleIndex++;
		int32_t L_0 = __this->___exampleIndex_15;
		__this->___exampleIndex_15 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(exampleIndex >= ParticleExamples.Length) exampleIndex = 0;
		int32_t L_1 = __this->___exampleIndex_15;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___ParticleExamples_14;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// if(exampleIndex >= ParticleExamples.Length) exampleIndex = 0;
		__this->___exampleIndex_15 = 0;
	}

IL_0025:
	{
		// UpdateUI();
		CFX_Demo_New_UpdateUI_m3E3DA5EC770C0F2B84B5206F16CD8A2484BFD6E5(__this, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_New::destroyParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New_destroyParticles_m6E09B94A196E46E199429F9DE2AE0DD0F9079D24 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___onScreenParticles_19;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0045;
	}

IL_0010:
	{
		// if(onScreenParticles[i] != null)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___onScreenParticles_19;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// GameObject.Destroy(onScreenParticles[i]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___onScreenParticles_19;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_0035:
	{
		// onScreenParticles.RemoveAt(i);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___onScreenParticles_19;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_9, L_10, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0045:
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CFX_Demo_New::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_New__ctor_m3F3E772F218F5D0DF6E561E20AE15B042CED6752 (CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> onScreenParticles = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___onScreenParticles_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onScreenParticles_19), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CFX_Demo_New/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAB1F46E7745FB53F6527920549715240437DAA6A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* L_0 = (U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963*)il2cpp_codegen_object_new(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m97F374614077DD1A825F933DED9B82FDCBAF91D4(L_0, NULL);
		((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CFX_Demo_New/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m97F374614077DD1A825F933DED9B82FDCBAF91D4 (U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 CFX_Demo_New/<>c::<Awake>b__16_0(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CAwakeU3Eb__16_0_m269E213B94F91F8696A3055A7EB523172900185C (U3CU3Ec_t8DE93B04FEA3C289970FB76F155C8D7B2AAEB963* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_o1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_o2, const RuntimeMethod* method) 
{
	{
		// particleExampleList.Sort( delegate(GameObject o1, GameObject o2) { return o1.name.CompareTo(o2.name); } );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_o1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___1_o2;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF(L_1, L_3, NULL);
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
// System.Void CFX_Demo_New/<CheckForDeletedParticles>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__25__ctor_m920C1552D0B704439FAC777FD178B57829E2D1B6 (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CFX_Demo_New/<CheckForDeletedParticles>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__25_System_IDisposable_Dispose_m26C778C5C8416F55F436434D8F71289B81D9219E (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CFX_Demo_New/<CheckForDeletedParticles>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckForDeletedParticlesU3Ed__25_MoveNext_mC7D590156EDDFF76ECD8798F8E7FF09A033ECBA0 (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(5.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* L_5 = V_1;
		NullCheck(L_5);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = L_5->___onScreenParticles_19;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0072;
	}

IL_004e:
	{
		// if(onScreenParticles[i] == null)
		CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* L_8 = V_1;
		NullCheck(L_8);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = L_8->___onScreenParticles_19;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		// onScreenParticles.RemoveAt(i);
		CFX_Demo_New_tB126324E644037023B673FC0E79299666CB3CE31* L_13 = V_1;
		NullCheck(L_13);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = L_13->___onScreenParticles_19;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_14, L_15, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
	}

IL_006e:
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0072:
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		// while(true)
		goto IL_001e;
	}
}
// System.Object CFX_Demo_New/<CheckForDeletedParticles>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckForDeletedParticlesU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCDF3D48683749224B09CCBFE3DCBE2B8E1DB72D2 (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CFX_Demo_New/<CheckForDeletedParticles>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__25_System_Collections_IEnumerator_Reset_m766243C9C80375A777FE2A13B85C392B56EB0DFD (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckForDeletedParticlesU3Ed__25_System_Collections_IEnumerator_Reset_m766243C9C80375A777FE2A13B85C392B56EB0DFD_RuntimeMethod_var)));
	}
}
// System.Object CFX_Demo_New/<CheckForDeletedParticles>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckForDeletedParticlesU3Ed__25_System_Collections_IEnumerator_get_Current_mAF1404FDA33F8CB72BCF184A9F9C2F32F8329ABA (U3CCheckForDeletedParticlesU3Ed__25_t6CEF539FF5B363E2DC0A8EAF96787ADDD1402DE0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void CFX_Demo_RandomDir::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDir_Start_mBEA6B11F6CDBC5D92B9039AA8B18A7EBEF5448C8 (CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.eulerAngles = new Vector3(Random.Range(min.x,max.x),Random.Range(min.y,max.y),Random.Range(min.z,max.z));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___min_4);
		float L_2 = L_1->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___max_5);
		float L_4 = L_3->___x_2;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_2, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___min_4);
		float L_7 = L_6->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___max_5);
		float L_9 = L_8->___y_3;
		float L_10;
		L_10 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_7, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___min_4);
		float L_12 = L_11->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___max_5);
		float L_14 = L_13->___z_4;
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_5, L_10, L_15, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_16, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_RandomDir::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDir__ctor_m0D93F82C71A0EAE6FF074A8F3EDBBB81ED3D0B48 (CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 min = new Vector3(0,0,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___min_4 = L_0;
		// public Vector3 max = new Vector3(0,360,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (360.0f), (0.0f), /*hidden argument*/NULL);
		__this->___max_5 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CFX_Demo_RandomDirectionTranslate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDirectionTranslate_Start_m96E0BCED718092574499B7127C3A8673849208DB (CFX_Demo_RandomDirectionTranslate_t3680095D7DFA9CE930384E0F1126006F7310D853* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// dir = new Vector3(Random.Range(0.0f,360.0f),Random.Range(0.0f,360.0f),Random.Range(0.0f,360.0f)).normalized;
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		float L_1;
		L_1 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		__this->___dir_8 = L_4;
		// dir.Scale(axis);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___dir_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___axis_6;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline(L_5, L_6, NULL);
		// dir += baseDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___dir_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___baseDir_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_8, NULL);
		__this->___dir_8 = L_9;
		// }
		return;
	}
}
// System.Void CFX_Demo_RandomDirectionTranslate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDirectionTranslate_Update_m4024B24E39F74439D91BB2A5C0077350853814AE (CFX_Demo_RandomDirectionTranslate_t3680095D7DFA9CE930384E0F1126006F7310D853* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.Translate(dir * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___dir_8;
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// if(gravity)
		bool L_6 = __this->___gravity_7;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// this.transform.Translate(Physics.gravity * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		NullCheck(L_7);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_7, L_10, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void CFX_Demo_RandomDirectionTranslate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDirectionTranslate__ctor_m0069918B310E5DB0ABB7A4081DAE7EAFD6A1E0CF (CFX_Demo_RandomDirectionTranslate_t3680095D7DFA9CE930384E0F1126006F7310D853* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 30.0f;
		__this->___speed_4 = (30.0f);
		// public Vector3 baseDir = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___baseDir_5 = L_0;
		// public Vector3 axis = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___axis_6 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CFX_Demo_RotateCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RotateCamera_Update_mF984EC78638612B1C89597528E3FD5ACBD2539A4 (CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(rotating)
		il2cpp_codegen_runtime_class_init_inline(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		bool L_0 = ((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// transform.RotateAround(rotationCenter.position, Vector3.up, speed*Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___rotationCenter_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_5 = __this->___speed_5;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_1);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_1, L_3, L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void CFX_Demo_RotateCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RotateCamera__ctor_m0ADA46D335888F3F43AC518ED19FFB1F1AABC7C8 (CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 30.0f;
		__this->___speed_5 = (30.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void CFX_Demo_RotateCamera::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RotateCamera__cctor_m4A71CF2705030EA82F2818BD43F82DC91C01486C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public bool rotating = true;
		((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4 = (bool)1;
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
// System.Void CFX_Demo_Translate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_Translate_Start_m2408E76C85181E0D900CEFEA8E3CE9214763AC76 (CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* __this, const RuntimeMethod* method) 
{
	{
		// dir = new Vector3(Random.Range(0.0f,360.0f),Random.Range(0.0f,360.0f),Random.Range(0.0f,360.0f));
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		float L_1;
		L_1 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___dir_8 = L_3;
		// dir.Scale(rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___dir_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___rotation_5;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline(L_4, L_5, NULL);
		// this.transform.localEulerAngles = dir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___dir_8;
		NullCheck(L_6);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_Translate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_Translate_Update_mD71C66B91F9EC43DD9ABBA2D8A45CBD57DE8EBF7 (CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.Translate(axis * speed * Time.deltaTime, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___axis_6;
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_0, L_5, 1, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_Translate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_Translate__ctor_m44AD33D5825BE599180B3ED3E3668893F46E29DB (CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 30.0f;
		__this->___speed_4 = (30.0f);
		// public Vector3 rotation = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___rotation_5 = L_0;
		// public Vector3 axis = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___axis_6 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CFX_AutoDestructShuriken::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoDestructShuriken_OnEnable_m95AB27DC91BCCF60D378AE0665B095D44331D78A (CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B8DD997BF9F7D0806A038EC22F9D13BEB77E76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("CheckIfAlive");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral05B8DD997BF9F7D0806A038EC22F9D13BEB77E76, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CFX_AutoDestructShuriken::CheckIfAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CFX_AutoDestructShuriken_CheckIfAlive_mCFAEBF84CD35FBF9C742C9A170183136AAB53535 (CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* L_0 = (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511*)il2cpp_codegen_object_new(U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckIfAliveU3Ed__2__ctor_m107B0D89D95623B02336384ED1123B289D20231B(L_0, 0, NULL);
		U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CFX_AutoDestructShuriken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoDestructShuriken__ctor_m22A7ABD6E38836099374390249F88639BB36CC33 (CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2__ctor_m107B0D89D95623B02336384ED1123B289D20231B (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2_System_IDisposable_Dispose_m38FD34408CDD7ED7A963CD1156B55F7F313610A1 (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CFX_AutoDestructShuriken/<CheckIfAlive>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckIfAliveU3Ed__2_MoveNext_m18608B4F0601A8AEFEF69DDE44DBD191B198E3AB (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ParticleSystem ps = this.GetComponent<ParticleSystem>();
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_4 = V_1;
		NullCheck(L_4);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5;
		L_5 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(L_4, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___U3CpsU3E5__2_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpsU3E5__2_3), (void*)L_5);
		goto IL_007d;
	}

IL_002c:
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(!ps.IsAlive(true))
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = __this->___U3CpsU3E5__2_3;
		NullCheck(L_7);
		bool L_8;
		L_8 = ParticleSystem_IsAlive_m4C919DCFF8EC256F68415875DF421DC53065AC7B(L_7, (bool)1, NULL);
		if (L_8)
		{
			goto IL_007d;
		}
	}
	{
		// if(OnlyDeactivate)
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = L_9->___OnlyDeactivate_4;
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		// this.gameObject.SetActive(false);
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_11 = V_1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		goto IL_008b;
	}

IL_0070:
	{
		// GameObject.Destroy(this.gameObject);
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_14, NULL);
		// break;
		goto IL_008b;
	}

IL_007d:
	{
		// while(true && ps != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = __this->___U3CpsU3E5__2_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_16)
		{
			goto IL_002c;
		}
	}

IL_008b:
	{
		// }
		return (bool)0;
	}
}
// System.Object CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckIfAliveU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m655B604E1C89420955196F4D9523D3B6CBACFF9B (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_Reset_m8659443A2B072F0CFA4D0D77AFD3821588EE1068 (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_Reset_m8659443A2B072F0CFA4D0D77AFD3821588EE1068_RuntimeMethod_var)));
	}
}
// System.Object CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_get_Current_mC14FB0B50310D1A3AD07A78314A0F5690B823799 (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void CFX_AutoRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoRotate_Update_m6B9C72C2FC80E6C5FABD9DB647C8FDAE2BD56328 (CFX_AutoRotate_t6DF14621E2CB1E17A063E58A98C18828CEB51D4E* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.Rotate(rotation * Time.deltaTime, space);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___rotation_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		int32_t L_4 = __this->___space_5;
		NullCheck(L_0);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_0, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void CFX_AutoRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoRotate__ctor_m66822106F9299AE6FB3E7BEE628175E86FAEF866 (CFX_AutoRotate_t6DF14621E2CB1E17A063E58A98C18828CEB51D4E* __this, const RuntimeMethod* method) 
{
	{
		// public Space space = Space.Self;
		__this->___space_5 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CFX_LightFlicker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightFlicker_Awake_mDD217C09D0CD73F750E12C784CF9B9671729817A (CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// baseIntensity = GetComponent<Light>().intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_0, NULL);
		__this->___baseIntensity_9 = L_1;
		// }
		return;
	}
}
// System.Void CFX_LightFlicker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightFlicker_OnEnable_mBAD2393E6F61D5D7981870E576F1238783ED8E3C (CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B* __this, const RuntimeMethod* method) 
{
	{
		// minIntensity = baseIntensity;
		float L_0 = __this->___baseIntensity_9;
		__this->___minIntensity_7 = L_0;
		// maxIntensity = minIntensity + addIntensity;
		float L_1 = __this->___minIntensity_7;
		float L_2 = __this->___addIntensity_6;
		__this->___maxIntensity_8 = ((float)il2cpp_codegen_add(L_1, L_2));
		// }
		return;
	}
}
// System.Void CFX_LightFlicker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightFlicker_Update_m7EDE8F7D320D87C751799FE5EAEECAF24F33315E (CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Light>().intensity = Mathf.Lerp(minIntensity, maxIntensity, Mathf.PerlinNoise(Time.time * smoothFactor, 0f));
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		float L_1 = __this->___minIntensity_7;
		float L_2 = __this->___maxIntensity_8;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_4 = __this->___smoothFactor_5;
		float L_5;
		L_5 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_multiply(L_3, L_4)), (0.0f), NULL);
		float L_6;
		L_6 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_1, L_2, L_5, NULL);
		NullCheck(L_0);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void CFX_LightFlicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightFlicker__ctor_mAB98FAF050C7B8A46472C42EBE3D802CBDFBE96C (CFX_LightFlicker_tEF1C73B34078D5C8FBC2984F685231A483125B5B* __this, const RuntimeMethod* method) 
{
	{
		// public float smoothFactor = 1f;
		__this->___smoothFactor_5 = (1.0f);
		// public float addIntensity = 1.0f;
		__this->___addIntensity_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CFX_LightIntensityFade::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade_Start_mA64A524D6D15ADAE266FF2F3F8F81F38ACBD3EB6 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// baseIntensity = GetComponent<Light>().intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_0, NULL);
		__this->___baseIntensity_7 = L_1;
		// }
		return;
	}
}
// System.Void CFX_LightIntensityFade::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade_OnEnable_m56FA183840193584063C3B0AF49B0FA8DB8D7014 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// p_lifetime = 0.0f;
		__this->___p_lifetime_9 = (0.0f);
		// p_delay = delay;
		float L_0 = __this->___delay_5;
		__this->___p_delay_10 = L_0;
		// if(delay > 0) GetComponent<Light>().enabled = false;
		float L_1 = __this->___delay_5;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// if(delay > 0) GetComponent<Light>().enabled = false;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2;
		L_2 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void CFX_LightIntensityFade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade_Update_mCE17E56AE5A9CE5993315D8F00B6AD2C9BEC08B4 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(p_delay > 0)
		float L_0 = __this->___p_delay_10;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		// p_delay -= Time.deltaTime;
		float L_1 = __this->___p_delay_10;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___p_delay_10 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if(p_delay <= 0)
		float L_3 = __this->___p_delay_10;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		// GetComponent<Light>().enabled = true;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4;
		L_4 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
	}

IL_0038:
	{
		// return;
		return;
	}

IL_0039:
	{
		// if(p_lifetime/duration < 1.0f)
		float L_5 = __this->___p_lifetime_9;
		float L_6 = __this->___duration_4;
		if ((!(((float)((float)(L_5/L_6))) < ((float)(1.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		// GetComponent<Light>().intensity = Mathf.Lerp(baseIntensity, finalIntensity, p_lifetime/duration);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7;
		L_7 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		float L_8 = __this->___baseIntensity_7;
		float L_9 = __this->___finalIntensity_6;
		float L_10 = __this->___p_lifetime_9;
		float L_11 = __this->___duration_4;
		float L_12;
		L_12 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_8, L_9, ((float)(L_10/L_11)), NULL);
		NullCheck(L_7);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_7, L_12, NULL);
		// p_lifetime += Time.deltaTime;
		float L_13 = __this->___p_lifetime_9;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___p_lifetime_9 = ((float)il2cpp_codegen_add(L_13, L_14));
		return;
	}

IL_0089:
	{
		// if(autodestruct)
		bool L_15 = __this->___autodestruct_8;
		if (!L_15)
		{
			goto IL_009c;
		}
	}
	{
		// GameObject.Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_16, NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void CFX_LightIntensityFade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade__ctor_m0CFBDFFAFF4B1B51471D1B4AE3A3DE92BB8EE722 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	{
		// public float duration = 1.0f;
		__this->___duration_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void angleToHUD::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void angleToHUD_Start_m32A44CC97D36F9649353A1BD0D8AA6DF22491660 (angleToHUD_tBA6DBEC4EB2ECC0EFBFB36D36EBE45FD9FB1C9FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____text_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void angleToHUD::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void angleToHUD_Update_m19E0C79FB9BC038DF0F12673C9778E5A16A942DB (angleToHUD_tBA6DBEC4EB2ECC0EFBFB36D36EBE45FD9FB1C9FE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if(_axis == AxisType.X){
		int32_t L_0 = __this->____axis_5;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		// _text.text = ((int)Camera.main.transform.eulerAngles.y).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->____text_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		float L_5 = L_4.___y_3;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_6);
	}

IL_0030:
	{
		// if(_axis == AxisType.Y){
		int32_t L_7 = __this->____axis_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0061;
		}
	}
	{
		// _text.text = ((int)Camera.main.transform.eulerAngles.x).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->____text_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_10, NULL);
		float L_12 = L_11.___x_2;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_12);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_13);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void angleToHUD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void angleToHUD__ctor_m4CAF4A800A03D685AC07032705EC847A99F08BF9 (angleToHUD_tBA6DBEC4EB2ECC0EFBFB36D36EBE45FD9FB1C9FE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void blink::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void blink_Start_m0778E30B5B7F10D1B3B7B40409CFF339EF8B5126 (blink_t163770A9B0A65D5E6B462A4F0E180A2F60269CF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->____image_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____image_5), (void*)L_0);
		// _color = _image.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->____image_5;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		__this->____color_6 = L_2;
		// }
		return;
	}
}
// System.Void blink::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void blink_Update_m7E313C50AB8882D86A95689C72175BE22F970693 (blink_t163770A9B0A65D5E6B462A4F0E180A2F60269CF6* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if(_blinking){
		bool L_0 = __this->____blinking_4;
		if (!L_0)
		{
			goto IL_005d;
		}
	}
	{
		// float _blinkerAlpha = Mathf.PingPong(_speed * Time.time, 1);
		float L_1 = __this->____speed_7;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3;
		L_3 = Mathf_PingPong_mB1D6A10F386CE1EEA99DB69486DDA6DA531D799D_inline(((float)il2cpp_codegen_multiply(L_1, L_2)), (1.0f), NULL);
		V_0 = L_3;
		// _color = new Color(_color.r, _color.g, _color.b, _blinkerAlpha);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = (&__this->____color_6);
		float L_5 = L_4->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = (&__this->____color_6);
		float L_7 = L_6->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8 = (&__this->____color_6);
		float L_9 = L_8->___b_2;
		float L_10 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), L_5, L_7, L_9, L_10, /*hidden argument*/NULL);
		__this->____color_6 = L_11;
		// _image.color = _color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->____image_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->____color_6;
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void blink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void blink__ctor_mB6FA49E0E506CDC0B27F3586CA2428900F8061BF (blink_t163770A9B0A65D5E6B462A4F0E180A2F60269CF6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void canvasLayerMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasLayerMove_Start_mAADC3A39553E4A2C37564455753FF7CC63A94D94 (canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_trackedObject == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____trackedObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _trackedObject = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		__this->____trackedObject_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trackedObject_4), (void*)L_3);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void canvasLayerMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasLayerMove_Update_mF8E89227DA3D5B6A5A258374AA687374E08F0714 (canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _deltaX = Mathf.Abs(Mathf.DeltaAngle(this.transform.eulerAngles.x, _trackedObject.eulerAngles.x));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____trackedObject_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		float L_5 = L_4.___x_2;
		float L_6;
		L_6 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_2, L_5, NULL);
		float L_7;
		L_7 = fabsf(L_6);
		__this->____deltaX_7 = L_7;
		// _deltaY = Mathf.Abs(Mathf.DeltaAngle(this.transform.eulerAngles.y, _trackedObject.eulerAngles.y));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_8, NULL);
		float L_10 = L_9.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->____trackedObject_4;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_11, NULL);
		float L_13 = L_12.___y_3;
		float L_14;
		L_14 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_10, L_13, NULL);
		float L_15;
		L_15 = fabsf(L_14);
		__this->____deltaY_8 = L_15;
		// if (_track)
		bool L_16 = __this->____track_5;
		if (!L_16)
		{
			goto IL_00f3;
		}
	}
	{
		// if (_rotateSpeed > 0)
		float L_17 = __this->____rotateSpeed_6;
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_00ca;
		}
	}
	{
		// this.transform.rotation = Quaternion.Lerp(transform.rotation, _trackedObject.rotation, Mathf.SmoothStep(0.0f, 1.0f, _rotateSpeed));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->____trackedObject_4;
		NullCheck(L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_21, NULL);
		float L_23 = __this->____rotateSpeed_6;
		float L_24;
		L_24 = Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline((0.0f), (1.0f), L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_20, L_22, L_24, NULL);
		NullCheck(L_18);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_18, L_25, NULL);
		// this.transform.position = _trackedObject.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->____trackedObject_4;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_28, NULL);
		return;
	}

IL_00ca:
	{
		// if (transform.parent != _trackedObject)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_29, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->____trackedObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_00f3;
		}
	}
	{
		// this.transform.parent = _trackedObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->____trackedObject_4;
		NullCheck(L_33);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_33, L_34, NULL);
	}

IL_00f3:
	{
		// }
		return;
	}
}
// System.Void canvasLayerMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasLayerMove__ctor_mA1F0159E26F8803156FC50691E7777EC6312E355 (canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void fillWithMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fillWithMove_Start_m1D4EBA4C9D8FFCE1D637A1BE41B573E97E0EA2DE (fillWithMove_t86C01CFDFFC6AFE53ACC3289B31F3CFD34D69949* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->____image_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____image_12), (void*)L_0);
		// _normalizedValue = _max - _min;
		float L_1 = __this->____max_6;
		float L_2 = __this->____min_5;
		__this->____normalizedValue_9 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// _lerpValue = _image.fillAmount;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->____image_12;
		NullCheck(L_3);
		float L_4;
		L_4 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_3, NULL);
		__this->____lerpValue_11 = L_4;
		// }
		return;
	}
}
// System.Void fillWithMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fillWithMove_Update_mCC62C939B00560EDADAC68A11FEF283760C7529D (fillWithMove_t86C01CFDFFC6AFE53ACC3289B31F3CFD34D69949* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (_moveWithSight)
		bool L_0 = __this->____moveWithSight_7;
		if (!L_0)
		{
			goto IL_00b0;
		}
	}
	{
		// float _ratio = 360/_normalizedValue;
		float L_1 = __this->____normalizedValue_9;
		V_0 = ((float)((360.0f)/L_1));
		// if (_axis == AxisType.X)
		int32_t L_2 = __this->____axis_4;
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		// _axisFloat = Mathf.Abs(Camera.main.transform.eulerAngles.y);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_4, NULL);
		float L_6 = L_5.___y_3;
		float L_7;
		L_7 = fabsf(L_6);
		__this->____axisFloat_10 = L_7;
	}

IL_003f:
	{
		// if (_axis == AxisType.Y)
		int32_t L_8 = __this->____axis_4;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0067;
		}
	}
	{
		// _axisFloat = Mathf.Abs(Camera.main.transform.eulerAngles.x);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_10, NULL);
		float L_12 = L_11.___x_2;
		float L_13;
		L_13 = fabsf(L_12);
		__this->____axisFloat_10 = L_13;
	}

IL_0067:
	{
		// float _value = Mathf.Clamp(_axisFloat/_ratio, _min, _max);
		float L_14 = __this->____axisFloat_10;
		float L_15 = V_0;
		float L_16 = __this->____min_5;
		float L_17 = __this->____max_6;
		float L_18;
		L_18 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_14/L_15)), L_16, L_17, NULL);
		V_1 = L_18;
		// _lerpValue = Mathf.MoveTowards(_lerpValue, _value, _speed * Time.deltaTime);
		float L_19 = __this->____lerpValue_11;
		float L_20 = V_1;
		float L_21 = __this->____speed_8;
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_23;
		L_23 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_19, L_20, ((float)il2cpp_codegen_multiply(L_21, L_22)), NULL);
		__this->____lerpValue_11 = L_23;
		// _image.fillAmount = _lerpValue;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->____image_12;
		float L_25 = __this->____lerpValue_11;
		NullCheck(L_24);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_24, L_25, NULL);
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void fillWithMove::FillSprite(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fillWithMove_FillSprite_m2AFD2CA4AC77F3942FE45D29AF39526F89738AAD (fillWithMove_t86C01CFDFFC6AFE53ACC3289B31F3CFD34D69949* __this, float ___0_f, const RuntimeMethod* method) 
{
	{
		// _image.fillAmount = f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____image_12;
		float L_1 = ___0_f;
		NullCheck(L_0);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void fillWithMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fillWithMove__ctor_m58BBFFA5C3B4DBDECCF54610A1ECEB01F8E9213E (fillWithMove_t86C01CFDFFC6AFE53ACC3289B31F3CFD34D69949* __this, const RuntimeMethod* method) 
{
	{
		// public bool _moveWithSight = true;
		__this->____moveWithSight_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void opacityWithMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opacityWithMove_Start_mC2B4A190A464F7B1599E188287EA650509B17E0D (opacityWithMove_tBB85E90725B164EAD0B34B3B436CDD5B880D8FD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TiscanvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE_m746B600CAE458C20442F9D974A0419FFA8C65372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponentInParent<canvasLayerMove>() != null)
		canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE* L_0;
		L_0 = Component_GetComponentInParent_TiscanvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE_m746B600CAE458C20442F9D974A0419FFA8C65372(__this, Component_GetComponentInParent_TiscanvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE_m746B600CAE458C20442F9D974A0419FFA8C65372_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _canvas = GetComponentInParent<canvasLayerMove>();
		canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE* L_2;
		L_2 = Component_GetComponentInParent_TiscanvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE_m746B600CAE458C20442F9D974A0419FFA8C65372(__this, Component_GetComponentInParent_TiscanvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE_m746B600CAE458C20442F9D974A0419FFA8C65372_RuntimeMethod_var);
		__this->____canvas_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____canvas_4), (void*)L_2);
	}

IL_001a:
	{
		// _sprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->____sprite_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sprite_6), (void*)L_3);
		// _defaultColor = _sprite.color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->____sprite_6;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_4, NULL);
		__this->____defaultColor_5 = L_5;
		// }
		return;
	}
}
// System.Void opacityWithMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opacityWithMove_Update_m44229EA65C2D67B18B8B12A644D686E8DA41C217 (opacityWithMove_tBB85E90725B164EAD0B34B3B436CDD5B880D8FD1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float t = _speed * Time.deltaTime;
		float L_0 = __this->____speed_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// if (_moveWithSight)
		bool L_2 = __this->____moveWithSight_8;
		if (!L_2)
		{
			goto IL_00d0;
		}
	}
	{
		// if (_axis == AxisType.X)
		int32_t L_3 = __this->____axis_10;
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		// if ((int)_canvas._deltaX > 0)
		canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE* L_4 = __this->____canvas_4;
		NullCheck(L_4);
		float L_5 = L_4->____deltaX_7;
		if ((((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_5)) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		// _opacity = 1 / (int)_canvas._deltaX;
		canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE* L_6 = __this->____canvas_4;
		NullCheck(L_6);
		float L_7 = L_6->____deltaX_7;
		__this->____opacity_9 = ((float)((int32_t)(1/il2cpp_codegen_cast_double_to_int<int32_t>(L_7))));
	}

IL_0044:
	{
		// if (_axis == AxisType.Y)
		int32_t L_8 = __this->____axis_10;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0099;
		}
	}
	{
		// if (_opacity <= 1)
		float L_9 = __this->____opacity_9;
		if ((!(((float)L_9) <= ((float)(1.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		// float targetOpacity = _opacityChangeRatio * (1 / (_canvas._deltaY * 360));
		float L_10 = __this->____opacityChangeRatio_11;
		canvasLayerMove_tA4D770DF7DA9502FB4042A1D593A6B6DA77B70FE* L_11 = __this->____canvas_4;
		NullCheck(L_11);
		float L_12 = L_11->____deltaY_8;
		V_1 = ((float)il2cpp_codegen_multiply(L_10, ((float)((1.0f)/((float)il2cpp_codegen_multiply(L_12, (360.0f)))))));
		// _opacity = Mathf.Lerp(_opacity, targetOpacity, t);
		float L_13 = __this->____opacity_9;
		float L_14 = V_1;
		float L_15 = V_0;
		float L_16;
		L_16 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_13, L_14, L_15, NULL);
		__this->____opacity_9 = L_16;
		goto IL_0099;
	}

IL_008e:
	{
		// _opacity = 1;
		__this->____opacity_9 = (1.0f);
	}

IL_0099:
	{
		// _sprite.color = new Color(_defaultColor.r, _defaultColor.g, _defaultColor.b, _opacity);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_17 = __this->____sprite_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18 = (&__this->____defaultColor_5);
		float L_19 = L_18->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = (&__this->____defaultColor_5);
		float L_21 = L_20->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_22 = (&__this->____defaultColor_5);
		float L_23 = L_22->___b_2;
		float L_24 = __this->____opacity_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		memset((&L_25), 0, sizeof(L_25));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_25), L_19, L_21, L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_17);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_17, L_25, NULL);
	}

IL_00d0:
	{
		// }
		return;
	}
}
// System.Void opacityWithMove::OpacitySprite(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opacityWithMove_OpacitySprite_m8197A378482C3AFB967D20865AFD5D85E7C1BF6F (opacityWithMove_tBB85E90725B164EAD0B34B3B436CDD5B880D8FD1* __this, float ___0_f, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _sprite.color = _sprite.color = new Color(_defaultColor.r, _defaultColor.g, _defaultColor.b, f);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->____sprite_6;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->____sprite_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2 = (&__this->____defaultColor_5);
		float L_3 = L_2->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = (&__this->____defaultColor_5);
		float L_5 = L_4->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = (&__this->____defaultColor_5);
		float L_7 = L_6->___b_2;
		float L_8 = ___0_f;
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), L_3, L_5, L_7, L_8, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		NullCheck(L_1);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_1, L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		NullCheck(L_0);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_0, L_10, NULL);
		// }
		return;
	}
}
// System.Void opacityWithMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opacityWithMove__ctor_m77372431DBC1B69701E1C61CC4BFF72B7661FCBB (opacityWithMove_tBB85E90725B164EAD0B34B3B436CDD5B880D8FD1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void rotateWithMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotateWithMove_Start_m6C5A84C3FA800859B9C96F63DA938FBC4A0CCEC9 (rotateWithMove_t6F9099F3D4C554EA1F717AA02BD9D3BEAC2D028B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _thisTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->____thisTransform_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____thisTransform_11), (void*)L_0);
		// _normalizedValue = Mathf.Abs(Mathf.DeltaAngle(_min, _max));
		float L_1 = __this->____min_5;
		float L_2 = __this->____max_4;
		float L_3;
		L_3 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = fabsf(L_3);
		__this->____normalizedValue_7 = L_4;
		// _lerpValue = _thisTransform.eulerAngles.z;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->____thisTransform_11;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_5, NULL);
		float L_7 = L_6.___z_4;
		__this->____lerpValue_8 = L_7;
		// }
		return;
	}
}
// System.Void rotateWithMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotateWithMove_Update_m4768EBEE3A2F5EBA56DEA43FE6786032309546E5 (rotateWithMove_t6F9099F3D4C554EA1F717AA02BD9D3BEAC2D028B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (_moveWithSight)
		bool L_0 = __this->____moveWithSight_9;
		if (!L_0)
		{
			goto IL_007b;
		}
	}
	{
		// float _ratio = 360 / _normalizedValue;
		float L_1 = __this->____normalizedValue_7;
		V_0 = ((float)((360.0f)/L_1));
		// float _value = Mathf.Clamp(Camera.main.transform.eulerAngles.y, _min, _max);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		float L_5 = L_4.___y_3;
		float L_6 = __this->____min_5;
		float L_7 = __this->____max_4;
		float L_8;
		L_8 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_5, L_6, L_7, NULL);
		V_1 = L_8;
		// _lerpValue = Mathf.MoveTowards(_lerpValue, _value, _speed * Time.deltaTime);
		float L_9 = __this->____lerpValue_8;
		float L_10 = V_1;
		float L_11 = __this->____speed_6;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_13;
		L_13 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_9, L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		__this->____lerpValue_8 = L_13;
		// _thisTransform.localRotation = Quaternion.Euler(0,0,_lerpValue/_ratio);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->____thisTransform_11;
		float L_15 = __this->____lerpValue_8;
		float L_16 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)(L_15/L_16)), NULL);
		NullCheck(L_14);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_14, L_17, NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void rotateWithMove::RotateSprite(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotateWithMove_RotateSprite_m105747BD095F6A15DDEAB3B0C9845146C6377997 (rotateWithMove_t6F9099F3D4C554EA1F717AA02BD9D3BEAC2D028B* __this, float ___0_f, const RuntimeMethod* method) 
{
	{
		// _thisTransform.localRotation = Quaternion.Euler(0,0,f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____thisTransform_11;
		float L_1 = ___0_f;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_1, NULL);
		NullCheck(L_0);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void rotateWithMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotateWithMove__ctor_m6EE76C3C4CCDA151062883773C7E954D6EB427BE (rotateWithMove_t6F9099F3D4C554EA1F717AA02BD9D3BEAC2D028B* __this, const RuntimeMethod* method) 
{
	{
		// public float _max = 360f;
		__this->____max_4 = (360.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void slideWithMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void slideWithMove_Start_mEA1E1C0C007B71CF86CEF9D9DF0B5E71114667D3 (slideWithMove_t4661C9241CCB3DA9AD203C251D0D4E9C986F7000* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _thisTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->____thisTransform_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____thisTransform_12), (void*)L_0);
		// _normalizedValue = Mathf.Abs(_max - _min);
		float L_1 = __this->____max_5;
		float L_2 = __this->____min_4;
		float L_3;
		L_3 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_2)));
		__this->____normalizedValue_8 = L_3;
		// _lerpValue = _thisTransform.localPosition.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->____thisTransform_12;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		float L_6 = L_5.___x_2;
		__this->____lerpValue_10 = L_6;
		// }
		return;
	}
}
// System.Void slideWithMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void slideWithMove_Update_m8742CA0D5F414099BF0B7A838F13BEB6C6DC290A (slideWithMove_t4661C9241CCB3DA9AD203C251D0D4E9C986F7000* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (_moveWithSight)
		bool L_0 = __this->____moveWithSight_6;
		if (!L_0)
		{
			goto IL_00bf;
		}
	}
	{
		// float _ratio = _normalizedValue / 360;
		float L_1 = __this->____normalizedValue_8;
		V_0 = ((float)(L_1/(360.0f)));
		// if (_axis == AxisType.X)
		int32_t L_2 = __this->____axis_11;
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		// _axisFloat = Camera.main.transform.eulerAngles.y;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_4, NULL);
		float L_6 = L_5.___y_3;
		__this->____axisFloat_9 = L_6;
	}

IL_003a:
	{
		// if (_axis == AxisType.Y)
		int32_t L_7 = __this->____axis_11;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005d;
		}
	}
	{
		// _axisFloat = Camera.main.transform.eulerAngles.x;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_9, NULL);
		float L_11 = L_10.___x_2;
		__this->____axisFloat_9 = L_11;
	}

IL_005d:
	{
		// float _value = Mathf.Clamp(Mathf.DeltaAngle(0, _axisFloat) * _ratio, _min, _max);
		float L_12 = __this->____axisFloat_9;
		float L_13;
		L_13 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline((0.0f), L_12, NULL);
		float L_14 = V_0;
		float L_15 = __this->____min_4;
		float L_16 = __this->____max_5;
		float L_17;
		L_17 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15, L_16, NULL);
		V_1 = L_17;
		// _lerpValue = Mathf.MoveTowards(_lerpValue, _value, _speed * Time.deltaTime);
		float L_18 = __this->____lerpValue_10;
		float L_19 = V_1;
		float L_20 = __this->____speed_7;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_22;
		L_22 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_18, L_19, ((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		__this->____lerpValue_10 = L_22;
		// _thisTransform.localPosition = new Vector3(_lerpValue, 0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = __this->____thisTransform_12;
		float L_24 = __this->____lerpValue_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), L_24, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_23, L_25, NULL);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void slideWithMove::SlideSprite(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void slideWithMove_SlideSprite_m8671F21E84A64BF381F20AA171C63F6F19752AC7 (slideWithMove_t4661C9241CCB3DA9AD203C251D0D4E9C986F7000* __this, float ___0_f, const RuntimeMethod* method) 
{
	{
		// _thisTransform.localPosition = new Vector3(f, 0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____thisTransform_12;
		float L_1 = ___0_f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), L_1, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void slideWithMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void slideWithMove__ctor_mF47AF2C5A9BDD84A69CE8A8236DC03EF787C5344 (slideWithMove_t4661C9241CCB3DA9AD203C251D0D4E9C986F7000* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CharacterMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_Start_m5793AA7D5A1F340CD5B77EC619F663DA22116C39 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_19), (void*)L_0);
		// }
		return;
	}
}
// System.Void CharacterMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_FixedUpdate_m46C3145998CF04256B2E5B9D585BDC8FE1585179 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) 
{
	{
		// if (grounded)
		bool L_0 = __this->___grounded_21;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// OnGround();
		CharacterMovement_OnGround_m42EB43EC57B90A6D9E38885A20A21B9E6CA906E0(__this, NULL);
		return;
	}

IL_000f:
	{
		// InAir();
		CharacterMovement_InAir_m8C653AEBE5489E27A976CFF92DF59F6D5A858A9C(__this, NULL);
		// }
		return;
	}
}
// System.Void CharacterMovement::OnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_OnGround_m42EB43EC57B90A6D9E38885A20A21B9E6CA906E0 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CharacterMovement::InAir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_InAir_m8C653AEBE5489E27A976CFF92DF59F6D5A858A9C (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B15_0 = 0.0f;
	{
		// var leftHandVelocity = leftControllerVelocity.action.ReadValue<Vector3>().y;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___leftControllerVelocity_31;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_1, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		float L_3 = L_2.___y_3;
		// var rightHandVelocity = rightControllerVelocity.action.ReadValue<Vector3>().y;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___rightControllerVelocity_30;
		NullCheck(L_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_5, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		float L_7 = L_6.___y_3;
		V_0 = L_7;
		// var vel = leftHandVelocity + rightHandVelocity;
		float L_8 = V_0;
		// if (vel < -1 && rb.velocity.y <= 0)
		if ((!(((float)((float)il2cpp_codegen_add(L_3, L_8))) < ((float)(-1.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_19;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_9, NULL);
		float L_11 = L_10.___y_3;
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		// rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y * flappingForce, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___rb_19;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->___rb_19;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_13, NULL);
		float L_15 = L_14.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->___rb_19;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_16, NULL);
		float L_18 = L_17.___y_3;
		float L_19 = __this->___flappingForce_12;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___rb_19;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_20, NULL);
		float L_22 = L_21.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), L_15, ((float)il2cpp_codegen_multiply(L_18, L_19)), L_22, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_12, L_23, NULL);
	}

IL_0092:
	{
		// if (joystickLeftClickReference.action.ReadValue<float>() == 1)
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_24 = __this->___joystickLeftClickReference_27;
		NullCheck(L_24);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_25;
		L_25 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_24, NULL);
		NullCheck(L_25);
		float L_26;
		L_26 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_25, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		if ((!(((float)L_26) == ((float)(1.0f)))))
		{
			goto IL_00ef;
		}
	}
	{
		// rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y - 0.5f, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_27 = __this->___rb_19;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_28 = __this->___rb_19;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_28, NULL);
		float L_30 = L_29.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_31 = __this->___rb_19;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_31, NULL);
		float L_33 = L_32.___y_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_34 = __this->___rb_19;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_34, NULL);
		float L_36 = L_35.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), L_30, ((float)il2cpp_codegen_subtract(L_33, (0.5f))), L_36, /*hidden argument*/NULL);
		NullCheck(L_27);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_27, L_37, NULL);
	}

IL_00ef:
	{
		// if (Time.time  > (inAirTime + glideActivateTime))
		float L_38;
		L_38 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_39 = __this->___inAirTime_13;
		float L_40 = __this->___glideActivateTime_14;
		if ((!(((float)L_38) > ((float)((float)il2cpp_codegen_add(L_39, L_40))))))
		{
			goto IL_0203;
		}
	}
	{
		// var angle = Vector3.Angle(cam.transform.forward, rb.velocity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___cam_26;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_42, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_44 = __this->___rb_19;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_44, NULL);
		float L_46;
		L_46 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_43, L_45, NULL);
		V_1 = L_46;
		// if (angle < maxTiltToBodyRotationRatio && angle > minTiltToBodyRotationRatio)
		float L_47 = V_1;
		float L_48 = __this->___maxTiltToBodyRotationRatio_9;
		if ((!(((float)L_47) < ((float)L_48))))
		{
			goto IL_0203;
		}
	}
	{
		float L_49 = V_1;
		float L_50 = __this->___minTiltToBodyRotationRatio_10;
		if ((!(((float)L_49) > ((float)L_50))))
		{
			goto IL_0203;
		}
	}
	{
		// Vector3 rightPos = rightControllerPosition.action.ReadValue<Vector3>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_51 = __this->___rightControllerPosition_32;
		NullCheck(L_51);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_52;
		L_52 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_51, NULL);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_52, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		// Vector3 leftPos = leftControllerPosition.action.ReadValue<Vector3>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_54 = __this->___leftControllerPosition_33;
		NullCheck(L_54);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_55;
		L_55 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_54, NULL);
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_55, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		V_2 = L_56;
		// if (Vector3.Distance(rightPos, leftPos) > 1.2f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_2;
		float L_58;
		L_58 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_53, L_57, NULL);
		if ((!(((float)L_58) > ((float)(1.20000005f)))))
		{
			goto IL_0203;
		}
	}
	{
		// float diff = rightControllerPosition.action.ReadValue<Vector3>().y - leftControllerPosition.action.ReadValue<Vector3>().y;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_59 = __this->___rightControllerPosition_32;
		NullCheck(L_59);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_60;
		L_60 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_59, NULL);
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_60, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		float L_62 = L_61.___y_3;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_63 = __this->___leftControllerPosition_33;
		NullCheck(L_63);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_64;
		L_64 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_63, NULL);
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_64, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		float L_66 = L_65.___y_3;
		V_3 = ((float)il2cpp_codegen_subtract(L_62, L_66));
		// diff = diff > 0.5f ? 0.5f : diff;
		float L_67 = V_3;
		if ((((float)L_67) > ((float)(0.5f))))
		{
			goto IL_01a7;
		}
	}
	{
		float L_68 = V_3;
		G_B12_0 = L_68;
		goto IL_01ac;
	}

IL_01a7:
	{
		G_B12_0 = (0.5f);
	}

IL_01ac:
	{
		V_3 = G_B12_0;
		// diff = diff < -0.5f ? -0.5f : diff;
		float L_69 = V_3;
		if ((((float)L_69) < ((float)(-0.5f))))
		{
			goto IL_01b8;
		}
	}
	{
		float L_70 = V_3;
		G_B15_0 = L_70;
		goto IL_01bd;
	}

IL_01b8:
	{
		G_B15_0 = (-0.5f);
	}

IL_01bd:
	{
		V_3 = G_B15_0;
		// rb.velocity = Quaternion.Euler(0, -diff * glidingForce, 0) * rb.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_71 = __this->___rb_19;
		float L_72 = V_3;
		float L_73 = __this->___glidingForce_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74;
		L_74 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)il2cpp_codegen_multiply(((-L_72)), L_73)), (0.0f), NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_75 = __this->___rb_19;
		NullCheck(L_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_75, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_74, L_76, NULL);
		NullCheck(L_71);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_71, L_77, NULL);
		// debugText2.text = diff.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_78 = __this->___debugText2_25;
		String_t* L_79;
		L_79 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		NullCheck(L_78);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_78, L_79);
	}

IL_0203:
	{
		// }
		return;
	}
}
// System.Void CharacterMovement::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_OnCollisionExit_mE4A1C3EF1164086FB5822A4E846016EBBDF290DC (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Terrain")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// inAirTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___inAirTime_13 = L_4;
		// grounded = false;
		__this->___grounded_21 = (bool)0;
		// rb.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_19;
		NullCheck(L_5);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_5, (bool)1, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void CharacterMovement::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_OnCollisionStay_m5B4414B0816DCEB4CAB7A0EDD53BC9DC658A09E1 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Terrain")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// grounded = true;
		__this->___grounded_21 = (bool)1;
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void CharacterMovement::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_OnCollisionEnter_mF12B21ACD77CD4CC7EA538A14296B20324267A02 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Terrain")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// grounded = true;
		__this->___grounded_21 = (bool)1;
		// Impact(collision);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___0_collision;
		CharacterMovement_Impact_m93DB9B0EDF9A048A13F254ED578322BC7D384CE4(__this, L_4, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void CharacterMovement::Impact(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_Impact_m93DB9B0EDF9A048A13F254ED578322BC7D384CE4 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F265F9B20CE54405899CB221EF7C691FC5D61C);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// if (Time.time > (inAirTime + 1))
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___inAirTime_13;
		if ((!(((float)L_0) > ((float)((float)il2cpp_codegen_add(L_1, (1.0f)))))))
		{
			goto IL_0143;
		}
	}
	{
		// Vector3 normal = collision.contacts[0].normal;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_2 = ___0_collision;
		NullCheck(L_2);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_3;
		L_3 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		V_0 = L_4;
		// Vector3 vel = rb.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_19;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_5, NULL);
		V_1 = L_6;
		// float impact = vel.y + collision.relativeVelocity.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		float L_8 = L_7.___y_3;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_9 = ___0_collision;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_9, NULL);
		float L_11 = L_10.___y_3;
		V_2 = ((float)il2cpp_codegen_add(L_8, L_11));
		// Debug.DrawRay(transform.position, normal, Color.green, 100f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_13, L_14, L_15, (100.0f), NULL);
		// Debug.DrawRay(transform.position, vel, Color.red, 100f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_17, L_18, L_19, (100.0f), NULL);
		// Debug.DrawRay(transform.position, collision.relativeVelocity, Color.blue, 100f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_22 = ___0_collision;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_22, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_21, L_23, L_24, (100.0f), NULL);
		// Debug.DrawRay(transform.position, new Vector3(1, 1, 1) * impact, Color.cyan, 100f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		float L_28 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_26, L_29, L_30, (100.0f), NULL);
		// if (impact < collision.relativeVelocity.y)
		float L_31 = V_2;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_32 = ___0_collision;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_32, NULL);
		float L_34 = L_33.___y_3;
		if ((!(((float)L_31) < ((float)L_34))))
		{
			goto IL_00f0;
		}
	}
	{
		// debugText.text = "nee";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___debugText_23;
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, _stringLiteral84F265F9B20CE54405899CB221EF7C691FC5D61C);
		return;
	}

IL_00f0:
	{
		// debugText.text = Mathf.Abs(vel.y - collision.relativeVelocity.y).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = __this->___debugText_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		float L_38 = L_37.___y_3;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_39 = ___0_collision;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_39, NULL);
		float L_41 = L_40.___y_3;
		float L_42;
		L_42 = fabsf(((float)il2cpp_codegen_subtract(L_38, L_41)));
		V_3 = L_42;
		String_t* L_43;
		L_43 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_43);
		// if (impact > 4)
		float L_44 = V_2;
		if ((!(((float)L_44) > ((float)(4.0f)))))
		{
			goto IL_0143;
		}
	}
	{
		// rb.AddForce(-rb.velocity * impact);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_45 = __this->___rb_19;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = __this->___rb_19;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_47, NULL);
		float L_49 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_48, L_49, NULL);
		NullCheck(L_45);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_45, L_50, NULL);
	}

IL_0143:
	{
		// }
		return;
	}
}
// System.Void CharacterMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement__ctor_mAC2DD71D615E1B0D05E751051F490C1408DD3BC9 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HooksLawDampen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HooksLawDampen_Start_mE7475D55A41818B8938EB78E1B2F59FF01764B87 (HooksLawDampen_tA7E3A6F2C4F581EA3878340B5882D5F9713F4979* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HooksLawDampen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HooksLawDampen_Update_m49B266EEE0E19AB71EB8BD765F53B608055B16EA (HooksLawDampen_tA7E3A6F2C4F581EA3878340B5882D5F9713F4979* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HooksLawDampen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HooksLawDampen__ctor_mC72906B442D69D6BD3470E29509454B20F4F2606 (HooksLawDampen_tA7E3A6F2C4F581EA3878340B5882D5F9713F4979* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CollisionRay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionRay_Start_mBE09CEF994DC151A41003A3008D1BD24CBA7DA26 (CollisionRay_t9EE7329C4598F095D4980940D0CE2CC98A74197E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// Cursor.visible = false;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)0, NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// }
		return;
	}
}
// System.Void CollisionRay::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionRay_OnCollisionExit_m7732266DA5448816E169C3B126F2D5E8E68D15BA (CollisionRay_t9EE7329C4598F095D4980940D0CE2CC98A74197E* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_other, const RuntimeMethod* method) 
{
	{
		// rb.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_5;
		NullCheck(L_0);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CollisionRay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionRay_Update_m51B12A4056F264CF1E72CB64DD500541817EEB56 (CollisionRay_t9EE7329C4598F095D4980940D0CE2CC98A74197E* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButton(1))
		bool L_0;
		L_0 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// rb.AddForce(-transform.up * 1.05f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, (1.04999995f), NULL);
		NullCheck(L_1);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_1, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void CollisionRay::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionRay_OnCollisionStay_mBE309C7A80F41BF59AFF0D6C044770619798DAC9 (CollisionRay_t9EE7329C4598F095D4980940D0CE2CC98A74197E* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1EBBA863C4CF7E0932C8325E2A21E01AD33310F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1046DA385CC71E65DC28A26FB63D2FD75B98985);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD238E770F2389DAB6F8D3B05BE9EE1B08FCA9312);
		s_Il2CppMethodInitialized = true;
	}
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* V_0 = NULL;
	int32_t V_1 = 0;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_0)
		{
			goto IL_009b;
		}
	}
	{
		// print("clicked");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralC1EBBA863C4CF7E0932C8325E2A21E01AD33310F, NULL);
		// if(rb.velocity.y > 0.0f){
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_5;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_1, NULL);
		float L_3 = L_2.___y_3;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		// rb.velocity = rb.velocity * 0.5f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rb_5;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_5;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, (0.5f), NULL);
		NullCheck(L_4);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_4, L_7, NULL);
		// print("BREAK");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralD238E770F2389DAB6F8D3B05BE9EE1B08FCA9312, NULL);
		goto IL_00be;
	}

IL_0058:
	{
		// } else if( rb.velocity.y < 0.0f){
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___rb_5;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_8, NULL);
		float L_10 = L_9.___y_3;
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		// rb.velocity = rb.velocity * 1.05f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___rb_5;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___rb_5;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, (1.04999995f), NULL);
		NullCheck(L_11);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_11, L_14, NULL);
		// print("BOOST");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralD1046DA385CC71E65DC28A26FB63D2FD75B98985, NULL);
		goto IL_00be;
	}

IL_009b:
	{
		// if(rb.velocity.y > 0.0f){
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___rb_5;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_15, NULL);
		float L_17 = L_16.___y_3;
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		// rb.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___rb_5;
		NullCheck(L_18);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_18, (bool)0, NULL);
	}

IL_00be:
	{
		// Vector3 forward = transform.TransformDirection(Vector3.forward) * 10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, (10.0f), NULL);
		// Debug.DrawRay(transform.position, rb.velocity, Color.green, 100f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25 = __this->___rb_5;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_25, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_24, L_26, L_27, (100.0f), NULL);
		// foreach (ContactPoint contact in collision.contacts)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_28 = ___0_collision;
		NullCheck(L_28);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_29;
		L_29 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_28, NULL);
		V_0 = L_29;
		V_1 = 0;
		goto IL_0132;
	}

IL_0109:
	{
		// foreach (ContactPoint contact in collision.contacts)
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_30 = V_0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_2 = L_33;
		// Debug.DrawRay(contact.point, contact.normal, Color.red, 100f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&V_2), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		L_36 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_34, L_35, L_36, (100.0f), NULL);
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0132:
	{
		// foreach (ContactPoint contact in collision.contacts)
		int32_t L_38 = V_1;
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_39 = V_0;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_0109;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CollisionRay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionRay__ctor_mE224C65747212085B59DC7977FD20784D7043D1B (CollisionRay_t9EE7329C4598F095D4980940D0CE2CC98A74197E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Update_m18C0A114A78C19B888A9F74CA1FE5A837DF9E42A (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rotation.y += Input.GetAxis ("Mouse X");
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___rotation_4);
		float* L_1 = (&L_0->___y_1);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, L_4));
		// rotation.x += -Input.GetAxis ("Mouse Y");
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___rotation_4);
		float* L_6 = (&L_5->___x_0);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		float L_9;
		L_9 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_8, ((-L_9))));
		// transform.eulerAngles = (Vector2)rotation * speed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___rotation_4;
		float L_12 = __this->___speed_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		NullCheck(L_10);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_10, L_14, NULL);
		// }
		return;
	}
}
// System.Void MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_m4C8A79A3CB8D46D3E22E3AB1F645D41ED589312B (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	{
		// Vector2 rotation = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___rotation_4 = L_0;
		// public float speed = 3;
		__this->___speed_5 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MeshGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_Start_mA6019C4E461636B8E855EFEC4F86880F637FA5BE (MeshGenerator_t25A0679B7EB967AA082713868489AF33C0249621* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		__this->___mesh_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_4), (void*)L_0);
		// GetComponent<MeshFilter>().mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1;
		L_1 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___mesh_4;
		NullCheck(L_1);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_1, L_2, NULL);
		// CreateShape();
		MeshGenerator_CreateShape_m7CBB9B4B015A3014B96996C08FC017E6A9B92171(__this, NULL);
		// UpdateMesh();
		MeshGenerator_UpdateMesh_mC84F560423DAF86C598F557D559E4278D5F9634E(__this, NULL);
		// }
		return;
	}
}
// System.Void MeshGenerator::CreateShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_CreateShape_m7CBB9B4B015A3014B96996C08FC017E6A9B92171 (MeshGenerator_t25A0679B7EB967AA082713868489AF33C0249621* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// vertices = new Vector3[(xSize + 1) * (zSize + 1)];
		int32_t L_0 = __this->___xSize_7;
		int32_t L_1 = __this->___zSize_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_0, 1)), ((int32_t)il2cpp_codegen_add(L_1, 1)))));
		__this->___vertices_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_5), (void*)L_2);
		// for (int i = 0, z = 0; z <= zSize; z++)
		V_2 = 0;
		// for (int i = 0, z = 0; z <= zSize; z++)
		V_3 = 0;
		goto IL_0075;
	}

IL_0022:
	{
		// for (int x = 0; x <= xSize; x++)
		V_4 = 0;
		goto IL_0067;
	}

IL_0027:
	{
		// float y = Mathf.PerlinNoise(x * 0.3f, z * .3f) * 2f;
		int32_t L_3 = V_4;
		int32_t L_4 = V_3;
		float L_5;
		L_5 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_multiply(((float)L_3), (0.300000012f))), ((float)il2cpp_codegen_multiply(((float)L_4), (0.300000012f))), NULL);
		V_5 = ((float)il2cpp_codegen_multiply(L_5, (2.0f)));
		// vertices[i] = new Vector3(x, y, z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->___vertices_5;
		int32_t L_7 = V_2;
		int32_t L_8 = V_4;
		float L_9 = V_5;
		int32_t L_10 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), ((float)L_8), L_9, ((float)L_10), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_11);
		// i++;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// for (int x = 0; x <= xSize; x++)
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0067:
	{
		// for (int x = 0; x <= xSize; x++)
		int32_t L_14 = V_4;
		int32_t L_15 = __this->___xSize_7;
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_0027;
		}
	}
	{
		// for (int i = 0, z = 0; z <= zSize; z++)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0075:
	{
		// for (int i = 0, z = 0; z <= zSize; z++)
		int32_t L_17 = V_3;
		int32_t L_18 = __this->___zSize_8;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0022;
		}
	}
	{
		// triangles = new int[xSize * zSize * 6];
		int32_t L_19 = __this->___xSize_7;
		int32_t L_20 = __this->___zSize_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_19, L_20)), 6)));
		__this->___triangles_6 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triangles_6), (void*)L_21);
		// int vert = 0;
		V_0 = 0;
		// int tris = 0;
		V_1 = 0;
		// for (int z = 0; z < zSize; z++)
		V_6 = 0;
		goto IL_012a;
	}

IL_00a4:
	{
		// for (int x = 0; x < xSize; x++)
		V_7 = 0;
		goto IL_0116;
	}

IL_00a9:
	{
		// triangles[tris + 0] = vert + 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___triangles_6;
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_24);
		// triangles[tris + 1] = vert + xSize + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->___triangles_6;
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = __this->___xSize_7;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, 1))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_27, L_28)), 1)));
		// triangles[tris + 2] = vert + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___triangles_6;
		int32_t L_30 = V_1;
		int32_t L_31 = V_0;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_30, 2))), (int32_t)((int32_t)il2cpp_codegen_add(L_31, 1)));
		// triangles[tris + 3] = vert + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___triangles_6;
		int32_t L_33 = V_1;
		int32_t L_34 = V_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 3))), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		// triangles[tris + 4] = vert + xSize + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = __this->___triangles_6;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		int32_t L_38 = __this->___xSize_7;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 4))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_37, L_38)), 1)));
		// triangles[tris + 5] = vert + xSize + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->___triangles_6;
		int32_t L_40 = V_1;
		int32_t L_41 = V_0;
		int32_t L_42 = __this->___xSize_7;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_40, 5))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_41, L_42)), 2)));
		// vert++;
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		// tris += 6;
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 6));
		// for (int x = 0; x < xSize; x++)
		int32_t L_45 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0116:
	{
		// for (int x = 0; x < xSize; x++)
		int32_t L_46 = V_7;
		int32_t L_47 = __this->___xSize_7;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00a9;
		}
	}
	{
		// vert++;
		int32_t L_48 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		// for (int z = 0; z < zSize; z++)
		int32_t L_49 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_012a:
	{
		// for (int z = 0; z < zSize; z++)
		int32_t L_50 = V_6;
		int32_t L_51 = __this->___zSize_8;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00a4;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MeshGenerator::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_UpdateMesh_mC84F560423DAF86C598F557D559E4278D5F9634E (MeshGenerator_t25A0679B7EB967AA082713868489AF33C0249621* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mesh.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mesh_4;
		NullCheck(L_0);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_0, NULL);
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = __this->___mesh_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___vertices_5;
		NullCheck(L_1);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_1, L_2, NULL);
		// mesh.triangles = triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = __this->___mesh_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___triangles_6;
		NullCheck(L_3);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_3, L_4, NULL);
		// mesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = __this->___mesh_4;
		NullCheck(L_5);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_5, NULL);
		// mesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = __this->___mesh_4;
		NullCheck(L_6);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_6, NULL);
		// MeshCollider meshCollider = gameObject.GetComponent<MeshCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_8;
		L_8 = GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9(L_7, GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9_RuntimeMethod_var);
		// meshCollider.sharedMesh = mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = __this->___mesh_4;
		NullCheck(L_8);
		MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void MeshGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator__ctor_m2E509BE91B905591EC0639DA7C2DEA5836954385 (MeshGenerator_t25A0679B7EB967AA082713868489AF33C0249621* __this, const RuntimeMethod* method) 
{
	{
		// public int xSize = 20;
		__this->___xSize_7 = ((int32_t)20);
		// public int zSize = 20;
		__this->___zSize_8 = ((int32_t)20);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Hand_L::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_L_Start_m1B212A12019B0FA2996A44FC92870284B6377AD8 (Hand_L_t9CA7778AA2547A7AA0F2CD880C41002445A34620* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handAnimator = this.gameObject.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___handAnimator_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handAnimator_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void Hand_L::UpdateHandAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_L_UpdateHandAnimation_m9351709C20209E10DC61386278ED6E28F401BD0D (Hand_L_t9CA7778AA2547A7AA0F2CD880C41002445A34620* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE17E01A6CDB454BE09B74C544A2901D6C9F990AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handAnimator.SetFloat("Grab", leftGrabReference.action.ReadValue<float>());
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___handAnimator_7;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___leftGrabReference_4;
		NullCheck(L_1);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_1, NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_0);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_0, _stringLiteralE17E01A6CDB454BE09B74C544A2901D6C9F990AF, L_3, NULL);
		// handAnimator.SetFloat("Trigger", leftTriggerReference.action.ReadValue<float>());
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___handAnimator_7;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_5 = __this->___leftTriggerReference_5;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_5, NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_6, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_4);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_4, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, L_7, NULL);
		// }
		return;
	}
}
// System.Void Hand_L::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_L_Update_mD88946CE32D690DEEF2772389ABB3D314CF830D2 (Hand_L_t9CA7778AA2547A7AA0F2CD880C41002445A34620* __this, const RuntimeMethod* method) 
{
	{
		// UpdateHandAnimation();
		Hand_L_UpdateHandAnimation_m9351709C20209E10DC61386278ED6E28F401BD0D(__this, NULL);
		// }
		return;
	}
}
// System.Void Hand_L::activateHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_L_activateHand_m8244105973E45B6CC34626D6725D08A14C080B70 (Hand_L_t9CA7778AA2547A7AA0F2CD880C41002445A34620* __this, const RuntimeMethod* method) 
{
	{
		// handModel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___handModel_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Hand_L::deactivateHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_L_deactivateHand_mFCE66BBC12543EB200AF5260950C9099AD68F290 (Hand_L_t9CA7778AA2547A7AA0F2CD880C41002445A34620* __this, const RuntimeMethod* method) 
{
	{
		// handModel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___handModel_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Hand_L::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_L__ctor_mFEEC588C9058EF714B73AED2007005C6AC94744B (Hand_L_t9CA7778AA2547A7AA0F2CD880C41002445A34620* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Hand_R::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_R_Start_m828E56F89F36DA47F64419A6B7E6986C92E6681A (Hand_R_tDDA4D33378F8E8C87C294892678E2C9345711391* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handAnimator = this.gameObject.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___handAnimator_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handAnimator_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void Hand_R::UpdateHandAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_R_UpdateHandAnimation_m39270D8C87DF5F40B7A2EB97E73060954AF7935D (Hand_R_tDDA4D33378F8E8C87C294892678E2C9345711391* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE17E01A6CDB454BE09B74C544A2901D6C9F990AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handAnimator.SetFloat("Grab", rightGrabReference.action.ReadValue<float>());
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___handAnimator_7;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___rightGrabReference_4;
		NullCheck(L_1);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_1, NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_0);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_0, _stringLiteralE17E01A6CDB454BE09B74C544A2901D6C9F990AF, L_3, NULL);
		// handAnimator.SetFloat("Trigger", rightTriggerReference.action.ReadValue<float>());
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___handAnimator_7;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_5 = __this->___rightTriggerReference_5;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_5, NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_6, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_4);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_4, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, L_7, NULL);
		// }
		return;
	}
}
// System.Void Hand_R::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_R_Update_m2ECA0E8798459CC2D43D1728156A7FFAA63FE851 (Hand_R_tDDA4D33378F8E8C87C294892678E2C9345711391* __this, const RuntimeMethod* method) 
{
	{
		// UpdateHandAnimation();
		Hand_R_UpdateHandAnimation_m39270D8C87DF5F40B7A2EB97E73060954AF7935D(__this, NULL);
		// }
		return;
	}
}
// System.Void Hand_R::activateHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_R_activateHand_m7B4F8B9A4610BC4EB7821653D3A6C9BC26EE4435 (Hand_R_tDDA4D33378F8E8C87C294892678E2C9345711391* __this, const RuntimeMethod* method) 
{
	{
		// handModel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___handModel_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Hand_R::deactivateHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_R_deactivateHand_m7BA1319BB70BA07025731EC492BF6CC13FBF8C9D (Hand_R_tDDA4D33378F8E8C87C294892678E2C9345711391* __this, const RuntimeMethod* method) 
{
	{
		// handModel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___handModel_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Hand_R::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_R__ctor_m54E6A463DA3B2684EEBEC06EB5DA769677F0CF39 (Hand_R_tDDA4D33378F8E8C87C294892678E2C9345711391* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GroundAirEventManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundAirEventManager_Start_mA27B3B134FE9594EFD33E064CDC91A5C19D605D7 (GroundAirEventManager_t50D1A55663A08FA52B5C1C3E83F7E92853A21895* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onGround == null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onGround_4;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// onGround = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onGround_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onGround_4), (void*)L_1);
	}

IL_0013:
	{
		// if (inAir == null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___inAir_5;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// inAir = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_3, NULL);
		__this->___inAir_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inAir_5), (void*)L_3);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void GroundAirEventManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundAirEventManager_FixedUpdate_mB5F8ECFB3258038C06171CAEE60368E93D71A3FE (GroundAirEventManager_t50D1A55663A08FA52B5C1C3E83F7E92853A21895* __this, const RuntimeMethod* method) 
{
	{
		// if (grounded)
		bool L_0 = __this->___grounded_7;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// onGround.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___onGround_4;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		return;
	}

IL_0014:
	{
		// if (Time.time > (inAirTime + inAirTimeThreshold)) {
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___inAirTime_8;
		float L_4 = __this->___inAirTimeThreshold_6;
		if ((!(((float)L_2) > ((float)((float)il2cpp_codegen_add(L_3, L_4))))))
		{
			goto IL_0033;
		}
	}
	{
		// inAir.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = __this->___inAir_5;
		NullCheck(L_5);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_5, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void GroundAirEventManager::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundAirEventManager_OnCollisionExit_m7CB34304D3CE242A98B25A921C10A658C1D70E37 (GroundAirEventManager_t50D1A55663A08FA52B5C1C3E83F7E92853A21895* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Terrain")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// inAirTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___inAirTime_8 = L_4;
		// grounded = false;
		__this->___grounded_7 = (bool)0;
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void GroundAirEventManager::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundAirEventManager_OnCollisionStay_m65F2F85E919F44CC5AC1F22D67F2FE687C65DFD3 (GroundAirEventManager_t50D1A55663A08FA52B5C1C3E83F7E92853A21895* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Terrain")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// grounded = true;
		__this->___grounded_7 = (bool)1;
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void GroundAirEventManager::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundAirEventManager_OnCollisionEnter_m5D86D073F6131BD21AF1A088B6A9F2CA7E33B4CD (GroundAirEventManager_t50D1A55663A08FA52B5C1C3E83F7E92853A21895* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Terrain")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// grounded = true;
		__this->___grounded_7 = (bool)1;
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void GroundAirEventManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundAirEventManager__ctor_m909332F4C8837A1EE1AEFB366157FA7A9B8DE93A (GroundAirEventManager_t50D1A55663A08FA52B5C1C3E83F7E92853A21895* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ImpactSystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpactSystem_Start_m017C8CD8DC68C23F252133A6AA681C5F2545EADC (ImpactSystem_tE02ACD2EE34954ADECC7ABDE7EAFCAFDA0847850* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ImpactSystem::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpactSystem_OnCollisionEnter_mDA39A6923E9DA61B50B4237F58DE1E7A8FFE1E11 (ImpactSystem_tE02ACD2EE34954ADECC7ABDE7EAFCAFDA0847850* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// if (collision.gameObject.tag == "Terrain")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993, NULL);
		if (!L_3)
		{
			goto IL_0123;
		}
	}
	{
		// if (Time.time > (inAirTime + impactThreshold))
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_5 = __this->___inAirTime_6;
		float L_6 = __this->___impactThreshold_5;
		if ((!(((float)L_4) > ((float)((float)il2cpp_codegen_add(L_5, L_6))))))
		{
			goto IL_0123;
		}
	}
	{
		// Vector3 normal = collision.contacts[0].normal;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_7 = ___0_collision;
		NullCheck(L_7);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_8;
		L_8 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		V_0 = L_9;
		// Vector3 vel = rb.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_4;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_10, NULL);
		V_1 = L_11;
		// float impact = vel.y + collision.relativeVelocity.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = L_12.___y_3;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_14 = ___0_collision;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_14, NULL);
		float L_16 = L_15.___y_3;
		V_2 = ((float)il2cpp_codegen_add(L_13, L_16));
		// Debug.DrawRay(transform.position, normal, Color.green, 100f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_18, L_19, L_20, (100.0f), NULL);
		// Debug.DrawRay(transform.position, vel, Color.red, 100f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_22, L_23, L_24, (100.0f), NULL);
		// Debug.DrawRay(transform.position, collision.relativeVelocity, Color.blue, 100f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_27 = ___0_collision;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_27, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_26, L_28, L_29, (100.0f), NULL);
		// Debug.DrawRay(transform.position, new Vector3(1, 1, 1) * impact, Color.cyan, 100f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		float L_33 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_31, L_34, L_35, (100.0f), NULL);
		// if (impact >= collision.relativeVelocity.y && impact > 4)
		float L_36 = V_2;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_37 = ___0_collision;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_37, NULL);
		float L_39 = L_38.___y_3;
		if ((!(((float)L_36) >= ((float)L_39))))
		{
			goto IL_0123;
		}
	}
	{
		float L_40 = V_2;
		if ((!(((float)L_40) > ((float)(4.0f)))))
		{
			goto IL_0123;
		}
	}
	{
		// rb.AddForce(-rb.velocity * impact);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_41 = __this->___rb_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_42 = __this->___rb_4;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_43, NULL);
		float L_45 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_44, L_45, NULL);
		NullCheck(L_41);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_41, L_46, NULL);
	}

IL_0123:
	{
		// }
		return;
	}
}
// System.Void ImpactSystem::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpactSystem_OnCollisionExit_mBBA402CDAA534A12A20498A5090D49C5E0730276 (ImpactSystem_tE02ACD2EE34954ADECC7ABDE7EAFCAFDA0847850* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Terrain")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralE5A22B80916586DE88322B31E1516201F5FE6993, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// inAirTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___inAirTime_6 = L_4;
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void ImpactSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpactSystem__ctor_m477C22A8C2539E872DFCBE127C042C9F5B91B48C (ImpactSystem_tE02ACD2EE34954ADECC7ABDE7EAFCAFDA0847850* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DiveForce::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiveForce_Start_m6E23E40EE833A645917DD4B02812999F4DA83AA8 (DiveForce_tC9A1036BE26E7E6D19BAF1009A3512950451774A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void DiveForce::OnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiveForce_OnGround_m2931D0711B0A59150AC0AC6A3338C63BF8A9658B (DiveForce_tC9A1036BE26E7E6D19BAF1009A3512950451774A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (joystickLeftClickReference.action.ReadValue<float>() == 1)
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___joystickLeftClickReference_6;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_1, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		if ((!(((float)L_2) == ((float)(1.0f)))))
		{
			goto IL_005e;
		}
	}
	{
		// rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y - diveForce, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_5;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rb_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		float L_6 = L_5.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_5;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_7, NULL);
		float L_9 = L_8.___y_3;
		float L_10 = __this->___diveForce_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___rb_5;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_6, ((float)il2cpp_codegen_subtract(L_9, L_10)), L_13, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_14, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void DiveForce::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiveForce__ctor_mCE893481A98BDB0B3C5529691158D1B407D5C5EC (DiveForce_tC9A1036BE26E7E6D19BAF1009A3512950451774A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Flapping::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flapping_Start_m92B7267B9DFF21E981E48F87F37B982B94FE903A (Flapping_t4C88BAB95E8FCCF596C31FE6979CF1B67CF31940* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Flapping::OnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flapping_OnGround_m40FE053BA57AA6FEB4D7F310E100C78B574C7398 (Flapping_t4C88BAB95E8FCCF596C31FE6979CF1B67CF31940* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// var leftHandVelocity = leftControllerVelocity.action.ReadValue<Vector3>().y;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___leftControllerVelocity_7;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_1, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		float L_3 = L_2.___y_3;
		// var rightHandVelocity = rightControllerVelocity.action.ReadValue<Vector3>().y;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___rightControllerVelocity_6;
		NullCheck(L_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_5, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		float L_7 = L_6.___y_3;
		V_0 = L_7;
		// var vel = leftHandVelocity + rightHandVelocity;
		float L_8 = V_0;
		// if (vel < -1 && rb.velocity.y <= 0)
		if ((!(((float)((float)il2cpp_codegen_add(L_3, L_8))) < ((float)(-1.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_5;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_9, NULL);
		float L_11 = L_10.___y_3;
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		// rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y * flappingForce, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___rb_5;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->___rb_5;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_13, NULL);
		float L_15 = L_14.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->___rb_5;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_16, NULL);
		float L_18 = L_17.___y_3;
		float L_19 = __this->___flappingForce_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___rb_5;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_20, NULL);
		float L_22 = L_21.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), L_15, ((float)il2cpp_codegen_multiply(L_18, L_19)), L_22, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_12, L_23, NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void Flapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flapping__ctor_m213DBB81AEF14248309283A979E0EA0052DFAFEA (Flapping_t4C88BAB95E8FCCF596C31FE6979CF1B67CF31940* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GlideControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlideControl_Start_mC0956AFEAA5CD51699652EE55654805EAD79D962 (GlideControl_t510AEDF1DF8E236772AF3A291A4C59DFE9CD5F2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_9), (void*)L_0);
		// cam = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___cam_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void GlideControl::OnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlideControl_OnGround_mA1A601A1C977288682E934FECAB1F7E1C5130077 (GlideControl_t510AEDF1DF8E236772AF3A291A4C59DFE9CD5F2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B10_0 = 0.0f;
	{
		// if (Time.time > (inAirTime + glideActivateTime))
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___inAirTime_8;
		float L_2 = __this->___glideActivateTime_6;
		if ((!(((float)L_0) > ((float)((float)il2cpp_codegen_add(L_1, L_2))))))
		{
			goto IL_0102;
		}
	}
	{
		// var angle = Vector3.Angle(cam.transform.forward, rb.velocity);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_10;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rb_9;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_6, NULL);
		float L_8;
		L_8 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_5, L_7, NULL);
		V_0 = L_8;
		// if (angle < maxTiltToBodyRotationRatio && angle > minTiltToBodyRotationRatio)
		float L_9 = V_0;
		float L_10 = __this->___maxTiltToBodyRotationRatio_4;
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0102;
		}
	}
	{
		float L_11 = V_0;
		float L_12 = __this->___minTiltToBodyRotationRatio_5;
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0102;
		}
	}
	{
		// Vector3 rightPos = rightControllerPosition.action.ReadValue<Vector3>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_13 = __this->___rightControllerPosition_11;
		NullCheck(L_13);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_14, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		// Vector3 leftPos = leftControllerPosition.action.ReadValue<Vector3>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_16 = __this->___leftControllerPosition_12;
		NullCheck(L_16);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_17, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		V_1 = L_18;
		// if (Vector3.Distance(rightPos, leftPos) > 1.2f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		float L_20;
		L_20 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_15, L_19, NULL);
		if ((!(((float)L_20) > ((float)(1.20000005f)))))
		{
			goto IL_0102;
		}
	}
	{
		// float diff = rightControllerPosition.action.ReadValue<Vector3>().y - leftControllerPosition.action.ReadValue<Vector3>().y;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_21 = __this->___rightControllerPosition_11;
		NullCheck(L_21);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_22, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		float L_24 = L_23.___y_3;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_25 = __this->___leftControllerPosition_12;
		NullCheck(L_25);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_26;
		L_26 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_26, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		float L_28 = L_27.___y_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_24, L_28));
		// diff = diff > 0.5f ? 0.5f : diff;
		float L_29 = V_2;
		if ((((float)L_29) > ((float)(0.5f))))
		{
			goto IL_00b8;
		}
	}
	{
		float L_30 = V_2;
		G_B7_0 = L_30;
		goto IL_00bd;
	}

IL_00b8:
	{
		G_B7_0 = (0.5f);
	}

IL_00bd:
	{
		V_2 = G_B7_0;
		// diff = diff < -0.5f ? -0.5f : diff;
		float L_31 = V_2;
		if ((((float)L_31) < ((float)(-0.5f))))
		{
			goto IL_00c9;
		}
	}
	{
		float L_32 = V_2;
		G_B10_0 = L_32;
		goto IL_00ce;
	}

IL_00c9:
	{
		G_B10_0 = (-0.5f);
	}

IL_00ce:
	{
		V_2 = G_B10_0;
		// rb.velocity = Quaternion.Euler(0, -diff * glidingForce, 0) * rb.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_33 = __this->___rb_9;
		float L_34 = V_2;
		float L_35 = __this->___glidingForce_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)il2cpp_codegen_multiply(((-L_34)), L_35)), (0.0f), NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_37 = __this->___rb_9;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_36, L_38, NULL);
		NullCheck(L_33);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_33, L_39, NULL);
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void GlideControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlideControl__ctor_mA4D6FD26A9FBA7E0A5843B83239B4FC59FE7ADC4 (GlideControl_t510AEDF1DF8E236772AF3A291A4C59DFE9CD5F2C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BreakForce::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BreakForce_Start_m97756652E8BC7DD726928958F2743D8BE54B50EC (BreakForce_t569CE76946BFDF2755502FA1582EF9197A01622F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void BreakForce::OnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BreakForce_OnGround_m7A8DA7B7153D989CD248A902161514D58B2F98C5 (BreakForce_t569CE76946BFDF2755502FA1582EF9197A01622F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (joystickRightClickReference.action.ReadValue<float>() == 1)
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___joystickRightClickReference_6;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_1, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		if ((!(((float)L_2) == ((float)(1.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		// rb.velocity = rb.velocity * breakForce;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rb_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		float L_6 = __this->___breakForce_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_7, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void BreakForce::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BreakForce__ctor_m9ADE6437B082E49BAFBE7103ECE25AD31152F99B (BreakForce_t569CE76946BFDF2755502FA1582EF9197A01622F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void JoystickMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickMovement_Start_m19E7B01461BC064BED5CF19E61B9B6D52FDB7EEC (JoystickMovement_tBA4B340FE18515419CD2F3FB2059B56BC990BA0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_8), (void*)L_0);
		// cam = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___cam_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void JoystickMovement::OnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickMovement_OnGround_m24008A1B445C5938DD2141618E6D20EC19448F0C (JoystickMovement_tBA4B340FE18515419CD2F3FB2059B56BC990BA0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (rb.velocity.magnitude < moveSpeed * 2)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_8;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_3 = __this->___moveSpeed_4;
		if ((!(((float)L_2) < ((float)((float)il2cpp_codegen_multiply(L_3, (2.0f)))))))
		{
			goto IL_011c;
		}
	}
	{
		// Vector2 inputAxis = leftJoystickReference.action.ReadValue<Vector2>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___leftJoystickReference_5;
		NullCheck(L_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_4, NULL);
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_5, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		V_1 = L_6;
		// Vector3 direction = inputAxis.y * cam.transform.forward + inputAxis.x * cam.transform.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		float L_8 = L_7.___y_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___cam_7;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_8, L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		float L_14 = L_13.___x_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___cam_7;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_14, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_18, NULL);
		V_2 = L_19;
		// rb.velocity = new Vector3(direction.x, 0, direction.z) * moveSpeed;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___rb_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		float L_22 = L_21.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		float L_24 = L_23.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), L_22, (0.0f), L_24, /*hidden argument*/NULL);
		float L_26 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		NullCheck(L_20);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_20, L_27, NULL);
		// if (lastBoostTimeStamp + cooldownPeriodInSeconds <= Time.time)
		float L_28 = __this->___lastBoostTimeStamp_9;
		float L_29 = __this->___cooldownPeriodInSeconds_10;
		float L_30;
		L_30 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		if ((!(((float)((float)il2cpp_codegen_add(L_28, L_29))) <= ((float)L_30))))
		{
			goto IL_011c;
		}
	}
	{
		// if (joystickLeftClickReference.action.ReadValue<float>() == 1)
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_31 = __this->___joystickLeftClickReference_6;
		NullCheck(L_31);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32;
		L_32 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_31, NULL);
		NullCheck(L_32);
		float L_33;
		L_33 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_32, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		if ((!(((float)L_33) == ((float)(1.0f)))))
		{
			goto IL_011c;
		}
	}
	{
		// rb.AddForce(new Vector3(cam.transform.forward.x, 0, cam.transform.forward.z) * 500f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_34 = __this->___rb_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35 = __this->___cam_7;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_36, NULL);
		float L_38 = L_37.___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_39 = __this->___cam_7;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_40, NULL);
		float L_42 = L_41.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), L_38, (0.0f), L_42, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, (500.0f), NULL);
		NullCheck(L_34);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_34, L_44, NULL);
		// lastBoostTimeStamp = Time.time;
		float L_45;
		L_45 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastBoostTimeStamp_9 = L_45;
	}

IL_011c:
	{
		// }
		return;
	}
}
// System.Void JoystickMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickMovement__ctor_mAAD9709778805C17C8DA29D795916BE94E163019 (JoystickMovement_tBA4B340FE18515419CD2F3FB2059B56BC990BA0D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Skiing::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skiing_Start_mD768214DAD3B85D9C5D716A08F0CE539D65441E1 (Skiing_tD8BB293DE98F9BE839C94A1536D2AEF8D1D6AE97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// cam = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___cam_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void Skiing::OnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skiing_OnGround_m93BEA32ACBA1BBE15844065111FA095284178727 (Skiing_tD8BB293DE98F9BE839C94A1536D2AEF8D1D6AE97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Skiing_tD8BB293DE98F9BE839C94A1536D2AEF8D1D6AE97* G_B2_0 = NULL;
	Skiing_tD8BB293DE98F9BE839C94A1536D2AEF8D1D6AE97* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Skiing_tD8BB293DE98F9BE839C94A1536D2AEF8D1D6AE97* G_B3_1 = NULL;
	{
		// isUphill = (rb.velocity.y > 0.0f) ? true : false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		float L_2 = L_1.___y_3;
		G_B1_0 = __this;
		if ((((float)L_2) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		NullCheck(G_B3_1);
		G_B3_1->___isUphill_10 = (bool)G_B3_0;
		// if (joystickLeftClickReference.action.ReadValue<float>() == 1)
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_3 = __this->___joystickLeftClickReference_9;
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_3, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_4, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		if ((!(((float)L_5) == ((float)(1.0f)))))
		{
			goto IL_00d2;
		}
	}
	{
		// if (isUphill && (lastBoostTimeStamp + 0.25f <= Time.time)) // Bergauf
		bool L_6 = __this->___isUphill_10;
		if (!L_6)
		{
			goto IL_0078;
		}
	}
	{
		float L_7 = __this->___lastBoostTimeStamp_8;
		float L_8;
		L_8 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		if ((!(((float)((float)il2cpp_codegen_add(L_7, (0.25f)))) <= ((float)L_8))))
		{
			goto IL_0078;
		}
	}
	{
		// rb.velocity = rb.velocity * misclickBreakForce;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_5;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_5;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_10, NULL);
		float L_12 = __this->___misclickBreakForce_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		NullCheck(L_9);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_9, L_13, NULL);
		return;
	}

IL_0078:
	{
		// rb.velocity = rb.velocity + new Vector3(cam.transform.forward.x, -1f, cam.transform.forward.z) * skiingSpeed;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14 = __this->___rb_5;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___rb_5;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_15, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = __this->___cam_4;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_18, NULL);
		float L_20 = L_19.___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = __this->___cam_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_22, NULL);
		float L_24 = L_23.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), L_20, (-1.0f), L_24, /*hidden argument*/NULL);
		float L_26 = __this->___skiingSpeed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_27, NULL);
		NullCheck(L_14);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_14, L_28, NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void Skiing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skiing__ctor_m3544D590A024391D915322A8E7E27A645D65D36C (Skiing_tD8BB293DE98F9BE839C94A1536D2AEF8D1D6AE97* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TiltControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltControl_Start_m857C1DF683EBB59A4980AC8227B2762AB02DD6B2 (TiltControl_t59F3FE49FD2814A774278AAD12415EF241A93CFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_0);
		// cam = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___cam_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void TiltControl::OnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltControl_OnGround_m46B1D5AC3C5ACB3F98A9D79F6A0F1E8B35750FA4 (TiltControl_t59F3FE49FD2814A774278AAD12415EF241A93CFC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var angle = Vector3.Angle(cam.transform.forward, rb.velocity);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_7;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_3, NULL);
		float L_5;
		L_5 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// if (angle < maxTiltToBodyRotationRatio && angle > minTiltToBodyRotationRatio)
		float L_6 = V_0;
		float L_7 = __this->___maxTiltToBodyRotationRatio_4;
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_007c;
		}
	}
	{
		float L_8 = V_0;
		float L_9 = __this->___minTiltToBodyRotationRatio_5;
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_007c;
		}
	}
	{
		// Quaternion quat = Quaternion.Euler(0, -cam.transform.localRotation.z * tiltForce, 0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___cam_8;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_11, NULL);
		float L_13 = L_12.___z_2;
		float L_14 = __this->___tiltForce_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)il2cpp_codegen_multiply(((-L_13)), L_14)), (0.0f), NULL);
		V_1 = L_15;
		// rb.velocity = quat * rb.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->___rb_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___rb_7;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_17, L_19, NULL);
		NullCheck(L_16);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_16, L_20, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void TiltControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltControl__ctor_m885B3D5B1433BA08A6B2A80C810DC9629C6FA918 (TiltControl_t59F3FE49FD2814A774278AAD12415EF241A93CFC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SnapTurn::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapTurn_LateUpdate_m4E991A0FC15B1B2EC2286AEE0C14F50E56733104 (SnapTurn_t67E613B5620540D106582BD5F889E125FD4FA608* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// valueFlick = joystickAxisReference.action.ReadValue<Vector2>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___joystickAxisReference_4;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_1, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		__this->___valueFlick_6 = L_2;
		// if (firstFlick)
		bool L_3 = __this->___firstFlick_5;
		if (!L_3)
		{
			goto IL_0088;
		}
	}
	{
		// if ((valueFlick.x > 0.9f))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___valueFlick_6);
		float L_5 = L_4->___x_0;
		if ((!(((float)L_5) > ((float)(0.899999976f)))))
		{
			goto IL_0053;
		}
	}
	{
		// transform.Rotate(0, 45f, 0, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_6, (0.0f), (45.0f), (0.0f), 1, NULL);
		// firstFlick = false;
		__this->___firstFlick_5 = (bool)0;
		return;
	}

IL_0053:
	{
		// else if ((valueFlick.x < -0.9f))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___valueFlick_6);
		float L_8 = L_7->___x_0;
		if ((!(((float)L_8) < ((float)(-0.899999976f)))))
		{
			goto IL_00bb;
		}
	}
	{
		// transform.Rotate(0, -45f, 0, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_9, (0.0f), (-45.0f), (0.0f), 1, NULL);
		// firstFlick = false;
		__this->___firstFlick_5 = (bool)0;
		return;
	}

IL_0088:
	{
		// else if (valueFlick.x > 0.9f || (valueFlick.x < -0.9f))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___valueFlick_6);
		float L_11 = L_10->___x_0;
		if ((((float)L_11) > ((float)(0.899999976f))))
		{
			goto IL_00ac;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___valueFlick_6);
		float L_13 = L_12->___x_0;
		if ((!(((float)L_13) < ((float)(-0.899999976f)))))
		{
			goto IL_00b4;
		}
	}

IL_00ac:
	{
		// firstFlick = false;
		__this->___firstFlick_5 = (bool)0;
		return;
	}

IL_00b4:
	{
		// firstFlick = true;
		__this->___firstFlick_5 = (bool)1;
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void SnapTurn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapTurn__ctor_m7638BC6825F71238B88A0F3EADAFFDD852C58C0B (SnapTurn_t67E613B5620540D106582BD5F889E125FD4FA608* __this, const RuntimeMethod* method) 
{
	{
		// private bool firstFlick = true;
		__this->___firstFlick_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BoostPlatform::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoostPlatform_OnTriggerEnter_mE6373D6C5E259258BE8AAB4CA56BE768EEEA7704 (BoostPlatform_t5C54908576139DEBAD77EA38FB01A72B9813AA18* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// rb = other.gameObject.GetComponent<Rigidbody>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___0_other;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_4, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_5);
		// rb.velocity = rb.velocity * boostForce;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rb_5;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_5;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_7, NULL);
		float L_9 = __this->___boostForce_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		NullCheck(L_6);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_6, L_10, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void BoostPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoostPlatform__ctor_mFC07174CC3F6DF2861B36C4C3B683C734BAB0654 (BoostPlatform_t5C54908576139DEBAD77EA38FB01A72B9813AA18* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BreakPlatform::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BreakPlatform_OnTriggerEnter_m0E06860C00A55B6501D5E5F70A0E839A30C88EB9 (BreakPlatform_t85B27B1279BBC4596C4933C6F411DD618E139955* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// rb = other.gameObject.GetComponent<Rigidbody>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___0_other;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_4, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// rb.velocity = rb.velocity * breakForce;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = L_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_6, NULL);
		float L_8 = __this->___breakForce_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		NullCheck(L_6);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_6, L_9, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void BreakPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BreakPlatform__ctor_m5BF3D891604DE67BBD6485752FD727E51D7E8CE1 (BreakPlatform_t85B27B1279BBC4596C4933C6F411DD618E139955* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void InvertPlatform::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvertPlatform_OnTriggerEnter_m6BE2077E2507DEE4DDD4C15BB83154E55DCC2DEC (InvertPlatform_tE5AE295C4A650146301B016F4F96FA2DF21E1438* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// rb = other.gameObject.GetComponent<Rigidbody>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___0_other;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_4, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_5);
		// rb.velocity = -rb.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rb_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_8, NULL);
		NullCheck(L_6);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_6, L_9, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void InvertPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvertPlatform__ctor_mDFAB116EBC6A5A1BCC2786FCC5328CD68E7BCBD2 (InvertPlatform_tE5AE295C4A650146301B016F4F96FA2DF21E1438* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void JumpPlatform::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpPlatform_OnTriggerEnter_m28F022AC98BA89EDB5166B7C895E92CF7BDE4C37 (JumpPlatform_t1DD8E1B0CBE2D3F8FF2D6A5B8427CB1946B3ED37* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// other.gameObject.GetComponent<Rigidbody>().AddForce(Vector3.up * jumpForce);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___0_other;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_4, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_7 = __this->___jumpForce_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_5, L_8, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void JumpPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpPlatform__ctor_m4CDA3B07CD14057A8C7103D457F3B6EE63D48A40 (JumpPlatform_t1DD8E1B0CBE2D3F8FF2D6A5B8427CB1946B3ED37* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Ladder::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_OnTriggerEnter_m406F571AF6AEE15E7B517788FA60EB2058D5F04D (Ladder_t80787B68F0CCDF3F94C66C38E602881D6326F841* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// rb = other.gameObject.GetComponent<Rigidbody>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___0_other;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_4, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_5);
		// vel = rb.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rb_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_6, NULL);
		__this->___vel_6 = L_7;
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Ladder::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_OnTriggerStay_m914293F17D726673DF17D8662F5744D0447C3C74 (Ladder_t80787B68F0CCDF3F94C66C38E602881D6326F841* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// rb.velocity = new Vector3(0, 10, 0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.0f), (10.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_4, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Ladder::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_OnTriggerExit_mF45A9BC3E0090D13ED15B7E2B78B03A9CB5F9D28 (Ladder_t80787B68F0CCDF3F94C66C38E602881D6326F841* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// rb.velocity = vel;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___vel_6;
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_4, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Ladder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder__ctor_m20D110095FDAF909E8E56B6B0EFEB938989BC8D1 (Ladder_t80787B68F0CCDF3F94C66C38E602881D6326F841* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ReflectPlatform::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectPlatform_OnTriggerEnter_mA2EC0C2F6CDD62515A9C45C30F6A0C070010A461 (ReflectPlatform_t937A7B0002EB6535D29C1DD54FAC79B50D0A73C0* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_00fb;
		}
	}
	{
		// if (timestamp + 0.1f < Time.time)
		float L_3 = __this->___timestamp_7;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		if ((!(((float)((float)il2cpp_codegen_add(L_3, (0.100000001f)))) < ((float)L_4))))
		{
			goto IL_00fb;
		}
	}
	{
		// rb = other.gameObject.GetComponent<Rigidbody>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___0_other;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7;
		L_7 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_6, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_7);
		// x = rb.velocity.x;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___rb_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_8, NULL);
		float L_10 = L_9.___x_2;
		V_0 = L_10;
		// z = rb.velocity.z;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___rb_4;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_11, NULL);
		float L_13 = L_12.___z_4;
		V_1 = L_13;
		// if (invertX)
		bool L_14 = __this->___invertX_5;
		if (!L_14)
		{
			goto IL_006e;
		}
	}
	{
		// x *= -1;
		float L_15 = V_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_15, (-1.0f)));
	}

IL_006e:
	{
		// if (invertZ)
		bool L_16 = __this->___invertZ_6;
		if (!L_16)
		{
			goto IL_007e;
		}
	}
	{
		// z *= -1;
		float L_17 = V_1;
		V_1 = ((float)il2cpp_codegen_multiply(L_17, (-1.0f)));
	}

IL_007e:
	{
		// rb.velocity = new Vector3(x, rb.velocity.y, z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___rb_4;
		float L_19 = V_0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___rb_4;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_20, NULL);
		float L_22 = L_21.___y_3;
		float L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_19, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_18);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_18, L_24, NULL);
		// Instantiate(effect, gameObject.GetComponent<Collider>().ClosestPointOnBounds(other.gameObject.transform.position), transform.rotation * Quaternion.Euler(90, 0, 90));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___effect_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_26);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_27;
		L_27 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_26, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28 = ___0_other;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_28, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Collider_ClosestPointOnBounds_mBF2F0C0E76C5F11AED801931D780823A94630952(L_27, L_31, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_33, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((90.0f), (0.0f), (90.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_34, L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_32, L_36, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// timestamp = Time.time;
		float L_38;
		L_38 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___timestamp_7 = L_38;
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void ReflectPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectPlatform__ctor_m59D757F6DD571C58DEA2889713EA5950A9BC1CF0 (ReflectPlatform_t937A7B0002EB6535D29C1DD54FAC79B50D0A73C0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VelocityText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityText_Start_m0C41F3E36203B39C9C3DE23B430E829F3ED7CDB2 (VelocityText_t7AF8317B7E6D0263448574344F74D73FEFFCC1C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = this.gameObject.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___text_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_5), (void*)L_1);
		// rb = player.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_4;
		NullCheck(L_2);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3;
		L_3 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_2, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void VelocityText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityText_Update_mEEEAD20D77D4BFC8C9CCDDFF5E96B39AE169BBAA (VelocityText_t7AF8317B7E6D0263448574344F74D73FEFFCC1C6* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// text.text = rb.velocity.magnitude.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_5;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void VelocityText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityText__ctor_m433DE63C7FB6E8E71B20A7C5064CC2FCEEA3EEAC (VelocityText_t7AF8317B7E6D0263448574344F74D73FEFFCC1C6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void IK_Hand::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IK_Hand_Update_mBAD066D5162F441C2E8AD8B71EEF7474B2D42C15 (IK_Hand_t2695DB1E7C6B4731D7B4356B57AED6300E69DFEE* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.transform.position = new Vector3(followObject.transform.position.x - pX, followObject.transform.position.y - pY, followObject.transform.position.z - pZ);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___followObject_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		float L_6 = __this->___pX_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___followObject_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		float L_11 = __this->___pY_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___followObject_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___z_4;
		float L_16 = __this->___pZ_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)il2cpp_codegen_subtract(L_5, L_6)), ((float)il2cpp_codegen_subtract(L_10, L_11)), ((float)il2cpp_codegen_subtract(L_15, L_16)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_17, NULL);
		// gameObject.transform.rotation = followObject.transform.rotation * Quaternion.Euler(new Vector3(X, Y, Z));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___followObject_4;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_21, NULL);
		float L_23 = __this->___X_6;
		float L_24 = __this->___Y_7;
		float L_25 = __this->___Z_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), L_23, L_24, L_25, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_26, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_22, L_27, NULL);
		NullCheck(L_19);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_19, L_28, NULL);
		// }
		return;
	}
}
// System.Void IK_Hand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IK_Hand__ctor_m0BFBF5E8B2F7C7C91516BF78BCD74B4DAF755EBD (IK_Hand_t2695DB1E7C6B4731D7B4356B57AED6300E69DFEE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WingsBelowCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WingsBelowCamera_Update_m6BAB8D214687E2047C7FF4C9AC1B637CD2109A08 (WingsBelowCamera_t2215302E1537E96D0C2E409E878A28CBAC81D476* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.transform.position = new Vector3(followObject.transform.position.x, gameObject.transform.position.y  , followObject.transform.position.z   );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___followObject_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___followObject_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_5, L_9, L_13, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_14, NULL);
		// }
		return;
	}
}
// System.Void WingsBelowCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WingsBelowCamera__ctor_m823A32F43C070D897471F0F6AB4F5FFEC307A30C (WingsBelowCamera_t2215302E1537E96D0C2E409E878A28CBAC81D476* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WebXR.Interactions.FPSCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_Update_m9D207BFEBDB7A60620F6402DC7307B5278F7A81E (FPSCounter_t7417F8E6C1F1B4AB0DFB3CBD7A71B68A96921E66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// framesCount++;
		float L_0 = __this->___framesCount_6;
		__this->___framesCount_6 = ((float)il2cpp_codegen_add(L_0, (1.0f)));
		// if (Time.time >= lastCheck + rate)
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___lastCheck_7;
		float L_3 = __this->___rate_8;
		if ((!(((float)L_1) >= ((float)((float)il2cpp_codegen_add(L_2, L_3))))))
		{
			goto IL_0070;
		}
	}
	{
		// fps = framesCount / (Time.time - lastCheck);
		float L_4 = __this->___framesCount_6;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_6 = __this->___lastCheck_7;
		__this->___fps_5 = ((float)(L_4/((float)il2cpp_codegen_subtract(L_5, L_6))));
		// lastCheck = Time.time;
		float L_7;
		L_7 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastCheck_7 = L_7;
		// framesCount = 0;
		__this->___framesCount_6 = (0.0f);
		// text.text = fps.ToString("F0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___text_4;
		float* L_9 = (&__this->___fps_5);
		String_t* L_10;
		L_10 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_9, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void WebXR.Interactions.FPSCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter__ctor_mAF25F2C8EDF8993624A503DE7E80E7BF89567A31 (FPSCounter_t7417F8E6C1F1B4AB0DFB3CBD7A71B68A96921E66* __this, const RuntimeMethod* method) 
{
	{
		// private float rate = 0.5f;
		__this->___rate_8 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_scale, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_scale;
		float L_2 = L_1.___x_2;
		__this->___x_2 = ((float)il2cpp_codegen_multiply(L_0, L_2));
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_scale;
		float L_5 = L_4.___y_3;
		__this->___y_3 = ((float)il2cpp_codegen_multiply(L_3, L_5));
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_scale;
		float L_8 = L_7.___z_4;
		__this->___z_4 = ((float)il2cpp_codegen_multiply(L_6, L_8));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_mB1D6A10F386CE1EEA99DB69486DDA6DA531D799D_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___1_length;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(L_0, ((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		___0_t = L_2;
		float L_3 = ___1_length;
		float L_4 = ___0_t;
		float L_5 = ___1_length;
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract(L_4, L_5)));
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_6));
		goto IL_001d;
	}

IL_001d:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		float L_2 = ___2_t;
		float L_3 = ___2_t;
		float L_4 = ___2_t;
		float L_5 = ___2_t;
		float L_6 = ___2_t;
		___2_t = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_2)), L_3)), L_4)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_5)), L_6))));
		float L_7 = ___1_to;
		float L_8 = ___2_t;
		float L_9 = ___0_from;
		float L_10 = ___2_t;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract((1.0f), L_10))))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___2_maxDelta;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___1_target;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___0_current;
		float L_7 = ___1_target;
		float L_8 = ___0_current;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___2_maxDelta;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_to;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
