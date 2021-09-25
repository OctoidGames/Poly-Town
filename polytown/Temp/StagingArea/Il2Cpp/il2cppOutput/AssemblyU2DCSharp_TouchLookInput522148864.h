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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchLookInput
struct  TouchLookInput_t522148864  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 TouchLookInput::TouchDist
	Vector2_t2243707579  ___TouchDist_2;
	// UnityEngine.Vector2 TouchLookInput::PointerOld
	Vector2_t2243707579  ___PointerOld_3;
	// System.Int32 TouchLookInput::PointerId
	int32_t ___PointerId_4;
	// System.Boolean TouchLookInput::Pressed
	bool ___Pressed_5;

public:
	inline static int32_t get_offset_of_TouchDist_2() { return static_cast<int32_t>(offsetof(TouchLookInput_t522148864, ___TouchDist_2)); }
	inline Vector2_t2243707579  get_TouchDist_2() const { return ___TouchDist_2; }
	inline Vector2_t2243707579 * get_address_of_TouchDist_2() { return &___TouchDist_2; }
	inline void set_TouchDist_2(Vector2_t2243707579  value)
	{
		___TouchDist_2 = value;
	}

	inline static int32_t get_offset_of_PointerOld_3() { return static_cast<int32_t>(offsetof(TouchLookInput_t522148864, ___PointerOld_3)); }
	inline Vector2_t2243707579  get_PointerOld_3() const { return ___PointerOld_3; }
	inline Vector2_t2243707579 * get_address_of_PointerOld_3() { return &___PointerOld_3; }
	inline void set_PointerOld_3(Vector2_t2243707579  value)
	{
		___PointerOld_3 = value;
	}

	inline static int32_t get_offset_of_PointerId_4() { return static_cast<int32_t>(offsetof(TouchLookInput_t522148864, ___PointerId_4)); }
	inline int32_t get_PointerId_4() const { return ___PointerId_4; }
	inline int32_t* get_address_of_PointerId_4() { return &___PointerId_4; }
	inline void set_PointerId_4(int32_t value)
	{
		___PointerId_4 = value;
	}

	inline static int32_t get_offset_of_Pressed_5() { return static_cast<int32_t>(offsetof(TouchLookInput_t522148864, ___Pressed_5)); }
	inline bool get_Pressed_5() const { return ___Pressed_5; }
	inline bool* get_address_of_Pressed_5() { return &___Pressed_5; }
	inline void set_Pressed_5(bool value)
	{
		___Pressed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
