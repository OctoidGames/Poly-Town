#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndGame
struct  EndGame_t101703823  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text EndGame::EndGameText
	Text_t356221433 * ___EndGameText_2;
	// UnityEngine.UI.Button EndGame::Exit
	Button_t2872111280 * ___Exit_3;

public:
	inline static int32_t get_offset_of_EndGameText_2() { return static_cast<int32_t>(offsetof(EndGame_t101703823, ___EndGameText_2)); }
	inline Text_t356221433 * get_EndGameText_2() const { return ___EndGameText_2; }
	inline Text_t356221433 ** get_address_of_EndGameText_2() { return &___EndGameText_2; }
	inline void set_EndGameText_2(Text_t356221433 * value)
	{
		___EndGameText_2 = value;
		Il2CppCodeGenWriteBarrier(&___EndGameText_2, value);
	}

	inline static int32_t get_offset_of_Exit_3() { return static_cast<int32_t>(offsetof(EndGame_t101703823, ___Exit_3)); }
	inline Button_t2872111280 * get_Exit_3() const { return ___Exit_3; }
	inline Button_t2872111280 ** get_address_of_Exit_3() { return &___Exit_3; }
	inline void set_Exit_3(Button_t2872111280 * value)
	{
		___Exit_3 = value;
		Il2CppCodeGenWriteBarrier(&___Exit_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
