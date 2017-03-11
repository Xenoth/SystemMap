//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_SYSTEM_H
#define SYSTEMMAP_SYSTEM_H


#include <vector>
#include "AbstractStellarBody.h"
#include "Star.h"
#include "Planet.h"

class System {

    public:
        System(const std::string &name, const Star &main_body);

        inline void addPlanet(Planet planet) { orbiting_planets.push_back(planet); };

        void update(double T);

    private :
        std::string name;
        Star main_body;

        std::vector<Planet> orbiting_planets;

};


#endif //SYSTEMMAP_SYSTEM_H
