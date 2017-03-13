//
// Created by xenoth on 12/03/17.
//

#include "Engine.h"

bool Engine::initManagers() {
    if(!textureManager.loadRessources("../ressources/textures.lod"))
        return false;

    return true;
}
