//
// Created by xenoth on 11/03/17.
//

#include "StellarBody.h"



const std::string &StellarBody::getName() const {
    return name;
}

const StellarBodyType &StellarBody::getStellarBodyType() const {
    return stellarBodyType;
}

StellarBody::StellarBody(double mass, double radius, const sf::Vector2<double> &position,
                         const sf::Vector2<double> &velocity, const sf::Vector2<double> &acceleration,
                         const std::string &name, StellarBodyType stellarBodyType) : PhysicEntity(mass, radius,
                                                                                                  position, velocity,
                                                                                                  acceleration),
                                                                                     name(name),
                                                                                     stellarBodyType(stellarBodyType) {}
