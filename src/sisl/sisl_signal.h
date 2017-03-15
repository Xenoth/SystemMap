/*<===========================================================
LIB  : SISL
version : 2.0
DEV : SOTON "Asphox" Dylan
Date : 15/03/2017
<================================================================*/



#ifndef SISL_SIGNAL_H
#define SISL_SIGNAL_H

#include "sisl_abs.h"

namespace sisl
{
    template<typename ...Types>
    class Signal : public __ABS__sisl<Types...>
    {
        private:
                std::unordered_multimap<__ABS__sisl<Types...>*,bool> list_sisl;
                void exec(void* sender, Types... param){ emit(param...); }

        public:

                Signal(void* sender = nullptr);

                bool unique_connect(__ABS__sisl<Types...>& slot);
                bool connect(__ABS__sisl<Types...>& slot);

                void disconnect(__ABS__sisl<Types...>& slot);
                void disconnect_all();

                void emit(Types... param);
                void operator()(Types... param);

                ~Signal();

    };
}

#ifndef SISL_SIGNAL_TPP
#define SISL_SIGNAL_TPP
#include "sisl_signal.tpp"
#endif

#endif
