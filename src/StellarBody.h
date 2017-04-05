//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_STELLARBODY_H
#define SYSTEMMAP_STELLARBODY_H

#include "PhysicEntity.h"
#include "GraphicalEntity.h"
#include "StellarBodyType.h"
#include "Orbit.h"


class StellarBody : public PhysicEntity, public GraphicalEntity {

    public:

    StellarBody(double mass, double radius, const sf::Vector2<double> &position, const sf::Vector2<double> &velocity,
                const sf::Vector2<double> &acceleration, const std::string &name, StellarBodyType stellarBodyType, StellarBody* orbited_body = nullptr);

    const std::string &getName() const;
    const StellarBodyType &getStellarBodyType() const;

    ~StellarBody(){ delete orbit; }

    inline void drawOrbit(sf::RenderWindow& window)
    {
        if(orbit)
        {
            //orbit->update();
            orbit->draw(window);
        }
    }



    private:
        std::string name;
        StellarBodyType stellarBodyType;
        StellarBody* orbited_body;
        Orbit* orbit;
};

#endif //SYSTEMMAP_STELLARBODY_H
