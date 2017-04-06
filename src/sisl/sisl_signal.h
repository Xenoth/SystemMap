/*<===========================================================
LIB  : SISL
version : 2.0
DEV : SOTON "Asphox" Dylan
Date : 15/03/2017
<================================================================*/



#ifndef SISL_SIGNAL_H
#define SISL_SIGNAL_H

namespace sisl
{
    template<typename ...Types>
    class Slot;

    template<typename ...Types>
    class Signal
    {

        private:
                void* sender;
                std::unordered_multimap<Slot<Types...>*,bool> list_sisl;
                void exec(void* sender, Types... param){ emit(param...); }

        public:

                Signal(void* sender = nullptr);

                bool unique_connect(Slot<Types...>& slot);
                bool operator<(Slot<Types...>& slot);

                bool connect(Slot<Types...>& slot);
                bool operator<<(Slot<Types...>& slot);

                void disconnect(Slot<Types...>& slot);
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
