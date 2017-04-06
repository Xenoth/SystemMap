/*<===========================================================
LIB  : SISL
version : 2.5
DEV : SOTON "Asphox" Dylan
Date : 15/03/2017
<================================================================*/

#if __cplusplus <= 199711L

#error <!><!><!><!><!><!>COMPILER MUST USE C++11 TO USE THIS CODE<!><!><!><!><!><!>

#else

#ifndef SISL_H
#define SISL_H

#include <unordered_map>
#include <map>
#include <functional>
#include <iostream>

#define SLOT(name,obj,fct,...) sisl::Slot<__VA_ARGS__> name = sisl::Slot<__VA_ARGS__>(this,&obj::fct)
#define EXT_SLOT(name,fct,...) sisl::Slot<__VA_ARGS__> name = sisl::Slot<__VA_ARGS__>(&fct)
#define AUTO_SLOT(name,lambda_exp,...) sisl::Slot<__VA_ARGS__> name = sisl::Slot<__VA_ARGS__>(lambda_exp)
#define SIGNAL(name,...) sisl::Signal<__VA_ARGS__> name = sisl::Signal<__VA_ARGS__>(this)
#define EXT_SIGNAL(name,...) sisl::Signal<__VA_ARGS__> name = sisl::Signal<__VA_ARGS__>()

#include "sisl_slot.h"
#include "sisl_signal.h"


#endif // SISL_H

#endif // __cplusplus
