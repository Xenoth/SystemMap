/*=================================
EventManager for SFML with sisl
dev : SOTON "Asphox" Dylan
date : 15/03/2017
version : 0.5
===================================*/


#ifndef EVENTSMANAGER_H
#define EVENTSMANAGER_H

#include "sisl/sisl.h"
#include <SFML/Graphics.hpp>


class EventsManager
{
    private:
         sf::Window* ptr_window;
         sf::Event event;

         void _parse_keys_pressed();
         void _parse_keys_released();
         void _parse_mouse_pressed();
         void _parse_mouse_released();

    public:
        EventsManager(sf::Window* ptr_window);
        void catchEvents(); // ~= pollEvent

        /*================================
                 keys events
        ==================================*/

            /*====== Letters =====*/
            SIGNAL(A_pressed);SIGNAL(A_released);
            SIGNAL(B_pressed);SIGNAL(B_released);
            SIGNAL(C_pressed);SIGNAL(C_released);
            SIGNAL(D_pressed);SIGNAL(D_released);
            SIGNAL(E_pressed);SIGNAL(E_released);
            SIGNAL(F_pressed);SIGNAL(F_released);
            SIGNAL(G_pressed);SIGNAL(G_released);
            SIGNAL(H_pressed);SIGNAL(H_released);
            SIGNAL(I_pressed);SIGNAL(I_released);
            SIGNAL(J_pressed);SIGNAL(J_released);
            SIGNAL(K_pressed);SIGNAL(K_released);
            SIGNAL(L_pressed);SIGNAL(L_released);
            SIGNAL(M_pressed);SIGNAL(M_released);
            SIGNAL(N_pressed);SIGNAL(N_released);
            SIGNAL(O_pressed);SIGNAL(O_released);
            SIGNAL(P_pressed);SIGNAL(P_released);
            SIGNAL(Q_pressed);SIGNAL(Q_released);
            SIGNAL(R_pressed);SIGNAL(R_released);
            SIGNAL(S_pressed);SIGNAL(S_released);
            SIGNAL(T_pressed);SIGNAL(T_released);
            SIGNAL(U_pressed);SIGNAL(U_released);
            SIGNAL(V_pressed);SIGNAL(V_released);
            SIGNAL(W_pressed);SIGNAL(W_released);
            SIGNAL(X_pressed);SIGNAL(X_released);
            SIGNAL(Y_pressed);SIGNAL(Y_released);
            SIGNAL(Z_pressed);SIGNAL(Z_released);

            /*===== numeric pad =====*/
            SIGNAL(Num0_pressed);SIGNAL(Num0_released);
            SIGNAL(Num1_pressed);SIGNAL(Num1_released);
            SIGNAL(Num2_pressed);SIGNAL(Num2_released);
            SIGNAL(Num3_pressed);SIGNAL(Num3_released);
            SIGNAL(Num4_pressed);SIGNAL(Num4_released);
            SIGNAL(Num5_pressed);SIGNAL(Num5_released);
            SIGNAL(Num6_pressed);SIGNAL(Num6_released);
            SIGNAL(Num7_pressed);SIGNAL(Num7_released);
            SIGNAL(Num8_pressed);SIGNAL(Num8_released);
            SIGNAL(Num9_pressed);SIGNAL(Num9_released);

            /*===== Functions =====*/
            SIGNAL(F1_pressed);SIGNAL(F1_released);
            SIGNAL(F2_pressed);SIGNAL(F2_released);
            SIGNAL(F3_pressed);SIGNAL(F3_released);
            SIGNAL(F4_pressed);SIGNAL(F4_released);
            SIGNAL(F5_pressed);SIGNAL(F5_released);
            SIGNAL(F6_pressed);SIGNAL(F6_released);
            SIGNAL(F7_pressed);SIGNAL(F7_released);
            SIGNAL(F8_pressed);SIGNAL(F8_released);
            SIGNAL(F9_pressed);SIGNAL(F9_released);
            SIGNAL(F10_pressed);SIGNAL(F10_released);
            SIGNAL(F11_pressed);SIGNAL(F11_released);
            SIGNAL(F12_pressed);SIGNAL(F12_released);
            SIGNAL(F13_pressed);SIGNAL(F13_released);
            SIGNAL(F14_pressed);SIGNAL(F14_released);
            SIGNAL(F15_pressed);SIGNAL(F15_released);

            /*===== system =====*/
            SIGNAL(Return_pressed);SIGNAL(Return_released);
            SIGNAL(Space_pressed);SIGNAL(Space_released);
            SIGNAL(BackSpace_pressed);SIGNAL(BackSpace_released);
            SIGNAL(Tab_pressed);SIGNAL(Tab_released);
            SIGNAL(Escape_pressed);SIGNAL(Escape_released);

            /*===== arrows =====*/
            SIGNAL(Left_pressed);SIGNAL(Left_released);
            SIGNAL(Right_pressed);SIGNAL(Right_released);
            SIGNAL(Up_pressed);SIGNAL(Up_released);
            SIGNAL(Down_pressed);SIGNAL(Down_released);


            /* ====== window Event ====== */
            SIGNAL(Closed);
            SIGNAL(Resized,sf::Vector2<int>);
            SIGNAL(LostFocus);
            SIGNAL(GainedFocus);

            /* ====== mouse ====== */
            SIGNAL(MouseWheelScrolled,int,sf::Vector2<int>);
            SIGNAL(MouseMoved,sf::Vector2<int>);
            SIGNAL(MouseRightButtonPressed,sf::Vector2<int>);
            SIGNAL(MouseLeftButtonPressed,sf::Vector2<int>);
            SIGNAL(MouseRightButtonReleased,sf::Vector2<int>);
            SIGNAL(MouseLeftButtonReleased,sf::Vector2<int>);

};

#endif // EVENTSMANAGER_H
