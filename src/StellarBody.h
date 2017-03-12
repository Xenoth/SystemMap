//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_STELLARBODY_H
#define SYSTEMMAP_STELLARBODY_H

#include "PhysicEntity.h"
#include "GraphicalEntity.h"
#include "StellarBodyType.h"

class StellarBody : public PhysicEntity, public GraphicalEntity {

    public:

    StellarBody(double mass, double radius, const sf::Vector2<double> &position, const sf::Vector2<double> &velocity,
                const sf::Vector2<double> &acceleration, const std::string &name, StellarBodyType stellarBodyType);

    const std::string &getName() const;
    const StellarBodyType &getStellarBodyType() const;

    private:
        std::string name;
        StellarBodyType stellarBodyType;
};

#endif //SYSTEMMAP_STELLARBODY_H
