//
// Created by xenoth on 12/03/17.
//

#ifndef SYSTEMMAP_ENGINE_H
#define SYSTEMMAP_ENGINE_H


#include <SFML/Graphics/Texture.hpp>
#include "Manager.h"

class Engine {

    public:

        bool initManagers();

        Manager<sf::Texture> textureManager;
};


#endif //SYSTEMMAP_ENGINE_H
