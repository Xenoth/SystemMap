//
// Created by xenoth on 11/03/17.
//

#include "AbstractStellarBody.h"

AbstractStellarBody::AbstractStellarBody(const std::string &name, double mass, double radius,
                                         const sf::Vector2f &position, const sf::Vector2f &velocity) : name(name),
                                                                                                       mass(mass),
                                                                                                       radius(radius),
                                                                                                       position(
                                                                                                               position),
                                                                                                       velocity(
                                                                                                               velocity) {}

const std::string &AbstractStellarBody::getName() const {
    return name;
}

double AbstractStellarBody::getMass() const {
    return mass;
}

double AbstractStellarBody::getRadius() const {
    return radius;
}

const sf::Vector2f &AbstractStellarBody::getPosition() const {
    return position;
}

const sf::Vector2f &AbstractStellarBody::getVelocity() const {
    return velocity;
}

void AbstractStellarBody::setPosition(const sf::Vector2f &position) {
    AbstractStellarBody::position = position;
}

void AbstractStellarBody::setVelocity(const sf::Vector2f &velocity) {
    AbstractStellarBody::velocity = velocity;
}
