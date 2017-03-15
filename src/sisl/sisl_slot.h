#ifndef SISL_SLOT_H
#define SISL_SLOT_H

#include "sisl_abs.h"

namespace sisl
{

    template<typename ...Types>
    class Slot : public __ABS__sisl<Types...>
    {

        private:

            std::function<void(Types...)> fct;

            void exec(void* sender, Types... param);

        public:

            template <typename OBJ,typename FCT>
            Slot(OBJ obj,FCT fct);
            template <typename FCT>
            Slot(FCT fct);

            template<typename SENDERTYPE>
            SENDERTYPE getSender() const;

            ~Slot();

            void operator()(Types ... param);

    };

}

#ifndef SISL_SLOT_TPP
#define SISL_SLOT_TPP
#include "sisl_slot.tpp"
#endif

#endif // SISL_SLOT_H
