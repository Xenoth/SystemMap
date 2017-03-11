//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_STAR_H
#define SYSTEMMAP_STAR_H


#include "AbstractStellarBody.h"
#include "StarType.h"

class Star : public AbstractStellarBody {

    public:
    Star(const std::string &name, double mass, double radius, const sf::Vector2f &position,
         const sf::Vector2f &velocity, const StarType &starType);

    private:
        StarType starType;

};


#endif //SYSTEMMAP_STAR_H
