#include "StellarBody.h"
#include "StellarSystem.h"
#include "Engine.h"
#include "StellarSystemXMLReader.h"
#include <iostream>
#include <cmath>

using namespace std;


int main(int argc, char* argv[]) {


    sf::RenderWindow app(sf::VideoMode(700, 700), "System Map");
    app.setFramerateLimit(60);


    Engine engine(app);
    engine.initManagers();

    StellarSystemXMLReader stellarSystemXMLReader(engine);
    StellarSystem system = stellarSystemXMLReader.generateStellarSystem();

    engine.setSystem(system);
    engine.initKeyMapping();
    system.initGraphics();

    while(app.isOpen())
    {
        engine.eventManager->catchEvents();
        app.clear(sf::Color(0, 0, 0,255));
        system.update();
        system.draw(app);
        app.display();
    }
}
