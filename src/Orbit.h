// Asphox //

#ifndef ORBIT_H
#define ORBIT_H

#include "Math4Orbits.h"
#include <SFML/Graphics.hpp>

class StellarBody;

class Orbit
{
    private:
        double K; // standard gravitational parameter  = G*M
        double H; //areolar velocity
        double Em; // massic mecanic energy
        double V; //velocity
        double e; //excentricity
        double step; // orbit tracing angle step
        double theta0; //offset angle
        unsigned short int precision;
        char reversed;
        sf::ConvexShape orbit_form;

        StellarBody* orbited;
        StellarBody* orbiting;

        void _redefine_areolar_velocity_constant();



    public:
        Orbit(StellarBody* orbited, StellarBody* orbiting);
        void setOrbitedBody(StellarBody* orbited);
        inline void setPrecision(unsigned short int precision = 100){ this->precision = precision; }
        inline void setColor(sf::Color color = sf::Color(150,150,0)){ this->orbit_form.setOutlineColor(color); }
        inline void setThickness(unsigned short int thickness = 2){ this->orbit_form.setOutlineThickness(thickness); }
        inline void draw(sf::RenderWindow& window){ window.draw(orbit_form); }
        void update();
};

#endif // ORBIT_H
