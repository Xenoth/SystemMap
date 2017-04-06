/*<===========================================================
LIB  : SISL
version : 2.0
DEV : SOTON "Asphox" Dylan
Date : 15/03/2017
<================================================================*/

#include "sisl_signal.h"

namespace sisl
{

template<typename ...Types>
void Slot<Types...>::exec(void* sender, Types... param)
{
    if(sleep)return;

        this->sender = sender;
        try
        {
            fct(param...);
        }
        catch(const std::exception& e)
        {
            std::cerr << std::endl << "[SISL] An exception occured in the slot : " << this << ", but it's not fatal" << std::endl << "\tinfos : " << e.what() << std::endl;
        }
        this->sender = nullptr;
}

template<typename ...Types>
template <typename OBJ,typename FCT>
Slot<Types...>::Slot(OBJ obj,FCT fct)
{
    sleep = false;
    this->fct = [fct,obj](Types... T){ (obj->*fct)(T...); };
}

template<typename ...Types>
template <typename FCT>
Slot<Types...>::Slot(FCT fct)
{
    sleep = false;
    this->fct = [fct](Types... T){  fct(T...); };
}

template<typename ...Types>
Slot<Types...>::~Slot()
{
     for(const auto& it : connectors)
        it.first->disconnect(*this);
}

template<typename ...Types>
template<typename SENDERTYPE>
SENDERTYPE sisl::Slot<Types...>::getSender() const
{
    return static_cast<SENDERTYPE>(sender);
}

template<typename ...Types>
void Slot<Types...>::operator()(Types ... param)
{
    exec(nullptr,param...);
}
template<typename ...Types>
void Slot<Types...>::sleeping(bool sleep)
{
    this->sleep = sleep;
}

}
