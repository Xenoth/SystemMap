//
// Created by xenoth on 11/03/17.
//

#ifndef SYSTEMMAP_SYSTEM_H
#define SYSTEMMAP_SYSTEM_H


#include <vector>
#include "StellarBody.h"
#include "Engine.h"
#include <SFML/Graphics.hpp>

class StellarSystem {

    public:
        StellarSystem(const std::string name, StellarBody *main_body, Engine &engine);
        ~StellarSystem();

        const std::string &getName() const;

        bool addStellarBody(StellarBody *body);
        bool addSatellite(StellarBody *orbiting_body, StellarBody *satellite);

        void update();

        bool initGraphical();
        void draw(sf::RenderWindow &window);

        void warp_x10();     SLOT(slot_warp_x10,StellarSystem,warp_x10);
        void warp_div10();   SLOT(slot_warp_div10,StellarSystem,warp_div10);
        void warp_reset();   SLOT(slot_warp_reset,StellarSystem,warp_reset);

private :

        unsigned int warp;

        std::string name;
        StellarBody *main_body;

        std::vector<StellarBody*> bodies;
        std::map<StellarBody*, std::vector<StellarBody*>> satellites;
        Engine engine;

        std::string stellarBodyType2String(StellarBodyType stellarBodyType);
};


#endif //SYSTEMMAP_SYSTEM_H
