//
// Created by Xenoth on 08/04/2017.
//

#include "StellarSystemXMLReader.h"

using namespace tinyxml2;
using namespace std;
using namespace sf;

StellarSystemXMLReader::StellarSystemXMLReader(Engine &engine){
    this->engine = &engine;
}

StellarSystem StellarSystemXMLReader::generateStellarSystem() {
    if(doc == nullptr){
        doc = engine->xmlManager.getXMLFile("STELLAR_SYSTEM");
        cout << "StellarSystemXMLReader::generateStellarSystem : XML file received from XMLManager" << endl;
    }
    if(!doc){
        cerr << "StellarSystemXMLReader::generateStellarSystem : XML file not returned from XMLManager" << endl;
    }

    tinyxml2::XMLElement* stellar_system = doc->FirstChildElement("stellar_system");
    if(!stellar_system){
        cerr << "StellarSystemXMLReader::generateStellarSystem : Unable to find stellar_system Element. Aborting..." << endl;
        exit(EXIT_FAILURE);
    }
    string name_stellar_system = stellar_system->Attribute("name");
    cout << "StellarSystemXMLReader::generateStellarSystem : Generating Stellar System " << name_stellar_system << "..." << endl;


    if(!stellar_system->FirstChildElement("main_body")){
        cerr << "StellarSystemXMLReader::generateStellarSystem : Unable to find main_body Element. Aborting..." << endl;
        exit(EXIT_FAILURE);
    }
    StellarBody* main_body = generateStellarBody(stellar_system->FirstChildElement("main_body"));
    if (main_body == nullptr){
        cerr << "StellarSystemXMLReader::generateStellarSystem : Unable to generate the main_body. Aborting..." << endl;
        exit(EXIT_FAILURE);
    }

    StellarSystem stellarSystem = StellarSystem(name_stellar_system, main_body, *engine);

    XMLElement *planets = stellar_system->FirstChildElement("planets");
    if (!planets){
        cerr << "StellarSystemXMLReader::generateStellarSystem : Unable to find planets element. Aborting..." << endl;
        exit(EXIT_FAILURE);
    }
    for(XMLElement *planet_element = planets->FirstChildElement("planet"); planet_element != NULL;
        planet_element = planet_element->NextSiblingElement("planet"))
    {
        StellarBody* planet_generated = generateStellarBody(planet_element, main_body);
        if (planet_generated == nullptr){
            cerr << "StellarSystemXMLReader::generateStellarSystem : Was Unable to generate the the planet. Passing though..." << endl;
            continue;
        }
        stellarSystem.addStellarBody(planet_generated);
        XMLElement *satellites_element = planet_element->FirstChildElement("satellites");
        if(!satellites_element)
            continue;
        for(XMLElement *satellite_element = satellites_element->FirstChildElement("satellite"); satellite_element != NULL;
            satellite_element = satellite_element->NextSiblingElement("satellite")){
            StellarBody *satellite = generateStellarBody(satellite_element, planet_generated);
            if (satellite == nullptr){
                cerr << "StellarSystemXMLReader::generateStellarSystem : Was Unable to generate the the satellite. Passing though..." << endl;
                continue;
            }
            stellarSystem.addSatellite(planet_generated, satellite);
        }
    }

    return stellarSystem;
}

StellarBody* StellarSystemXMLReader::generateStellarBody(XMLElement *stellar_body_element, StellarBody *main_body) {
    string stellar_body_name = stellar_body_element->Attribute("name");
    XMLElement *physic_element = stellar_body_element->FirstChildElement("physic");
    if (!physic_element){
        cerr << "StellarSystemXMLReader::generateStellarBody : Unable to find physic element. Aborting..." << endl;
        return nullptr;
    }
    double mass = physic_element->DoubleAttribute("mass");
    double radius = physic_element->DoubleAttribute("radius");
    Vector2<double> position = getVector2(physic_element->Attribute("position"));
    Vector2<double> velocity = getVector2(physic_element->Attribute("velocity"));
    Vector2<double> acceleration = getVector2(physic_element->Attribute("acceleration"));
    StellarBodyType type = (StellarBodyType)physic_element->UnsignedAttribute("type");

    XMLElement *graphic_element = stellar_body_element->FirstChildElement("graphic");
    if (!graphic_element){
        cerr << "StellarSystemXMLReader::generateStellarBody : Unable to find graphic element. Aborting..." << endl;
        return nullptr;
    }
    string sprite = graphic_element->Attribute("texture");
    Color map_color = getColor(graphic_element->Attribute("map_color"));
    cout << "New Stellar Body generated : " << stellar_body_name << endl;
    return new StellarBody(mass, radius, position, velocity, acceleration, stellar_body_name, type, main_body);
}

Vector2<double> StellarSystemXMLReader::getVector2(string attribute_text){
    string delimiter = ";";
    string x = attribute_text.substr(0, attribute_text.find(delimiter));
    string y = attribute_text.substr(x.size()+1, attribute_text.size());
    const char *c_x = &x[0u];
    const char *c_y = &y[0u];
    return Vector2<double>((double)atof(c_x), (double)atof(c_y));
}

Color StellarSystemXMLReader::getColor(string attribute_text){
    string delimiter = ";";
    string r = attribute_text.substr(0, attribute_text.find(delimiter));
    attribute_text = attribute_text.substr(r.size()+1, attribute_text.size());
    string g = attribute_text.substr(0, attribute_text.find(delimiter));
    string b = attribute_text.substr(g.size()+1, attribute_text.size());
    const char *c_r = &r[0u];
    const char *c_g = &g[0u];
    const char *c_b = &b[0u];
    return sf::Color((uint8_t)atoi(c_r), (uint8_t)atoi(c_g), (uint8_t)atoi(c_b));
}
