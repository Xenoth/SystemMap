//
// Created by xenoth on 12/03/17.
//

#ifndef SYSTEMMAP_ENGINE_H
#define SYSTEMMAP_ENGINE_H


#include <SFML/Graphics.hpp>
#include "Manager.h"
#include "EventManager.h"

class StellarSystem;

class Engine {

    private:
        sf::RenderWindow* window;
        StellarSystem* system;
    public:
        Engine(sf::RenderWindow& window);
        ~Engine();
        bool initManagers();
        void initKeyMapping();
        inline void setSystem(StellarSystem& system){ this->system = &system; }

        Manager<sf::Texture> textureManager;
        EventsManager* eventManager;
};


#endif //SYSTEMMAP_ENGINE_H
