/*<===========================================================
LIB  : SISL
version : 2.0
DEV : SOTON "Asphox" Dylan
Date : 15/03/2017
<================================================================*/


namespace sisl
{
template<typename ...Types>
Signal<Types...>::Signal(void* sender)
{
    this->sender = sender;
}

template<typename ...Types>
bool Signal<Types...>::connect(Slot<Types...>& entity)
{
    const auto it = list_sisl.find(&entity);
    if( (it != list_sisl.end() && it->second != true ) || (it == list_sisl.end()) )
    {
        list_sisl.insert({&entity,false});
        entity.connectors.insert({this,false});
        return true;
    }
    return false;
}
template<typename ...Types>
bool Signal<Types...>::operator<<(Slot<Types...>& entity)
{
    return connect(entity);
}


template<typename ...Types>
bool Signal<Types...>::unique_connect(Slot<Types...>& entity)
{
    if(list_sisl.find(&entity) != list_sisl.end())
        return false;

    list_sisl.insert({&entity,true});
    entity.connectors.insert({this,false});
    return true;
}
template<typename ...Types>
bool Signal<Types...>::operator<( Slot<Types...>& entity)
{
    return unique_connect(entity);
}


template<typename ...Types>
void Signal<Types...>::disconnect(Slot<Types...>& slot)
{
    const auto& it = list_sisl.find(&slot);
    if(it != list_sisl.end())
    {
        it->first->connectors.erase(this);
        list_sisl.erase(&slot);
    }
}


template<typename ...Types>
void Signal<Types...>::disconnect_all()
{
    for(const auto& it : list_sisl)
    {
        it.first->connectors.erase(this);
    }
    list_sisl.clear();
}

template<typename ...Types>
void Signal<Types...>::emit(Types... param)
{
    for(const auto& it : list_sisl)
        it.first->exec(sender,param...);
}

template<typename ...Types>
void Signal<Types...>::operator()(Types... param)
{
    emit(param...);
}

template<typename ...Types>
Signal<Types...>::~Signal()
{
     disconnect_all();
}
}
