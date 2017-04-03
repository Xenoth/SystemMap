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
                         const std::string &name, StellarBodyType stellarBodyType, StellarBody* orbited_body)
                                                                                                        : PhysicEntity(mass, radius,
                                                                                                                position, velocity,
                                                                                                                acceleration),
                                                                                                            name(name),
                                                                                                            stellarBodyType(stellarBodyType),
                                                                                                            orbited_body(orbited_body)
{
    if( orbited_body != nullptr )
        orbit = new Orbit(orbited_body->getPosition(),getPosition(),orbited_body->getMass(),calculateDistance(position,orbited_body->getPosition()),velocity);
    else
        orbit = nullptr;
}
