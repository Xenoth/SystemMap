/*<===========================================================
LIB  : SISL
version : 2.0
DEV : SOTON "Asphox" Dylan
Date : 15/03/2017
<================================================================*/


#ifndef SISL_ABS_H
#define SISL_ABS_H

#include "sisl.h"
#include <exception>

namespace sisl
{

    template<typename ...Types>
    class __ABS__sisl
    {
        public:
            void* sender;
            bool sleeping_mode;
            std::vector<Signal<Types...>*> connectors;

            __ABS__sisl(){ sleeping_mode = false; sender = nullptr; }
            virtual ~__ABS__sisl(){};
            inline void sleep(bool b){ sleeping_mode = b;}
            inline bool getSleepMode(){ return sleeping_mode; }
            size_t getNbrOfConnectors(){ return connectors.size(); }

            virtual void exec(void* sender, Types... param) = 0;

            void* operator new (size_t sz)
            {
                try
                {
                    throw std::string("[SISL] FATAL ERROR : you're trying to 'new' a signal or a slot, but you can't.");
                }
                catch ( std::string const& e)
                {
                    std::cerr << e << std::endl;
                }
                return new void*;
            }

            void* operator new[] (size_t sz)
            {
                try
                {
                    throw std::string("[SISL] FATAL ERROR : you're trying to 'new[]' a signal or a slot, but you can't.");
                }
                catch ( std::string const& e)
                {
                    std::cerr << e << std::endl;
                }
                return new void*;
            }
    };
}

#endif // SISL_ABS_H
