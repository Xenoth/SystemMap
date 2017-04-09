//
// Created by Xenoth on 08/04/2017.
//

#ifndef SYSTEMMAP_XMLMANAGER_H
#define SYSTEMMAP_XMLMANAGER_H


#include <fstream>
#include <map>
#include "tinyxml2/tinyxml2.h"

class XMLManager {

    public:
        ~XMLManager();

        bool loadXMLFiles(std::string from_file);
        inline tinyxml2::XMLDocument* getXMLFile(std::string xml_name) { return xmlFiles.find(xml_name)->second; };

    private:
        std::map<std::string, tinyxml2::XMLDocument*> xmlFiles;
};


#endif //SYSTEMMAP_XMLMANAGER_H
