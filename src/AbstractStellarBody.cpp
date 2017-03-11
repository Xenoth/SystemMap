//
// Created by xenoth on 11/03/17.
//

#include "AbstractStellarBody.h"

AbstractStellarBody::AbstractStellarBody(const std::string &name, double mass, double radius,
                                         const sf::Vector2<double> &position, const sf::Vector2<double> &velocity) : name(name),
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

const sf::Vector2<double> &AbstractStellarBody::getPosition() const {
    return position;
}

const sf::Vector2<double> &AbstractStellarBody::getVelocity() const {
    return velocity;
}

void AbstractStellarBody::setPosition(const sf::Vector2<double> &position) {
    this->position = position;
}

void AbstractStellarBody::setVelocity(const sf::Vector2<double> &velocity) {
    this->velocity = velocity;
}

bool AbstractStellarBody::loadTexture(const sf::Texture &texture) {
    sprite.setTexture(texture, true);
    sprite.setOrigin(32/2, 32/2);
}

void AbstractStellarBody::setSpritePosition(sf::Vector2f position){
    sprite.setPosition(position);
}

void AbstractStellarBody::draw(sf::RenderWindow &window) {
    window.draw(sprite);
}
