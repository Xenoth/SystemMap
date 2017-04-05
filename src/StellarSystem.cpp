//
// Created by xenoth on 11/03/17.
//

#include <iostream>
#include "StellarSystem.h"
#include "Math4Orbits.h"

System::System(const std::string name, const StellarBody main_body, Engine &engine) :
        name(name), main_body(main_body), engine(engine)
{
    warp = 1;
}

void System::warp_x10()
{
    if( warp < 100000 )
        warp = warp*10;
}

void System::warp_div10()
{
    if( warp > 1 )
        warp = warp/10;
}

void System::warp_reset()
{
    warp = 1;
}

const std::string &System::getName() const {
    return name;
}

bool System::addStellarBody(StellarBody* body){
    if(body->getMass() < main_body.getMass()){
        bodies.push_back(body);
        return true;
    }
    return false;
}

void System::update() {

    for(size_t i = 0; i < bodies.size(); i++){

        main_body.OrbitCalculation(*bodies.at(i), warp);
    }
}

bool System::initGraphical()
{
    main_body.loadTexture(engine.textureManager.getRessource(stellarBodyType2String(main_body.getStellarBodyType())));
    for(size_t i=0; i < bodies.size(); i++){
        bodies.at(i)->loadTexture(engine.textureManager.getRessource(stellarBodyType2String(bodies.at(i)->getStellarBodyType())));
    }
}

void System::draw(sf::RenderWindow &window) {
    main_body.setSpritePosition(sf::Vector2f((700/2), (700/2)));
    main_body.draw(window);

    for(size_t i = 0; i < bodies.size(); i++)
    {
        sf::Vector2f positionOnScreen = convert_position_physic_to_graphic(bodies.at(i)->getPosition());
        bodies.at(i)->setSpritePosition(positionOnScreen);
        bodies.at(i)->draw(window);
        bodies.at(i)->drawOrbit(window);
    }
}

std::string System::stellarBodyType2String(StellarBodyType stellarBodyType) {
    switch (stellarBodyType){
        case 1 :
            return "STAR_O";
        break;
        case 2 :
            return "STAR_M";
            break;
        case 3 :
            return "STAR_G";
            break;
        case 11 :
            return "PLANET_EARTH_LIKE";
            break;
        case 12 :
            return "PLANET_GAZ";
            break;
        case 13 :
            return "PLANET_ROCK";
            break;
        case 14 :
            return "PLANET_DEAD";
            break;
        case 21 :
            return "ASTEROID_ROCK";
            break;
        case 22 :
            return "ASTEROID_ICE";
            break;
        default:
            return "DEFAULT";
    }
}
