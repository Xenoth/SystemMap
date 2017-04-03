#include "Orbit.h"

Orbit::Orbit(sf::Vector2<double> orbited_position, sf::Vector2<double> orbiting_position,  double orbited_mass, double distance, sf::Vector2<double> velocity)
{
    orbit_form.setFillColor(sf::Color::Transparent);
    orbit_form.setOutlineThickness(2);
    orbit_form.setOutlineColor(sf::Color(255,255,255));
    update(orbited_position,orbiting_position,orbited_mass,distance,velocity);
}

void Orbit::update(sf::Vector2<double> orbited_position, sf::Vector2<double> orbiting_position, double orbited_mass, double distance, sf::Vector2<double> velocity)
{
    orbit_form.setPointCount(100); //1000 = resolution
    char ang = -1;
    if(orbited_position.x > orbiting_position.x)
        ang = 1;
    step = 2*pi/100;
    V = sqrt(velocity.x*velocity.x + velocity.y*velocity.y);
    K = G*orbited_mass;
    H = distance*V;
    Em = 0.5*V*V - K/distance;
    e = sqrt( 1 + (2*Em*H*H)/(K*K));
    double angle = 0;
    sf::Vector2f graph_position;

    if( Em > -(K*K)/(2*H*H) && Em < 0)   //if orbit is elliptic
    {
        for(unsigned int i=0; i < 100; i++)
        {
            angle = i*step;
            double r = 1/( (K/(H*H)*(1+e*cos(angle))));
            orbit_form.setPoint(i,convert_position_physic_to_graphic(sf::Vector2<double>(ang*r*cos(angle),r*sin(angle))));
        }
    }
}

sf::ConvexShape* Orbit::getOrbitForm()
{
    return &orbit_form;
}

