//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_PHYSICENTITY_H
#define SYSTEMMAP_PHYSICENTITY_H


#include <SFML/System/Vector2.hpp>

class PhysicEntity {

    public:

    PhysicEntity(double mass, double radius, const sf::Vector2<double> &position, const sf::Vector2<double> &velocity,
                 const sf::Vector2<double> &acceleration);

    double getMass() const;
    double getRadius() const;
    const sf::Vector2<double> &getPosition() const;
    const sf::Vector2<double> &getVelocity() const;
    const sf::Vector2<double> &getAcceleration() const;

    void setPosition(const sf::Vector2<double> &position);
    void setVelocity(const sf::Vector2<double> &velocity);
    void setAcceleration(const sf::Vector2<double> &acceleration);

    bool OrbitCalculation(PhysicEntity &orbitingEntity, const double &T);

protected:
        double mass;
        double radius;

        sf::Vector2<double> position, velocity, acceleration;
};


#endif //SYSTEMMAP_PHYSICENTITY_H
