#ifndef SISL_SLOT_H
#define SISL_SLOT_H

#include "sisl_signal.h"

namespace sisl
{

    template<typename ...Types>
    class Slot
    {
        friend class Signal<Types...>;

        private:
            void* sender;
            bool sleep;
            std::function<void(Types...)> fct;
            std::map<Signal<Types...>*,bool> connectors;
            void exec(void* sender, Types... param);

        public:

            template <typename OBJ,typename FCT>
            Slot(OBJ obj,FCT fct);
            template <typename FCT>
            Slot(FCT fct);

            void sleeping(bool);

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
