//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_MATH4ORBITS_H
#define SYSTEMMAP_MATH4ORBITS_H

#include <cmath>
#include <SFML/System/Vector2.hpp>

const double G = (6.67408 * std::pow(10.0, -11.0));
const double pi = 3.14159265358979323846;

double calculateDistance(sf::Vector2<double> to, sf::Vector2<double> from);
double calculateAngle(sf::Vector2<double> orbitedBodyPos, sf::Vector2<double> orbitingBodyPos);

sf::Vector2<double> calculateAccelerationForce(double orbitedBodyMass, double orbitingBodyMass, double distance, double angle);
sf::Vector2<double> accelerationOnVelocity(sf::Vector2<double> acceleration, sf::Vector2<double> velocity, double T);
sf::Vector2<double> velocityOnPosition(sf::Vector2<double> Velocity, sf::Vector2<double> position, double T);

#endif //SYSTEMMAP_MATH4ORBITS_H
