#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_t1967201810;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IsMouseOverTouchZone
struct  IsMouseOverTouchZone_t4175780006  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean IsMouseOverTouchZone::BlockedByUI
	bool ___BlockedByUI_2;
	// UnityEngine.EventSystems.EventTrigger IsMouseOverTouchZone::eventTrigger
	EventTrigger_t1967201810 * ___eventTrigger_3;

public:
	inline static int32_t get_offset_of_BlockedByUI_2() { return static_cast<int32_t>(offsetof(IsMouseOverTouchZone_t4175780006, ___BlockedByUI_2)); }
	inline bool get_BlockedByUI_2() const { return ___BlockedByUI_2; }
	inline bool* get_address_of_BlockedByUI_2() { return &___BlockedByUI_2; }
	inline void set_BlockedByUI_2(bool value)
	{
		___BlockedByUI_2 = value;
	}

	inline static int32_t get_offset_of_eventTrigger_3() { return static_cast<int32_t>(offsetof(IsMouseOverTouchZone_t4175780006, ___eventTrigger_3)); }
	inline EventTrigger_t1967201810 * get_eventTrigger_3() const { return ___eventTrigger_3; }
	inline EventTrigger_t1967201810 ** get_address_of_eventTrigger_3() { return &___eventTrigger_3; }
	inline void set_eventTrigger_3(EventTrigger_t1967201810 * value)
	{
		___eventTrigger_3 = value;
		Il2CppCodeGenWriteBarrier(&___eventTrigger_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
