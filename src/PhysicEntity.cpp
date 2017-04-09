//
// Created by xenoth on 11/03/17.
//

#include "PhysicEntity.h"
#include "Math4Orbits.h"


PhysicEntity::PhysicEntity(double mass, double radius, const sf::Vector2<double> &position = sf::Vector2<double>(0,0),
                           const sf::Vector2<double> &velocity = sf::Vector2<double>(0,0), const sf::Vector2<double> &acceleration = sf::Vector2<double>(0,0)) : mass(mass),
                                                                                                           radius(radius),
                                                                                                           position(
                                                                                                                   position),
                                                                                                           velocity(
                                                                                                                   velocity),
                                                                                                           acceleration(
                                                                                                                   acceleration) {}

double PhysicEntity::getMass() const {
    return mass;
}

double PhysicEntity::getRadius() const {
    return radius;
}

const sf::Vector2<double> &PhysicEntity::getPosition() const {
    return position;
}

const sf::Vector2<double> &PhysicEntity::getVelocity() const {
    return velocity;
}

const sf::Vector2<double> &PhysicEntity::getAcceleration() const {
    return acceleration;
}

void PhysicEntity::setPosition(const sf::Vector2<double> &position) {
    PhysicEntity::position = position;
}

void PhysicEntity::setVelocity(const sf::Vector2<double> &velocity) {
    PhysicEntity::velocity = velocity;
}

void PhysicEntity::setAcceleration(const sf::Vector2<double> &acceleration) {
    PhysicEntity::acceleration = acceleration;
}
