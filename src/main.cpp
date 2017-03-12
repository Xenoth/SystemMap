#include "StellarBody.h"
#include "StellarSystem.h"
#include "Engine.h"
#include "config.h"
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {


    cout << "Version " << myproject_VERSION_MAJOR << "." << myproject_VERSION_MINOR << endl;

    sf::RenderWindow app(sf::VideoMode(700, 700), "System Map");
    app.setFramerateLimit(60);

    sf::Event event;

    Engine engine;
    engine.initManagers();

    StellarBody sun = StellarBody((1.99*std::pow(10.0, 30.0)), 695700000, sf::Vector2<double>(0,0), sf::Vector2<double>(0,0), sf::Vector2<double>(0,0),"Sol", StellarBodyType::STAR_O);

    StellarBody mercury = StellarBody((330.2*std::pow(10,21)), 2439700, sf::Vector2<double>(69817079000, 0), sf::Vector2<double>(0, 38860),sf::Vector2<double>(0,0),"Mercury", StellarBodyType::PLANET_ROCK);
    StellarBody venus = StellarBody((4.8685*std::pow(10,24)), 6051800, sf::Vector2<double>(108942109000, 0), sf::Vector2<double>(0, 34790),sf::Vector2<double>(0,0),"Venus", StellarBodyType::PLANET_GAZ);
    StellarBody earth = StellarBody((5.9736*std::pow(10.0, 24.0)), 6356000, sf::Vector2<double>(152097701000, 0), sf::Vector2<double>(0, 29291),sf::Vector2<double>(0,0), "Earth", StellarBodyType::PLANET_EARTH_LIKE);
    StellarBody mars = StellarBody((641.85*std::pow(10,21)), 3396200, sf::Vector2<double>(249228730000, 0), sf::Vector2<double>(0, 21972),sf::Vector2<double>(0,0), "Mars", StellarBodyType::PLANET_DEAD);

    StellarBody halley = StellarBody((1000), 1000, sf::Vector2<double>(-5285289999999.3721, 0), sf::Vector2<double>(0, -810),sf::Vector2<double>(0,0), "1P/Halley", StellarBodyType::ASTEROID_ICE);

    System system("SOL", sun, engine);
    system.addStellarBody(mercury);
    system.addStellarBody(venus);
    system.addStellarBody(earth);
    system.addStellarBody(mars);
    system.addStellarBody(halley);


    system.initGraphical();

    size_t warp=1;

    while(app.isOpen())
    {
        while (app.pollEvent(event)) {
            switch (event.type) {
                 case sf::Event::Closed: {
                     app.close();
                 }
                break;
                case sf::Event::KeyPressed:{
                    if(event.key.code == sf::Keyboard::Escape)
                        app.close();
                    else if(event.key.code == sf::Keyboard::Right && warp < 24*2)
                        warp++;
                    else if(event.key.code == sf::Keyboard::Left && warp > 0)
                        warp--;
                    else if(event.key.code == sf::Keyboard::Down)
                        warp=1;
                }
                break;

                default:
                    break;
            }
        }
        app.clear(sf::Color(0, 0, 0,255));
        system.update(86400/24*warp);
        system.draw(app);
        app.display();
    }
}
