//
// Created by xenoth on 11/03/17.
//

#include "Planet.h"

Planet::Planet(const std::string &name, double mass, double radius, const sf::Vector2f &position,
               const sf::Vector2f &velocity, const PlanetType &planetType) : AbstractStellarBody(name, mass, radius,
                                                                                                 position, velocity),
                                                                             planetType(planetType) {}
