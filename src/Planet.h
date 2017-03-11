//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_PLANET_H
#define SYSTEMMAP_PLANET_H


#include "AbstractStellarBody.h"
#include "PlanetType.h"

class Planet : public AbstractStellarBody
{
    public:
    Planet(const std::string &name, double mass, double radius, const sf::Vector2<double> &position,
           const sf::Vector2<double> &velocity, const PlanetType &planetType);

private:
        PlanetType planetType;

};


#endif //SYSTEMMAP_PLANET_H
