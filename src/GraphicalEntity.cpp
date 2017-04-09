//
// Created by xenoth on 12/03/17.
//

#include <SFML/Graphics/Texture.hpp>
#include "GraphicalEntity.h"

GraphicalEntity::GraphicalEntity() {}

bool GraphicalEntity::loadTexture(const sf::Texture *texture) {

    sprite.setTexture(*texture, true);
    sprite.setOrigin(32/2, 32/2);
}

void GraphicalEntity::setSpritePosition(sf::Vector2f position){
    sprite.setPosition(position);
}
