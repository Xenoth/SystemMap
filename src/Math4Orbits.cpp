//
// Created by xenoth on 11/03/17.
//

#include <iostream>
#include "Math4Orbits.h"

double calculateDistance(sf::Vector2<double> to, sf::Vector2<double> from) {
    return std::sqrt((to.x - from.x)*(to.x - from.x) + (to.y - from.y)*(to.y - from.y));
}

double calculateAngle(sf::Vector2<double> orbitedBodyPos, sf::Vector2<double> orbitingBodyPos)
{
    double r = std::acos((orbitingBodyPos.x-orbitedBodyPos.x)/calculateDistance(orbitedBodyPos, orbitingBodyPos));

    if(orbitingBodyPos.y < orbitedBodyPos.y)
        r = -r;
    return r;
}

sf::Vector2<double> calculateAccelerationForce(double orbitedBodyMass, double orbitingBodyMass, double distance, double angle) {
    double GField = (-G * orbitedBodyMass / std::pow(distance, 2));

    sf::Vector2<double> unitaireVector;

    unitaireVector.x = std::cos(angle);
    unitaireVector.y = std::sin(angle);

    sf::Vector2<double> accelerationVector;

    accelerationVector.x = GField * unitaireVector.x;
    accelerationVector.y = GField * unitaireVector.y;

    return accelerationVector;
}

sf::Vector2<double> accelerationOnVelocity(sf::Vector2<double> acceleration, sf::Vector2<double> velocity, double T) {
    return sf::Vector2<double>(velocity.x + T * acceleration.x, velocity.y + T * acceleration.y);
}

sf::Vector2<double> velocityOnPosition(sf::Vector2<double> velocity, sf::Vector2<double> position, double T) {
    return sf::Vector2<double>(position.x + T * velocity.x, position.y + T * velocity.y);
}

sf::Vector2<float> convert_position_physic_to_graphic(sf::Vector2<double> position)
{
    position.x = (position.x/712082085.714)+(700/2);
    position.y = (position.y/712082085.714)+(700/2);

    return (sf::Vector2<float>)position;
}



