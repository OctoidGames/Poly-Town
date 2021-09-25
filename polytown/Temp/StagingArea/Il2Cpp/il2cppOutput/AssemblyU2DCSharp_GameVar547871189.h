#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String[][]
struct StringU5BU5DU5BU5D_t2190260861;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameVar
struct  GameVar_t547871189  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct GameVar_t547871189_StaticFields
{
public:
	// System.Boolean GameVar::LoadGame
	bool ___LoadGame_2;
	// UnityEngine.Vector2 GameVar::TouchDist
	Vector2_t2243707579  ___TouchDist_3;
	// System.String[][] GameVar::MapArray
	StringU5BU5DU5BU5D_t2190260861* ___MapArray_4;
	// System.Int32 GameVar::Length
	int32_t ___Length_5;
	// System.Int32 GameVar::Width
	int32_t ___Width_6;
	// System.Boolean GameVar::MouseOnPanel
	bool ___MouseOnPanel_7;
	// UnityEngine.Vector2 GameVar::Selected
	Vector2_t2243707579  ___Selected_8;
	// System.Boolean GameVar::TileSelected
	bool ___TileSelected_9;
	// System.String GameVar::TileType
	String_t* ___TileType_10;
	// System.Int32 GameVar::population
	int32_t ___population_11;
	// System.Int32 GameVar::money
	int32_t ___money_12;
	// System.Int32 GameVar::income
	int32_t ___income_13;
	// System.Int32 GameVar::score
	int32_t ___score_14;
	// System.Int32 GameVar::Turn
	int32_t ___Turn_15;
	// System.Int32 GameVar::MaxTurns
	int32_t ___MaxTurns_16;
	// System.Int32 GameVar::JobsOpen
	int32_t ___JobsOpen_17;

public:
	inline static int32_t get_offset_of_LoadGame_2() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___LoadGame_2)); }
	inline bool get_LoadGame_2() const { return ___LoadGame_2; }
	inline bool* get_address_of_LoadGame_2() { return &___LoadGame_2; }
	inline void set_LoadGame_2(bool value)
	{
		___LoadGame_2 = value;
	}

	inline static int32_t get_offset_of_TouchDist_3() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___TouchDist_3)); }
	inline Vector2_t2243707579  get_TouchDist_3() const { return ___TouchDist_3; }
	inline Vector2_t2243707579 * get_address_of_TouchDist_3() { return &___TouchDist_3; }
	inline void set_TouchDist_3(Vector2_t2243707579  value)
	{
		___TouchDist_3 = value;
	}

	inline static int32_t get_offset_of_MapArray_4() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___MapArray_4)); }
	inline StringU5BU5DU5BU5D_t2190260861* get_MapArray_4() const { return ___MapArray_4; }
	inline StringU5BU5DU5BU5D_t2190260861** get_address_of_MapArray_4() { return &___MapArray_4; }
	inline void set_MapArray_4(StringU5BU5DU5BU5D_t2190260861* value)
	{
		___MapArray_4 = value;
		Il2CppCodeGenWriteBarrier(&___MapArray_4, value);
	}

	inline static int32_t get_offset_of_Length_5() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___Length_5)); }
	inline int32_t get_Length_5() const { return ___Length_5; }
	inline int32_t* get_address_of_Length_5() { return &___Length_5; }
	inline void set_Length_5(int32_t value)
	{
		___Length_5 = value;
	}

	inline static int32_t get_offset_of_Width_6() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___Width_6)); }
	inline int32_t get_Width_6() const { return ___Width_6; }
	inline int32_t* get_address_of_Width_6() { return &___Width_6; }
	inline void set_Width_6(int32_t value)
	{
		___Width_6 = value;
	}

	inline static int32_t get_offset_of_MouseOnPanel_7() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___MouseOnPanel_7)); }
	inline bool get_MouseOnPanel_7() const { return ___MouseOnPanel_7; }
	inline bool* get_address_of_MouseOnPanel_7() { return &___MouseOnPanel_7; }
	inline void set_MouseOnPanel_7(bool value)
	{
		___MouseOnPanel_7 = value;
	}

	inline static int32_t get_offset_of_Selected_8() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___Selected_8)); }
	inline Vector2_t2243707579  get_Selected_8() const { return ___Selected_8; }
	inline Vector2_t2243707579 * get_address_of_Selected_8() { return &___Selected_8; }
	inline void set_Selected_8(Vector2_t2243707579  value)
	{
		___Selected_8 = value;
	}

	inline static int32_t get_offset_of_TileSelected_9() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___TileSelected_9)); }
	inline bool get_TileSelected_9() const { return ___TileSelected_9; }
	inline bool* get_address_of_TileSelected_9() { return &___TileSelected_9; }
	inline void set_TileSelected_9(bool value)
	{
		___TileSelected_9 = value;
	}

	inline static int32_t get_offset_of_TileType_10() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___TileType_10)); }
	inline String_t* get_TileType_10() const { return ___TileType_10; }
	inline String_t** get_address_of_TileType_10() { return &___TileType_10; }
	inline void set_TileType_10(String_t* value)
	{
		___TileType_10 = value;
		Il2CppCodeGenWriteBarrier(&___TileType_10, value);
	}

	inline static int32_t get_offset_of_population_11() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___population_11)); }
	inline int32_t get_population_11() const { return ___population_11; }
	inline int32_t* get_address_of_population_11() { return &___population_11; }
	inline void set_population_11(int32_t value)
	{
		___population_11 = value;
	}

	inline static int32_t get_offset_of_money_12() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___money_12)); }
	inline int32_t get_money_12() const { return ___money_12; }
	inline int32_t* get_address_of_money_12() { return &___money_12; }
	inline void set_money_12(int32_t value)
	{
		___money_12 = value;
	}

	inline static int32_t get_offset_of_income_13() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___income_13)); }
	inline int32_t get_income_13() const { return ___income_13; }
	inline int32_t* get_address_of_income_13() { return &___income_13; }
	inline void set_income_13(int32_t value)
	{
		___income_13 = value;
	}

	inline static int32_t get_offset_of_score_14() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___score_14)); }
	inline int32_t get_score_14() const { return ___score_14; }
	inline int32_t* get_address_of_score_14() { return &___score_14; }
	inline void set_score_14(int32_t value)
	{
		___score_14 = value;
	}

	inline static int32_t get_offset_of_Turn_15() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___Turn_15)); }
	inline int32_t get_Turn_15() const { return ___Turn_15; }
	inline int32_t* get_address_of_Turn_15() { return &___Turn_15; }
	inline void set_Turn_15(int32_t value)
	{
		___Turn_15 = value;
	}

	inline static int32_t get_offset_of_MaxTurns_16() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___MaxTurns_16)); }
	inline int32_t get_MaxTurns_16() const { return ___MaxTurns_16; }
	inline int32_t* get_address_of_MaxTurns_16() { return &___MaxTurns_16; }
	inline void set_MaxTurns_16(int32_t value)
	{
		___MaxTurns_16 = value;
	}

	inline static int32_t get_offset_of_JobsOpen_17() { return static_cast<int32_t>(offsetof(GameVar_t547871189_StaticFields, ___JobsOpen_17)); }
	inline int32_t get_JobsOpen_17() const { return ___JobsOpen_17; }
	inline int32_t* get_address_of_JobsOpen_17() { return &___JobsOpen_17; }
	inline void set_JobsOpen_17(int32_t value)
	{
		___JobsOpen_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
