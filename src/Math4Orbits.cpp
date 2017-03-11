//
// Created by xenoth on 11/03/17.
//

#include "Math4Orbits.h"

double calculateAccelerationForce(double orbitedBodyMass, double orbitingBodyMass, double distance) {
    return -g * orbitedBodyMass * orbitedBodyMass / std::pow(distance, 2);
}

sf::Vector2f accelerationOnVelocity(double acceleration, sf::Vector2f velocity, double T) {
    return sf::Vector2f(velocity.x + T * acceleration, velocity.y + T * acceleration);
}

sf::Vector2f velocityOnPosition(sf::Vector2f velocity, sf::Vector2f position, double T) {
    return sf::Vector2f(position.x + T * velocity.x, position.y + T * velocity.y);
}

double calculateDistance(sf::Vector2f to, sf::Vector2f from) {
    return std::sqrt(((to.x - from.x)*(to.x - from.x) + (to.y - from.y)*(to.y - from.y)));
}
