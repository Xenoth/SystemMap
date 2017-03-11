#include "config.h"
#include "System.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {


  cout << "Version " << myproject_VERSION_MAJOR << "." << myproject_VERSION_MINOR << endl;

  sf::RenderWindow App(sf::VideoMode(700, 700), "System Map");
    App.setFramerateLimit(60);


  Star sun = Star("Sun", (1.99*pow(10.0, 30.0)), 695700000, sf::Vector2<double>(0,0), sf::Vector2<double>(0,0), M);

  Planet mercury = Planet("Mercury", (330.2*pow(10.0,21.0)), 2439700, sf::Vector2<double>(69817079000, 0), sf::Vector2<double>(0,38860), ROCKY_WORLD);
  Planet venus = Planet("Venus", (4,8685*pow(10.0,24.0)), 6051800, sf::Vector2<double>(108942109000, 0), sf::Vector2<double>(0,35260), ROCKY_WORLD);
  Planet earth = Planet("Earth", (5.9736*pow(10.0, 24.0)), 6356000, sf::Vector2<double>(152097701000, 0), sf::Vector2<double>(0, 29291), EARTHLIKE);
  Planet mars = Planet("Mars", (641.85*pow(10.0, 21.0)), 3396200, sf::Vector2<double>(249228730000, 0), sf::Vector2<double>(0, 21972), ROCKY_WORLD);

  System sol = System("SOL", sun);
    sol.addPlanet(mercury);
    sol.addPlanet(venus);
  sol.addPlanet(earth);
    sol.addPlanet(mars);

  sol.initGraphical();
  size_t days = 0;

  while(App.isOpen())
  {
    App.clear(sf::Color(0, 0, 0,255));

    std::cout << "Day " << days << std::endl;
    sol.update(86400/24);
    days++;
    sol.draw(App);

    App.display();
  }
}
