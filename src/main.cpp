#include "StellarBody.h"
#include "StellarSystem.h"
#include "Engine.h"
#include "StellarSystemXMLReader.h"
#include <iostream>
#include <cmath>

using namespace std;

function zoomInView(sf::View *view){
    view->zoom(1f);
}

function zoomOutView(sf::View *vienw){
    vienw->zoom(-1f);
}

int main(int argc, char* argv[]) {


    sf::RenderWindow app(sf::VideoMode(700, 700), "System Map");
    app.setFramerateLimit(60);

    sf::View view = app.getDefaultView();

    Engine engine(app);
    engine.initManagers();

    StellarSystemXMLReader stellarSystemXMLReader(engine);
    StellarSystem system = stellarSystemXMLReader.generateStellarSystem();

    engine.setSystem(system);
    engine.initKeyMapping();
    system.initGraphical();

    engine.eventManager->MouseWheelScrolled.connect(sf::Vector2(zoomInView(&view), zoomOutView(&view)));

    while(app.isOpen())
    {
        engine.eventManager->catchEvents();
        app.clear(sf::Color(0, 0, 0,255));
        system.update();
        system.draw(app);
        app.setView(view);
        app.display();
    }
}
