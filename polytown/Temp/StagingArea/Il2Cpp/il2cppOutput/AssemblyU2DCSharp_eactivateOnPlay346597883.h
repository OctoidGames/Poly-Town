#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// eactivateOnPlay
struct  eactivateOnPlay_t346597883  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject eactivateOnPlay::Island
	GameObject_t1756533147 * ___Island_2;

public:
	inline static int32_t get_offset_of_Island_2() { return static_cast<int32_t>(offsetof(eactivateOnPlay_t346597883, ___Island_2)); }
	inline GameObject_t1756533147 * get_Island_2() const { return ___Island_2; }
	inline GameObject_t1756533147 ** get_address_of_Island_2() { return &___Island_2; }
	inline void set_Island_2(GameObject_t1756533147 * value)
	{
		___Island_2 = value;
		Il2CppCodeGenWriteBarrier(&___Island_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
