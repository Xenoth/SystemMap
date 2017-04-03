//
// Created by xenoth on 12/03/17.
//

#ifndef SYSTEMMAP_GRAPHICALENTITY_H
#define SYSTEMMAP_GRAPHICALENTITY_H


#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class GraphicalEntity {
    public:
        GraphicalEntity();

        bool loadTexture(const sf::Texture *texture);

        void setSpritePosition(sf::Vector2f position);
        void draw(sf::RenderWindow &window);
        void drawOrbit(sf::RenderWindow &window){}

    protected:
        sf::Sprite sprite;
};


#endif //SYSTEMMAP_GRAPHICALENTITY_H
