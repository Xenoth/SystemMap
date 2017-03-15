/*<===========================================================
LIB  : SISL
version : 2.0
DEV : SOTON "Asphox" Dylan
Date : 15/03/2017
<================================================================*/


namespace sisl
{
template<typename ...Types>
Signal<Types...>::Signal(void* sender) : __ABS__sisl<Types...>()
{
    this->sender = sender;
}

template<typename ...Types>
bool Signal<Types...>::connect( __ABS__sisl<Types...>& entity)
{
    const auto it = list_sisl.find(&entity);
    if( (it != list_sisl.end() && it->second != true ) || (it == list_sisl.end()) )
    {
        list_sisl.insert({&entity,false});
        entity.connectors.push_back(this);
        return true;
    }
    return false;
}



template<typename ...Types>
bool Signal<Types...>::unique_connect(__ABS__sisl<Types...>& entity)
{
    if(list_sisl.find(&entity) != list_sisl.end())
        return false;

    list_sisl.insert({&entity,true});
    entity.connectors.push_back(this);
    return true;
}


template<typename ...Types>
void Signal<Types...>::disconnect(__ABS__sisl<Types...>& slot)
{
    list_sisl.erase(&slot);
}


template<typename ...Types>
void Signal<Types...>::disconnect_all()
{
    list_sisl.clear();
}

template<typename ...Types>
void Signal<Types...>::emit(Types... param)
{   if(!this->sleeping_mode)
    {
        for(const auto& it : list_sisl)
            it.first->exec(__ABS__sisl<Types...>::sender,param...);
    }
}

template<typename ...Types>
void Signal<Types...>::operator()(Types... param)
{
    emit(param...);
}

template<typename ...Types>
Signal<Types...>::~Signal()
{
    for(unsigned int i=0;i<__ABS__sisl<Types...>::connectors.size();i++)
        __ABS__sisl<Types...>::connectors[i]->disconnect(*this);
    for(const auto& it : list_sisl)
    {
        for(unsigned int i=0;i<it.first->__ABS__sisl<Types...>::connectors.size();i++)
        {
            if(it.first->__ABS__sisl<Types...>::connectors[i] == this)
                it.first->__ABS__sisl<Types...>::connectors.erase(it.first->__ABS__sisl<Types...>::connectors.begin()+i);
        }
    }
}
}
