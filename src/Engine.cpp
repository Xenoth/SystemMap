//
// Created by xenoth on 12/03/17.
//

#include "Engine.h"
#include "StellarSystem.h"

Engine::Engine(sf::RenderWindow& window)
{
    this->window = &window;
    eventManager = new EventsManager(this->window);
    AUTO_SLOT(appClose,[=](){ this->window->close(); });
    eventManager->Closed.connect(appClose);
}

Engine::~Engine()
{
    delete eventManager;
}

bool Engine::initManagers() {
    if(!textureManager.loadRessources("../ressources/textures.lod"))
        return false;
    return true;
}

void Engine::initKeyMapping()
{
    eventManager->Left_pressed.connect(system->slot_warp_div10);
    eventManager->Right_pressed.connect(system->slot_warp_x10);
    eventManager->Down_pressed.connect(system->slot_warp_reset);
}
