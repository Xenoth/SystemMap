#include "config.h"
#include "System.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {


  cout << "Version " << myproject_VERSION_MAJOR << "." << myproject_VERSION_MINOR << endl;

  sf::Window App(sf::VideoMode(800, 600), "System Map");

  Star sun = Star("Sun", (1.99*pow(10.0, 30.0)), 695700, sf::Vector2f(0,0), sf::Vector2f(0,0), G);
    Planet earth = Planet("Earth", (5,9736*pow(10.0, 24.0)), 6378.137, sf::Vector2f(152097701, 0), sf::Vector2f(0, 29.291), EARTHLIKE);

  System sol = System("SOL", sun);
    sol.addPlanet(earth);

    while (1)
    {
        sol.update(1);
    }
}
