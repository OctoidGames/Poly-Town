#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfoBar
struct  InfoBar_t1808852957  : public MonoBehaviour_t1158329972
{
public:
	// System.String InfoBar::TileType
	String_t* ___TileType_2;
	// UnityEngine.UI.Text InfoBar::Info
	Text_t356221433 * ___Info_3;

public:
	inline static int32_t get_offset_of_TileType_2() { return static_cast<int32_t>(offsetof(InfoBar_t1808852957, ___TileType_2)); }
	inline String_t* get_TileType_2() const { return ___TileType_2; }
	inline String_t** get_address_of_TileType_2() { return &___TileType_2; }
	inline void set_TileType_2(String_t* value)
	{
		___TileType_2 = value;
		Il2CppCodeGenWriteBarrier(&___TileType_2, value);
	}

	inline static int32_t get_offset_of_Info_3() { return static_cast<int32_t>(offsetof(InfoBar_t1808852957, ___Info_3)); }
	inline Text_t356221433 * get_Info_3() const { return ___Info_3; }
	inline Text_t356221433 ** get_address_of_Info_3() { return &___Info_3; }
	inline void set_Info_3(Text_t356221433 * value)
	{
		___Info_3 = value;
		Il2CppCodeGenWriteBarrier(&___Info_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
