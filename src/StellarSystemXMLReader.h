//
// Created by Xenoth on 08/04/2017.
//

#include "StellarSystem.h"
#include <iostream>
#include <string>

#ifndef SYSTEMMAP_STELLARSYSTEMXMLREADER_H
#define SYSTEMMAP_STELLARSYSTEMXMLREADER_H

class StellarSystemXMLReader {

    public:
        StellarSystemXMLReader(Engine &engine);

        StellarSystem generateStellarSystem();

    private:
        Engine *engine;
        tinyxml2::XMLDocument *doc = nullptr;

        StellarBody* generateStellarBody(tinyxml2::XMLElement *stellar_body_element, StellarBody *main_body = nullptr);

        sf::Vector2<double> getVector2(std::string attribute_text);
        sf::Color getColor(std::string attribute_text);

};
#endif //SYSTEMMAP_STELLARSYSTEMXMLREADER_H
