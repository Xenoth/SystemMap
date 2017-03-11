//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_SYSTEM_H
#define SYSTEMMAP_SYSTEM_H


#include <vector>
#include "AbstractStellarBody.h"
#include "Star.h"
#include "Planet.h"
#include <SFML/Graphics.hpp>

class System {

    public:
        System(const std::string &name, const Star &main_body);

        inline void addPlanet(Planet planet) { orbiting_planets.push_back(planet); };

        void update(double T);

        bool initGraphical();
        void draw(sf::RenderWindow &window);


    private :
        std::string name;
        Star main_body;

        sf::Texture texture_star, texture_planet;

        std::vector<Planet> orbiting_planets;

};


#endif //SYSTEMMAP_SYSTEM_H
