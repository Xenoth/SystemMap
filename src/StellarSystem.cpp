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
    delete main_body;
}

StellarBody* StellarSystem::getMainBody() const
{
    return main_body;
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


void StellarSystem::update() {

    main_body->OrbitCalculation(warp);
}

void StellarSystem::initGraphics()
{
    main_body->initGraphics();
}

void StellarSystem::draw(sf::RenderWindow &window) {
    main_body->setSpritePosition(sf::Vector2f((700/2), (700/2)));
    main_body->draw(window);
}

