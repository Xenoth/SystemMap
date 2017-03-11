//
// Created by xenoth on 11/03/17.
//

#include <iostream>
#include "System.h"
#include "Math4Orbits.h"

System::System(const std::string &name, const Star &main_body) : name(name), main_body(main_body) {}

void System::update(double T) {

    std::cout << "Star " << main_body.getName() << std::endl;
    std::cout << "\tMass =" << main_body.getMass() << std::endl;
    std::cout << "\tRadius = " << main_body.getRadius() << std::endl;
    std::cout << "\tPosition = " << main_body.getPosition().x << " , " << main_body.getPosition().y << std::endl;

    for(size_t i = 0; i < orbiting_planets.size(); i++){

        sf::Vector2<double> nextPos, nextVelocity;
        sf::Vector2<double> acceleration;

        double angle = calculateAngle(main_body.getPosition(), orbiting_planets.at(i).getPosition());
        double distance = calculateDistance(main_body.getPosition(), orbiting_planets.at(i).getPosition());

        acceleration = calculateAccelerationForce(main_body.getMass(), orbiting_planets.at(i).getMass(), distance, angle);
        nextVelocity = accelerationOnVelocity(acceleration, orbiting_planets.at(i).getVelocity(), T);
        nextPos = velocityOnPosition(nextVelocity, orbiting_planets.at(i).getPosition(), T);


        std::cout << "Planet " << orbiting_planets.at(i).getName() << std::endl;
        std::cout << "\tMass =" << orbiting_planets.at(i).getMass() << std::endl;
        std::cout << "\tRadius = " << orbiting_planets.at(i).getRadius() << std::endl;
        std::cout << "\tPosition = " << orbiting_planets.at(i).getPosition().x << " , " << orbiting_planets.at(i).getPosition().y << std::endl;
        std::cout << "\tVelocity = " << orbiting_planets.at(i).getVelocity().x << " , " << orbiting_planets.at(i).getVelocity().y << std::endl;
        std::cout << "\tDistance =" << distance << std::endl;
        std::cout << "\tAngle = " << angle << std::endl;
        std::cout << "\tAcceleration = " << acceleration.x << " , " << acceleration.y << std::endl;
        std::cout << "\tNextVelocity = " << nextVelocity.x << " , " << nextVelocity.y << std::endl;
        std::cout << "\tNextPosition = " << nextPos.x << " , " << nextPos.y << std::endl;

        orbiting_planets.at(i).setPosition(nextPos);
        orbiting_planets.at(i).setVelocity(nextVelocity);
    }
}

bool System::initGraphical()
{
    texture_planet.loadFromFile("../ressources/planet.png");
    texture_star.loadFromFile("../ressources/star.png");

    main_body.loadTexture(texture_star);
    for (size_t i = 0; i < orbiting_planets.size(); i++){
        orbiting_planets.at(i).loadTexture(texture_planet);
    }
}

void System::draw(sf::RenderWindow &window) {
    main_body.setSpritePosition(sf::Vector2f((700/2), (700/2)));
    main_body.draw(window);
    for(size_t i = 0; i < orbiting_planets.size(); i++)
    {
        sf::Vector2<double> position = orbiting_planets.at(i).getPosition();
        sf::Vector2f positionOnScreen;

        positionOnScreen.x = (position.x/712082085.714)+(700/2);
        positionOnScreen.y = (position.y/712082085.714)+(700/2);

        orbiting_planets.at(i).setSpritePosition(positionOnScreen);
        orbiting_planets.at(i).draw(window);
    }
}
