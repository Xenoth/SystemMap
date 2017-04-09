//
// Created by xenoth on 12/03/17.
//

#include "Engine.h"
#include "StellarSystem.h"

const std::string Engine::RESSOURCES_PATH= "../ressources/";
const std::string Engine::TEXTURES_LOD = "textures.lod";
const std::string Engine::XMLS_LOD = "xmls.lod";

Engine::Engine(sf::RenderWindow& window)
{
    this->window = &window;
    eventManager = new EventsManager(this->window);
    eventManager->Closed.connect(appClose);
}

Engine::~Engine()
{
    delete eventManager;
}

bool Engine::initManagers() {
    if(!textureManager.loadRessources(RESSOURCES_PATH+TEXTURES_LOD))
        return false;
    if(!xmlManager.loadXMLFiles(RESSOURCES_PATH+XMLS_LOD)){
        return false;
    }
    return true;
}

void Engine::initKeyMapping()
{
    eventManager->Left_pressed.connect(system->slot_warp_div10);
    eventManager->Right_pressed.connect(system->slot_warp_x10);
    eventManager->Down_pressed.connect(system->slot_warp_reset);
}
