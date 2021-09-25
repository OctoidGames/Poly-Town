#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t2866794480;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// upgradeButtons
struct  upgradeButtons_t2191925171  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject upgradeButtons::upgrader
	GameObject_t1756533147 * ___upgrader_2;
	// UnityEngine.UI.Button upgradeButtons::Button1
	Button_t2872111280 * ___Button1_3;
	// UnityEngine.UI.Button upgradeButtons::Button2
	Button_t2872111280 * ___Button2_4;
	// UnityEngine.UI.Button upgradeButtons::Button3
	Button_t2872111280 * ___Button3_5;
	// UnityEngine.UI.Text upgradeButtons::Text1
	Text_t356221433 * ___Text1_6;
	// UnityEngine.UI.Text upgradeButtons::Text2
	Text_t356221433 * ___Text2_7;
	// UnityEngine.UI.Text upgradeButtons::Text3
	Text_t356221433 * ___Text3_8;
	// UnityEngine.GameObject upgradeButtons::Farm
	GameObject_t1756533147 * ___Farm_9;
	// UnityEngine.GameObject upgradeButtons::Houses
	GameObject_t1756533147 * ___Houses_10;
	// UnityEngine.GameObject upgradeButtons::Farm2
	GameObject_t1756533147 * ___Farm2_11;
	// UnityEngine.GameObject upgradeButtons::Houses2
	GameObject_t1756533147 * ___Houses2_12;
	// UnityEngine.GameObject upgradeButtons::Appartments1
	GameObject_t1756533147 * ___Appartments1_13;
	// UnityEngine.GameObject upgradeButtons::TextileMill
	GameObject_t1756533147 * ___TextileMill_14;
	// UnityEngine.GameObject upgradeButtons::ClothingFactory
	GameObject_t1756533147 * ___ClothingFactory_15;
	// UnityEngine.GameObject upgradeButtons::Mine
	GameObject_t1756533147 * ___Mine_16;
	// UnityEngine.GameObject upgradeButtons::Mine2
	GameObject_t1756533147 * ___Mine2_17;
	// UnityEngine.GameObject upgradeButtons::Refinery
	GameObject_t1756533147 * ___Refinery_18;
	// System.String upgradeButtons::TileType
	String_t* ___TileType_19;
	// UnityEngine.Vector3 upgradeButtons::tilePos
	Vector3_t2243707580  ___tilePos_20;
	// System.Collections.Generic.List`1<UnityEngine.Collider> upgradeButtons::colliders
	List_1_t2866794480 * ___colliders_21;
	// UnityEngine.Vector2 upgradeButtons::st
	Vector2_t2243707579  ___st_22;
	// System.Boolean upgradeButtons::HMm
	bool ___HMm_23;
	// System.String[] upgradeButtons::FarmCodes
	StringU5BU5D_t1642385972* ___FarmCodes_24;
	// System.String[] upgradeButtons::FarmNeeders
	StringU5BU5D_t1642385972* ___FarmNeeders_25;
	// System.String[] upgradeButtons::TextileMills
	StringU5BU5D_t1642385972* ___TextileMills_26;
	// System.String[] upgradeButtons::TextileMillNeeders
	StringU5BU5D_t1642385972* ___TextileMillNeeders_27;
	// System.String[] upgradeButtons::Mines
	StringU5BU5D_t1642385972* ___Mines_28;
	// System.String[] upgradeButtons::MineNeeders
	StringU5BU5D_t1642385972* ___MineNeeders_29;
	// UnityEngine.AudioSource upgradeButtons::UpgradeSound
	AudioSource_t1135106623 * ___UpgradeSound_30;
	// UnityEngine.AudioSource upgradeButtons::ErrorSound
	AudioSource_t1135106623 * ___ErrorSound_31;
	// UnityEngine.UI.Text upgradeButtons::WarningText
	Text_t356221433 * ___WarningText_32;
	// System.Single upgradeButtons::Timer
	float ___Timer_33;
	// System.Int32 upgradeButtons::unemployed
	int32_t ___unemployed_34;

public:
	inline static int32_t get_offset_of_upgrader_2() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___upgrader_2)); }
	inline GameObject_t1756533147 * get_upgrader_2() const { return ___upgrader_2; }
	inline GameObject_t1756533147 ** get_address_of_upgrader_2() { return &___upgrader_2; }
	inline void set_upgrader_2(GameObject_t1756533147 * value)
	{
		___upgrader_2 = value;
		Il2CppCodeGenWriteBarrier(&___upgrader_2, value);
	}

	inline static int32_t get_offset_of_Button1_3() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Button1_3)); }
	inline Button_t2872111280 * get_Button1_3() const { return ___Button1_3; }
	inline Button_t2872111280 ** get_address_of_Button1_3() { return &___Button1_3; }
	inline void set_Button1_3(Button_t2872111280 * value)
	{
		___Button1_3 = value;
		Il2CppCodeGenWriteBarrier(&___Button1_3, value);
	}

	inline static int32_t get_offset_of_Button2_4() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Button2_4)); }
	inline Button_t2872111280 * get_Button2_4() const { return ___Button2_4; }
	inline Button_t2872111280 ** get_address_of_Button2_4() { return &___Button2_4; }
	inline void set_Button2_4(Button_t2872111280 * value)
	{
		___Button2_4 = value;
		Il2CppCodeGenWriteBarrier(&___Button2_4, value);
	}

	inline static int32_t get_offset_of_Button3_5() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Button3_5)); }
	inline Button_t2872111280 * get_Button3_5() const { return ___Button3_5; }
	inline Button_t2872111280 ** get_address_of_Button3_5() { return &___Button3_5; }
	inline void set_Button3_5(Button_t2872111280 * value)
	{
		___Button3_5 = value;
		Il2CppCodeGenWriteBarrier(&___Button3_5, value);
	}

	inline static int32_t get_offset_of_Text1_6() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Text1_6)); }
	inline Text_t356221433 * get_Text1_6() const { return ___Text1_6; }
	inline Text_t356221433 ** get_address_of_Text1_6() { return &___Text1_6; }
	inline void set_Text1_6(Text_t356221433 * value)
	{
		___Text1_6 = value;
		Il2CppCodeGenWriteBarrier(&___Text1_6, value);
	}

	inline static int32_t get_offset_of_Text2_7() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Text2_7)); }
	inline Text_t356221433 * get_Text2_7() const { return ___Text2_7; }
	inline Text_t356221433 ** get_address_of_Text2_7() { return &___Text2_7; }
	inline void set_Text2_7(Text_t356221433 * value)
	{
		___Text2_7 = value;
		Il2CppCodeGenWriteBarrier(&___Text2_7, value);
	}

	inline static int32_t get_offset_of_Text3_8() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Text3_8)); }
	inline Text_t356221433 * get_Text3_8() const { return ___Text3_8; }
	inline Text_t356221433 ** get_address_of_Text3_8() { return &___Text3_8; }
	inline void set_Text3_8(Text_t356221433 * value)
	{
		___Text3_8 = value;
		Il2CppCodeGenWriteBarrier(&___Text3_8, value);
	}

	inline static int32_t get_offset_of_Farm_9() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Farm_9)); }
	inline GameObject_t1756533147 * get_Farm_9() const { return ___Farm_9; }
	inline GameObject_t1756533147 ** get_address_of_Farm_9() { return &___Farm_9; }
	inline void set_Farm_9(GameObject_t1756533147 * value)
	{
		___Farm_9 = value;
		Il2CppCodeGenWriteBarrier(&___Farm_9, value);
	}

	inline static int32_t get_offset_of_Houses_10() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Houses_10)); }
	inline GameObject_t1756533147 * get_Houses_10() const { return ___Houses_10; }
	inline GameObject_t1756533147 ** get_address_of_Houses_10() { return &___Houses_10; }
	inline void set_Houses_10(GameObject_t1756533147 * value)
	{
		___Houses_10 = value;
		Il2CppCodeGenWriteBarrier(&___Houses_10, value);
	}

	inline static int32_t get_offset_of_Farm2_11() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Farm2_11)); }
	inline GameObject_t1756533147 * get_Farm2_11() const { return ___Farm2_11; }
	inline GameObject_t1756533147 ** get_address_of_Farm2_11() { return &___Farm2_11; }
	inline void set_Farm2_11(GameObject_t1756533147 * value)
	{
		___Farm2_11 = value;
		Il2CppCodeGenWriteBarrier(&___Farm2_11, value);
	}

	inline static int32_t get_offset_of_Houses2_12() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Houses2_12)); }
	inline GameObject_t1756533147 * get_Houses2_12() const { return ___Houses2_12; }
	inline GameObject_t1756533147 ** get_address_of_Houses2_12() { return &___Houses2_12; }
	inline void set_Houses2_12(GameObject_t1756533147 * value)
	{
		___Houses2_12 = value;
		Il2CppCodeGenWriteBarrier(&___Houses2_12, value);
	}

	inline static int32_t get_offset_of_Appartments1_13() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Appartments1_13)); }
	inline GameObject_t1756533147 * get_Appartments1_13() const { return ___Appartments1_13; }
	inline GameObject_t1756533147 ** get_address_of_Appartments1_13() { return &___Appartments1_13; }
	inline void set_Appartments1_13(GameObject_t1756533147 * value)
	{
		___Appartments1_13 = value;
		Il2CppCodeGenWriteBarrier(&___Appartments1_13, value);
	}

	inline static int32_t get_offset_of_TextileMill_14() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___TextileMill_14)); }
	inline GameObject_t1756533147 * get_TextileMill_14() const { return ___TextileMill_14; }
	inline GameObject_t1756533147 ** get_address_of_TextileMill_14() { return &___TextileMill_14; }
	inline void set_TextileMill_14(GameObject_t1756533147 * value)
	{
		___TextileMill_14 = value;
		Il2CppCodeGenWriteBarrier(&___TextileMill_14, value);
	}

	inline static int32_t get_offset_of_ClothingFactory_15() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___ClothingFactory_15)); }
	inline GameObject_t1756533147 * get_ClothingFactory_15() const { return ___ClothingFactory_15; }
	inline GameObject_t1756533147 ** get_address_of_ClothingFactory_15() { return &___ClothingFactory_15; }
	inline void set_ClothingFactory_15(GameObject_t1756533147 * value)
	{
		___ClothingFactory_15 = value;
		Il2CppCodeGenWriteBarrier(&___ClothingFactory_15, value);
	}

	inline static int32_t get_offset_of_Mine_16() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Mine_16)); }
	inline GameObject_t1756533147 * get_Mine_16() const { return ___Mine_16; }
	inline GameObject_t1756533147 ** get_address_of_Mine_16() { return &___Mine_16; }
	inline void set_Mine_16(GameObject_t1756533147 * value)
	{
		___Mine_16 = value;
		Il2CppCodeGenWriteBarrier(&___Mine_16, value);
	}

	inline static int32_t get_offset_of_Mine2_17() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Mine2_17)); }
	inline GameObject_t1756533147 * get_Mine2_17() const { return ___Mine2_17; }
	inline GameObject_t1756533147 ** get_address_of_Mine2_17() { return &___Mine2_17; }
	inline void set_Mine2_17(GameObject_t1756533147 * value)
	{
		___Mine2_17 = value;
		Il2CppCodeGenWriteBarrier(&___Mine2_17, value);
	}

	inline static int32_t get_offset_of_Refinery_18() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Refinery_18)); }
	inline GameObject_t1756533147 * get_Refinery_18() const { return ___Refinery_18; }
	inline GameObject_t1756533147 ** get_address_of_Refinery_18() { return &___Refinery_18; }
	inline void set_Refinery_18(GameObject_t1756533147 * value)
	{
		___Refinery_18 = value;
		Il2CppCodeGenWriteBarrier(&___Refinery_18, value);
	}

	inline static int32_t get_offset_of_TileType_19() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___TileType_19)); }
	inline String_t* get_TileType_19() const { return ___TileType_19; }
	inline String_t** get_address_of_TileType_19() { return &___TileType_19; }
	inline void set_TileType_19(String_t* value)
	{
		___TileType_19 = value;
		Il2CppCodeGenWriteBarrier(&___TileType_19, value);
	}

	inline static int32_t get_offset_of_tilePos_20() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___tilePos_20)); }
	inline Vector3_t2243707580  get_tilePos_20() const { return ___tilePos_20; }
	inline Vector3_t2243707580 * get_address_of_tilePos_20() { return &___tilePos_20; }
	inline void set_tilePos_20(Vector3_t2243707580  value)
	{
		___tilePos_20 = value;
	}

	inline static int32_t get_offset_of_colliders_21() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___colliders_21)); }
	inline List_1_t2866794480 * get_colliders_21() const { return ___colliders_21; }
	inline List_1_t2866794480 ** get_address_of_colliders_21() { return &___colliders_21; }
	inline void set_colliders_21(List_1_t2866794480 * value)
	{
		___colliders_21 = value;
		Il2CppCodeGenWriteBarrier(&___colliders_21, value);
	}

	inline static int32_t get_offset_of_st_22() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___st_22)); }
	inline Vector2_t2243707579  get_st_22() const { return ___st_22; }
	inline Vector2_t2243707579 * get_address_of_st_22() { return &___st_22; }
	inline void set_st_22(Vector2_t2243707579  value)
	{
		___st_22 = value;
	}

	inline static int32_t get_offset_of_HMm_23() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___HMm_23)); }
	inline bool get_HMm_23() const { return ___HMm_23; }
	inline bool* get_address_of_HMm_23() { return &___HMm_23; }
	inline void set_HMm_23(bool value)
	{
		___HMm_23 = value;
	}

	inline static int32_t get_offset_of_FarmCodes_24() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___FarmCodes_24)); }
	inline StringU5BU5D_t1642385972* get_FarmCodes_24() const { return ___FarmCodes_24; }
	inline StringU5BU5D_t1642385972** get_address_of_FarmCodes_24() { return &___FarmCodes_24; }
	inline void set_FarmCodes_24(StringU5BU5D_t1642385972* value)
	{
		___FarmCodes_24 = value;
		Il2CppCodeGenWriteBarrier(&___FarmCodes_24, value);
	}

	inline static int32_t get_offset_of_FarmNeeders_25() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___FarmNeeders_25)); }
	inline StringU5BU5D_t1642385972* get_FarmNeeders_25() const { return ___FarmNeeders_25; }
	inline StringU5BU5D_t1642385972** get_address_of_FarmNeeders_25() { return &___FarmNeeders_25; }
	inline void set_FarmNeeders_25(StringU5BU5D_t1642385972* value)
	{
		___FarmNeeders_25 = value;
		Il2CppCodeGenWriteBarrier(&___FarmNeeders_25, value);
	}

	inline static int32_t get_offset_of_TextileMills_26() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___TextileMills_26)); }
	inline StringU5BU5D_t1642385972* get_TextileMills_26() const { return ___TextileMills_26; }
	inline StringU5BU5D_t1642385972** get_address_of_TextileMills_26() { return &___TextileMills_26; }
	inline void set_TextileMills_26(StringU5BU5D_t1642385972* value)
	{
		___TextileMills_26 = value;
		Il2CppCodeGenWriteBarrier(&___TextileMills_26, value);
	}

	inline static int32_t get_offset_of_TextileMillNeeders_27() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___TextileMillNeeders_27)); }
	inline StringU5BU5D_t1642385972* get_TextileMillNeeders_27() const { return ___TextileMillNeeders_27; }
	inline StringU5BU5D_t1642385972** get_address_of_TextileMillNeeders_27() { return &___TextileMillNeeders_27; }
	inline void set_TextileMillNeeders_27(StringU5BU5D_t1642385972* value)
	{
		___TextileMillNeeders_27 = value;
		Il2CppCodeGenWriteBarrier(&___TextileMillNeeders_27, value);
	}

	inline static int32_t get_offset_of_Mines_28() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Mines_28)); }
	inline StringU5BU5D_t1642385972* get_Mines_28() const { return ___Mines_28; }
	inline StringU5BU5D_t1642385972** get_address_of_Mines_28() { return &___Mines_28; }
	inline void set_Mines_28(StringU5BU5D_t1642385972* value)
	{
		___Mines_28 = value;
		Il2CppCodeGenWriteBarrier(&___Mines_28, value);
	}

	inline static int32_t get_offset_of_MineNeeders_29() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___MineNeeders_29)); }
	inline StringU5BU5D_t1642385972* get_MineNeeders_29() const { return ___MineNeeders_29; }
	inline StringU5BU5D_t1642385972** get_address_of_MineNeeders_29() { return &___MineNeeders_29; }
	inline void set_MineNeeders_29(StringU5BU5D_t1642385972* value)
	{
		___MineNeeders_29 = value;
		Il2CppCodeGenWriteBarrier(&___MineNeeders_29, value);
	}

	inline static int32_t get_offset_of_UpgradeSound_30() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___UpgradeSound_30)); }
	inline AudioSource_t1135106623 * get_UpgradeSound_30() const { return ___UpgradeSound_30; }
	inline AudioSource_t1135106623 ** get_address_of_UpgradeSound_30() { return &___UpgradeSound_30; }
	inline void set_UpgradeSound_30(AudioSource_t1135106623 * value)
	{
		___UpgradeSound_30 = value;
		Il2CppCodeGenWriteBarrier(&___UpgradeSound_30, value);
	}

	inline static int32_t get_offset_of_ErrorSound_31() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___ErrorSound_31)); }
	inline AudioSource_t1135106623 * get_ErrorSound_31() const { return ___ErrorSound_31; }
	inline AudioSource_t1135106623 ** get_address_of_ErrorSound_31() { return &___ErrorSound_31; }
	inline void set_ErrorSound_31(AudioSource_t1135106623 * value)
	{
		___ErrorSound_31 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorSound_31, value);
	}

	inline static int32_t get_offset_of_WarningText_32() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___WarningText_32)); }
	inline Text_t356221433 * get_WarningText_32() const { return ___WarningText_32; }
	inline Text_t356221433 ** get_address_of_WarningText_32() { return &___WarningText_32; }
	inline void set_WarningText_32(Text_t356221433 * value)
	{
		___WarningText_32 = value;
		Il2CppCodeGenWriteBarrier(&___WarningText_32, value);
	}

	inline static int32_t get_offset_of_Timer_33() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___Timer_33)); }
	inline float get_Timer_33() const { return ___Timer_33; }
	inline float* get_address_of_Timer_33() { return &___Timer_33; }
	inline void set_Timer_33(float value)
	{
		___Timer_33 = value;
	}

	inline static int32_t get_offset_of_unemployed_34() { return static_cast<int32_t>(offsetof(upgradeButtons_t2191925171, ___unemployed_34)); }
	inline int32_t get_unemployed_34() const { return ___unemployed_34; }
	inline int32_t* get_address_of_unemployed_34() { return &___unemployed_34; }
	inline void set_unemployed_34(int32_t value)
	{
		___unemployed_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
