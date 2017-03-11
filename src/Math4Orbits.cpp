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
    std::cout << "orbitingBodyPos.x-orbitedBodyPos.x = " << orbitingBodyPos.x-orbitedBodyPos.x << std::endl;
    double r = std::acos((orbitingBodyPos.x-orbitedBodyPos.x)/calculateDistance(orbitedBodyPos, orbitingBodyPos));

    if(orbitingBodyPos.y < orbitedBodyPos.y)
        r = -r;
    std::cout << "R = " << r << std::endl;
    return r;
}

sf::Vector2<double> calculateAccelerationForce(double orbitedBodyMass, double orbitingBodyMass, double distance, double angle) {
    double GField = (-G * orbitedBodyMass / std::pow(distance, 2));

    std::cout << "\t\tGField = " << GField << std::endl;

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


