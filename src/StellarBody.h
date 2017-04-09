//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_STELLARBODY_H
#define SYSTEMMAP_STELLARBODY_H

#include "Engine.h"
#include "PhysicEntity.h"
#include "GraphicalEntity.h"
#include "StellarBodyType.h"
#include "Orbit.h"
#include "Math4Orbits.h"


class StellarBody : public PhysicEntity, public GraphicalEntity {

    public:

    StellarBody(Engine* engine,double mass, double radius, const sf::Vector2<double> &position, const sf::Vector2<double> &velocity,
                const sf::Vector2<double> &acceleration, const std::string &name, StellarBodyType stellarBodyType, StellarBody* orbited_body = nullptr);

    const std::string &getName() const;
    const StellarBodyType &getStellarBodyType() const;
    void addOrbiter(StellarBody* orbiter);

    void orbitsCalculation(const double &T);

    void initGraphics();

    void draw(sf::RenderWindow& window);

    ~StellarBody()
    {
         delete orbit;
         for( auto& it : orbitersList)
         {
             delete it.second;
         }
    }

    private:
        std::string name;
        StellarBodyType stellarBodyType;
        StellarBody* orbited_body;
        std::map<std::string,StellarBody*> orbitersList;
        Orbit* orbit;
        Engine* engine;
};

#endif //SYSTEMMAP_STELLARBODY_H
