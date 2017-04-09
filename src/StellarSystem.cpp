//
// Created by xenoth on 11/03/17.
//

#include <iostream>
#include "StellarSystem.h"
#include "Math4Orbits.h"

using namespace std;

StellarSystem::StellarSystem(const std::string name, StellarBody *main_body, Engine &engine) :
        name(name), main_body(main_body), engine(engine)
{
    warp = 1;
}

StellarSystem::~StellarSystem()
{
    delete(main_body);
    for (StellarBody *current : bodies){
        delete(current);
    }
    for(pair<StellarBody*, vector<StellarBody*>> current_pair: satellites){
        for(StellarBody *currentSatellite : current_pair.second){
            delete(currentSatellite);
        }
    }
}

void StellarSystem::warp_x10()
{
    if( warp < 100000 )
        warp = warp*10;
}

void StellarSystem::warp_div10()
{
    if( warp > 1 )
        warp = warp/10;
}

void StellarSystem::warp_reset()
{
    warp = 1;
}

const std::string &StellarSystem::getName() const {
    return name;
}

bool StellarSystem::addStellarBody(StellarBody *body){
    if(body->getMass() < main_body->getMass()){
        bodies.push_back(body);
        return true;
    }
    return false;
}

bool StellarSystem::addSatellite(StellarBody *orbiting_body, StellarBody *satellite) {
    if(satellite->getMass() < orbiting_body->getMass()){
        map<StellarBody*,vector<StellarBody*>>::iterator it;
        it = satellites.find(orbiting_body);
        if (it == satellites.end()){
            satellites.insert({orbiting_body, vector<StellarBody*>()});
            it = satellites.find(orbiting_body);
        }
        satellites.find(orbiting_body)->second.push_back(satellite);

        return true;
    }
    return false;
}

void StellarSystem::update() {

    for(StellarBody *current : bodies){

        main_body->OrbitCalculation(*current, warp);
    }
}

bool StellarSystem::initGraphical()
{
    main_body->loadTexture(engine.textureManager.getRessource(stellarBodyType2String(main_body->getStellarBodyType())));
    for(StellarBody *current : bodies){
        current->loadTexture(engine.textureManager.getRessource(stellarBodyType2String(current->getStellarBodyType())));
    }
    int count_satellite = 0;
    for(pair<StellarBody*, vector<StellarBody*>> current_pair: satellites){
        for(StellarBody *currentSatellite : current_pair.second){
            currentSatellite->loadTexture(engine.textureManager.getRessource(stellarBodyType2String(currentSatellite->getStellarBodyType())));
            count_satellite++;
        }
    }
    cout << "StellarSystem::initGraphical :" << endl;
    cout << "Main Body Initialized" << std::endl;
    cout << bodies.size() << " bodie(s) initialized" << endl;
    cout << count_satellite << " satellite(s) initialized" << endl;
}

void StellarSystem::draw(sf::RenderWindow &window) {
    main_body->setSpritePosition(sf::Vector2f((700/2), (700/2)));
    main_body->draw(window);

    for(StellarBody *current : bodies)
    {
        sf::Vector2f positionOnScreen = convert_position_physic_to_graphic(current->getPosition());
        current->setSpritePosition(positionOnScreen);
        current->draw(window);
        current->drawOrbit(window);
    }
}

std::string StellarSystem::stellarBodyType2String(StellarBodyType stellarBodyType) {
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

