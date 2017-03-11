//
// Created by xenoth on 11/03/17.
//

#include "Star.h"

Star::Star(const std::string &name, double mass, double radius, const sf::Vector2f &position,
           const sf::Vector2f &velocity, const StarType &starType) : AbstractStellarBody(name, mass, radius, position,
                                                                                         velocity),
                                                                     starType(starType) {}

