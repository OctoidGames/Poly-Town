#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NextTurn
struct  NextTurn_t1982628106  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button NextTurn::NextTurnBtn
	Button_t2872111280 * ___NextTurnBtn_2;
	// System.Int32 NextTurn::maxTurns
	int32_t ___maxTurns_3;

public:
	inline static int32_t get_offset_of_NextTurnBtn_2() { return static_cast<int32_t>(offsetof(NextTurn_t1982628106, ___NextTurnBtn_2)); }
	inline Button_t2872111280 * get_NextTurnBtn_2() const { return ___NextTurnBtn_2; }
	inline Button_t2872111280 ** get_address_of_NextTurnBtn_2() { return &___NextTurnBtn_2; }
	inline void set_NextTurnBtn_2(Button_t2872111280 * value)
	{
		___NextTurnBtn_2 = value;
		Il2CppCodeGenWriteBarrier(&___NextTurnBtn_2, value);
	}

	inline static int32_t get_offset_of_maxTurns_3() { return static_cast<int32_t>(offsetof(NextTurn_t1982628106, ___maxTurns_3)); }
	inline int32_t get_maxTurns_3() const { return ___maxTurns_3; }
	inline int32_t* get_address_of_maxTurns_3() { return &___maxTurns_3; }
	inline void set_maxTurns_3(int32_t value)
	{
		___maxTurns_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
