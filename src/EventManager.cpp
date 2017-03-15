/*=================================
EventManager for SFML with sisl
dev : SOTON "Asphox" Dylan
date : 15/03/2017
version : 0.5
===================================*/


#include "EventManager.h"

EventsManager::EventsManager(sf::Window* ptr_window)
{
    this->ptr_window = ptr_window;
}

void EventsManager::catchEvents()
{
    while(ptr_window->pollEvent(event))
    {
        switch(event.type)
        {
            default : break;
            case sf::Event::KeyPressed :
                _parse_keys_pressed();
                break;
            case sf::Event::KeyReleased :
                _parse_keys_released();
                break;
            case sf::Event::Closed :
                Closed.emit();
                break;
            case sf::Event::Resized :
                Resized.emit(sf::Vector2<int>(event.size.width,event.size.height));
                break;
            case sf::Event::LostFocus :
                LostFocus.emit();
                break;
            case sf::Event::GainedFocus :
                GainedFocus.emit();
                break;
            case sf::Event::MouseWheelScrolled :
                MouseWheelScrolled.emit(event.mouseWheelScroll.delta,sf::Vector2<int>(event.mouseWheelScroll.x,event.mouseWheelScroll.y));
                break;
            case sf::Event::MouseButtonPressed :
                _parse_mouse_pressed();
                break;
            case sf::Event::MouseButtonReleased :
                _parse_mouse_released();
                break;
            case sf::Event::MouseMoved :
                MouseMoved.emit(sf::Vector2<int>(event.mouseMove.x,event.mouseMove.y));
                break;
        }
    }
}

void EventsManager::_parse_keys_pressed()
{
    switch(event.key.code)
    {
        default : break;
        /*======= letters =========*/
        case sf::Keyboard::A : A_pressed.emit(); break;
        case sf::Keyboard::B : B_pressed.emit(); break;
        case sf::Keyboard::C : C_pressed.emit(); break;
        case sf::Keyboard::D : D_pressed.emit(); break;
        case sf::Keyboard::E : E_pressed.emit(); break;
        case sf::Keyboard::F : F_pressed.emit(); break;
        case sf::Keyboard::G : G_pressed.emit(); break;
        case sf::Keyboard::H : H_pressed.emit(); break;
        case sf::Keyboard::I : I_pressed.emit(); break;
        case sf::Keyboard::J : J_pressed.emit(); break;
        case sf::Keyboard::K : K_pressed.emit(); break;
        case sf::Keyboard::L : L_pressed.emit(); break;
        case sf::Keyboard::M : M_pressed.emit(); break;
        case sf::Keyboard::N : N_pressed.emit(); break;
        case sf::Keyboard::O : O_pressed.emit(); break;
        case sf::Keyboard::P : P_pressed.emit(); break;
        case sf::Keyboard::Q : Q_pressed.emit(); break;
        case sf::Keyboard::R : R_pressed.emit(); break;
        case sf::Keyboard::S : S_pressed.emit(); break;
        case sf::Keyboard::T : T_pressed.emit(); break;
        case sf::Keyboard::U : U_pressed.emit(); break;
        case sf::Keyboard::V : V_pressed.emit(); break;
        case sf::Keyboard::W : W_pressed.emit(); break;
        case sf::Keyboard::X : X_pressed.emit(); break;
        case sf::Keyboard::Y : Y_pressed.emit(); break;
        case sf::Keyboard::Z : Z_pressed.emit(); break;

        /*======== numeric pad =======*/
        case sf::Keyboard::Num0 : Num0_pressed.emit(); break;
        case sf::Keyboard::Num1 : Num1_pressed.emit(); break;
        case sf::Keyboard::Num2 : Num2_pressed.emit(); break;
        case sf::Keyboard::Num3 : Num3_pressed.emit(); break;
        case sf::Keyboard::Num4 : Num4_pressed.emit(); break;
        case sf::Keyboard::Num5 : Num5_pressed.emit(); break;
        case sf::Keyboard::Num6 : Num6_pressed.emit(); break;
        case sf::Keyboard::Num7 : Num7_pressed.emit(); break;
        case sf::Keyboard::Num8 : Num8_pressed.emit(); break;
        case sf::Keyboard::Num9 : Num9_pressed.emit(); break;

        /*======== functions =========*/
        case sf::Keyboard::F1 : F1_pressed.emit(); break;
        case sf::Keyboard::F2 : F2_pressed.emit(); break;
        case sf::Keyboard::F3 : F3_pressed.emit(); break;
        case sf::Keyboard::F4 : F4_pressed.emit(); break;
        case sf::Keyboard::F5 : F5_pressed.emit(); break;
        case sf::Keyboard::F6 : F6_pressed.emit(); break;
        case sf::Keyboard::F7 : F7_pressed.emit(); break;
        case sf::Keyboard::F8 : F8_pressed.emit(); break;
        case sf::Keyboard::F9 : F9_pressed.emit(); break;
        case sf::Keyboard::F10 : F10_pressed.emit(); break;
        case sf::Keyboard::F11 : F11_pressed.emit(); break;
        case sf::Keyboard::F12 : F12_pressed.emit(); break;
        case sf::Keyboard::F13 : F13_pressed.emit(); break;
        case sf::Keyboard::F14 : F14_pressed.emit(); break;
        case sf::Keyboard::F15 : F15_pressed.emit(); break;

        /* ======= system ====== */
        case sf::Keyboard::Return : Return_pressed.emit(); break;
        case sf::Keyboard::Space : Space_pressed.emit(); break;
        case sf::Keyboard::BackSpace : BackSpace_pressed.emit(); break;
        case sf::Keyboard::Tab : Tab_pressed.emit(); break;
        case sf::Keyboard::Escape : Escape_pressed.emit(); break;

        /* ====== arrows ====== */
        case sf::Keyboard::Left : Left_pressed.emit(); break;
        case sf::Keyboard::Right : Right_pressed.emit(); break;
        case sf::Keyboard::Up : Up_pressed.emit(); break;
        case sf::Keyboard::Down : Down_pressed.emit(); break;

    }

}

void EventsManager::_parse_keys_released()
{
    switch(event.key.code)
    {
        default : break;
        /*======= letters =========*/
        case sf::Keyboard::A : A_released.emit(); break;
        case sf::Keyboard::B : B_released.emit(); break;
        case sf::Keyboard::C : C_released.emit(); break;
        case sf::Keyboard::D : D_released.emit(); break;
        case sf::Keyboard::E : E_released.emit(); break;
        case sf::Keyboard::F : F_released.emit(); break;
        case sf::Keyboard::G : G_released.emit(); break;
        case sf::Keyboard::H : H_released.emit(); break;
        case sf::Keyboard::I : I_released.emit(); break;
        case sf::Keyboard::J : J_released.emit(); break;
        case sf::Keyboard::K : K_released.emit(); break;
        case sf::Keyboard::L : L_released.emit(); break;
        case sf::Keyboard::M : M_released.emit(); break;
        case sf::Keyboard::N : N_released.emit(); break;
        case sf::Keyboard::O : O_released.emit(); break;
        case sf::Keyboard::P : P_released.emit(); break;
        case sf::Keyboard::Q : Q_released.emit(); break;
        case sf::Keyboard::R : R_released.emit(); break;
        case sf::Keyboard::S : S_released.emit(); break;
        case sf::Keyboard::T : T_released.emit(); break;
        case sf::Keyboard::U : U_released.emit(); break;
        case sf::Keyboard::V : V_released.emit(); break;
        case sf::Keyboard::W : W_released.emit(); break;
        case sf::Keyboard::X : X_released.emit(); break;
        case sf::Keyboard::Y : Y_released.emit(); break;
        case sf::Keyboard::Z : Z_released.emit(); break;

        /*======== numeric pad =======*/
        case sf::Keyboard::Num0 : Num0_released.emit(); break;
        case sf::Keyboard::Num1 : Num1_released.emit(); break;
        case sf::Keyboard::Num2 : Num2_released.emit(); break;
        case sf::Keyboard::Num3 : Num3_released.emit(); break;
        case sf::Keyboard::Num4 : Num4_released.emit(); break;
        case sf::Keyboard::Num5 : Num5_released.emit(); break;
        case sf::Keyboard::Num6 : Num6_released.emit(); break;
        case sf::Keyboard::Num7 : Num7_released.emit(); break;
        case sf::Keyboard::Num8 : Num8_released.emit(); break;
        case sf::Keyboard::Num9 : Num9_released.emit(); break;

        /*======== functions =========*/
        case sf::Keyboard::F1 : F1_released.emit(); break;
        case sf::Keyboard::F2 : F2_released.emit(); break;
        case sf::Keyboard::F3 : F3_released.emit(); break;
        case sf::Keyboard::F4 : F4_released.emit(); break;
        case sf::Keyboard::F5 : F5_released.emit(); break;
        case sf::Keyboard::F6 : F6_released.emit(); break;
        case sf::Keyboard::F7 : F7_released.emit(); break;
        case sf::Keyboard::F8 : F8_released.emit(); break;
        case sf::Keyboard::F9 : F9_released.emit(); break;
        case sf::Keyboard::F10 : F10_released.emit(); break;
        case sf::Keyboard::F11 : F11_released.emit(); break;
        case sf::Keyboard::F12 : F12_released.emit(); break;
        case sf::Keyboard::F13 : F13_released.emit(); break;
        case sf::Keyboard::F14 : F14_released.emit(); break;
        case sf::Keyboard::F15 : F15_released.emit(); break;

        /* ======= system ====== */
        case sf::Keyboard::Return : Return_released.emit(); break;
        case sf::Keyboard::Space : Space_released.emit(); break;
        case sf::Keyboard::BackSpace : BackSpace_released.emit(); break;
        case sf::Keyboard::Tab : Tab_released.emit(); break;
        case sf::Keyboard::Escape : Escape_released.emit(); break;

        /* ====== arrows ====== */
        case sf::Keyboard::Left : Left_released.emit(); break;
        case sf::Keyboard::Right : Right_released.emit(); break;
        case sf::Keyboard::Up : Up_released.emit(); break;
        case sf::Keyboard::Down : Down_released.emit(); break;

    }
}

void EventsManager::_parse_mouse_pressed()
{
    switch(event.mouseButton.button)
    {
        default : break;
        case sf::Mouse::Right : MouseRightButtonPressed.emit(sf::Vector2<int>(event.mouseButton.x,event.mouseButton.y)); break;
        case sf::Mouse::Left : MouseLeftButtonPressed.emit(sf::Vector2<int>(event.mouseButton.x,event.mouseButton.y)); break;

    }
}

void EventsManager::_parse_mouse_released()
{
    switch(event.mouseButton.button)
    {
        default : break;
        case sf::Mouse::Right : MouseRightButtonReleased.emit(sf::Vector2<int>(event.mouseButton.x,event.mouseButton.y)); break;
        case sf::Mouse::Left : MouseLeftButtonReleased.emit(sf::Vector2<int>(event.mouseButton.x,event.mouseButton.y)); break;

    }
}
