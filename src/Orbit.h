// Asphox //

#ifndef ORBIT_H
#define ORBIT_H
#include "Math4Orbits.h"
#include <SFML/Graphics.hpp>

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
        sf::ConvexShape orbit_form;



    public:
        Orbit(sf::Vector2<double> orbited_position, sf::Vector2<double> orbiting_position,double orbited_mass, double distance, sf::Vector2<double> velocity);
        void update(sf::Vector2<double> orbited_position, sf::Vector2<double> orbiting_position, double orbited_mass, double distance, sf::Vector2<double> velocity);
        sf::ConvexShape* getOrbitForm();
};

#endif // ORBIT_H
