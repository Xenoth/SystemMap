//
// Created by xenoth on 11/03/17.
//

#include <iostream>
#include "System.h"
#include "Math4Orbits.h"

System::System(const std::string &name, const Star &main_body) : name(name), main_body(main_body) {}

void System::update(double T) {
    for(size_t i = 0; i < orbiting_planets.size(); i++){

        sf::Vector2f nextPos, nextVelocity;
        double acceleration;

        double distance = calculateDistance(main_body.getPosition(), orbiting_planets.at(i).getPosition());
        acceleration = calculateAccelerationForce(main_body.getMass(), orbiting_planets.at(i).getMass(), distance);
        nextVelocity = accelerationOnVelocity(acceleration, orbiting_planets.at(i).getVelocity(), 1);
        nextPos = velocityOnPosition(nextVelocity, orbiting_planets.at(i).getPosition(), 1);
        orbiting_planets.at(i).setPosition(nextPos);
        orbiting_planets.at(i).setVelocity(nextVelocity);
        std::cout << "Velocity = " << nextVelocity.x << " , " << nextVelocity.y << std::endl;
        std::cout << "Position = " << nextPos.x << " , " << nextVelocity.y << std::endl;
    }
}
