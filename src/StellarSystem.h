//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_SYSTEM_H
#define SYSTEMMAP_SYSTEM_H


#include <vector>
#include "StellarBody.h"
#include "Engine.h"
#include <SFML/Graphics.hpp>

class System {

    public:
        System(const std::string name, const StellarBody main_body, Engine &engine);

        const std::string &getName() const;

        bool addStellarBody(StellarBody* body);

        void update();

        bool initGraphical();
        void draw(sf::RenderWindow &window);

        void warp_x10();     SLOT(slot_warp_x10,System,warp_x10);
        void warp_div10();   SLOT(slot_warp_div10,System,warp_div10);
        void warp_reset();   SLOT(slot_warp_reset,System,warp_reset);

private :

        unsigned int warp;

        std::string name;
        StellarBody main_body;

        std::vector<StellarBody*> bodies;
        Engine engine;

        std::string stellarBodyType2String(StellarBodyType stellarBodyType);
};


#endif //SYSTEMMAP_SYSTEM_H
