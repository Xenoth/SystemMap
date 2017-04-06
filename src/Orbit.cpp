#include "Orbit.h"
#include "StellarBody.h"

Orbit::Orbit(StellarBody* orbited, StellarBody* orbiting)
{
    this->orbiting = orbiting;
    this->orbited = orbited;
    _redefine_areolar_velocity_constant();
    orbit_form.setFillColor(sf::Color::Transparent);
    setPrecision();
    setColor();
    setThickness();
    update();
}

void Orbit::_redefine_areolar_velocity_constant()
{
    V = sqrt(orbiting->getVelocity().x*orbiting->getVelocity().x + orbiting->getVelocity().y*orbiting->getVelocity().y);
    H = calculateDistance(orbited->getPosition(),orbiting->getPosition())   *V;
    if(orbited->getPosition().x > orbiting->getPosition().x)
        reversed = 1;
    else
        reversed = -1;
}

void Orbit::setOrbitedBody(StellarBody* orbited)
{
    this->orbited = orbited;
    _redefine_areolar_velocity_constant();
}

void Orbit::update()
{
    orbit_form.setPointCount(precision);

    step = 2*pi/precision;

    double distance = calculateDistance(orbited->getPosition(),orbiting->getPosition());
    V = sqrt(orbiting->getVelocity().x*orbiting->getVelocity().x + orbiting->getVelocity().y*orbiting->getVelocity().y); //velocity abs
    K = G*orbited->getMass(); //Standard gravitational parameter : G*M_orbited
    Em = 0.5*V*V - K/distance; //massic Mechanical energy
    e = sqrt( 1 + (2*Em*H*H)/(K*K)); //Eccentricity

    double angle = 0;
    sf::Vector2f graph_position;

    if( Em > -(K*K)/(2*H*H) && Em < 0)   //if orbit is elliptic
    {
        for(unsigned int i=0; i < 100; i++)
        {
            angle = i*step;
            double r = 1/( (K/(H*H)*(1+e*cos(angle))));
            orbit_form.setPoint(i,convert_position_physic_to_graphic(sf::Vector2<double>(reversed*r*cos(angle),r*sin(angle))));
        }
    }
}

