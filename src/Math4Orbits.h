//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_MATH4ORBITS_H
#define SYSTEMMAP_MATH4ORBITS_H

#include <cmath>
#include <SFML/System/Vector2.hpp>

const float g = 6.67408;

double calculateDistance(sf::Vector2f to, sf::Vector2f from);

double calculateAccelerationForce(double orbitedBodyMass, double orbitingBodyMass, double distance);

sf::Vector2f accelerationOnVelocity(double acceleration, sf::Vector2f velocity, double T);

sf::Vector2f velocityOnPosition(sf::Vector2f Velocity, sf::Vector2f position, double T);

#endif //SYSTEMMAP_MATH4ORBITS_H
