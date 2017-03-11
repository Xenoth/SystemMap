//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_ABSTRACTSTELLARBODY_H
#define SYSTEMMAP_ABSTRACTSTELLARBODY_H


#include <SFML/System.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class AbstractStellarBody {

    public:
    AbstractStellarBody(const std::string &name, double mass, double radius, const sf::Vector2<double> &position,
                        const sf::Vector2<double> &velocity);
    virtual ~AbstractStellarBody() = 0;

    bool loadTexture(const sf::Texture &texture);
    void setSpritePosition(sf::Vector2f position);
    void draw(sf::RenderWindow &window);


    const std::string &getName() const;
    double getMass() const;
    double getRadius() const;
    const sf::Vector2<double> &getPosition() const;
    const sf::Vector2<double> &getVelocity() const;

    void setPosition(const sf::Vector2<double> &position);
    void setVelocity(const sf::Vector2<double> &velocity);

protected:
        std::string name;

        double mass, radius;
        sf::Vector2<double> position, velocity;
        sf::Sprite sprite;
};

inline AbstractStellarBody::~AbstractStellarBody() {}

#endif //SYSTEMMAP_ABSTRACTSTELLARBODY_H
