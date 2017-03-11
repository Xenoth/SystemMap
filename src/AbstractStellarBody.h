//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_ABSTRACTSTELLARBODY_H
#define SYSTEMMAP_ABSTRACTSTELLARBODY_H


#include <SFML/System.hpp>

class AbstractStellarBody {

    public:
    AbstractStellarBody(const std::string &name, double mass, double radius, const sf::Vector2f &position,
                        const sf::Vector2f &velocity);
    virtual ~AbstractStellarBody() = 0;

    const std::string &getName() const;
    double getMass() const;
    double getRadius() const;
    const sf::Vector2f &getPosition() const;
    const sf::Vector2f &getVelocity() const;

    void setPosition(const sf::Vector2f &position);
    void setVelocity(const sf::Vector2f &velocity);

protected:
        std::string name;

        double mass, radius;
        sf::Vector2f position, velocity;
};

inline AbstractStellarBody::~AbstractStellarBody() {}

#endif //SYSTEMMAP_ABSTRACTSTELLARBODY_H
