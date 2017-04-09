//
// Created by xenoth on 12/03/17.
//

#ifndef SYSTEMMAP_ENGINE_H
#define SYSTEMMAP_ENGINE_H


#include <SFML/Graphics.hpp>
#include "Manager.h"
#include "EventManager.h"
#include "XMLManager.h"

class StellarSystem;

class Engine {

    private:
        sf::RenderWindow* window;
        StellarSystem* system;
        AUTO_SLOT(appClose,[=](){ this->window->close(); });
    public:

        static const std::string RESSOURCES_PATH;
        static const std::string TEXTURES_LOD;
        static const std::string XMLS_LOD;

        Engine(sf::RenderWindow& window);
        ~Engine();
        bool initManagers();
        void initKeyMapping();
        inline void setSystem(StellarSystem& system){ this->system = &system; }

        Manager<sf::Texture> textureManager;
        XMLManager xmlManager;
        EventsManager* eventManager;
};


#endif //SYSTEMMAP_ENGINE_H
