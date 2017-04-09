//
// Created by Xenoth on 08/04/2017.
//

#include <iostream>
#include "XMLManager.h"

using namespace std;

XMLManager::~XMLManager() {
    for( const auto& sm_pair : xmlFiles )
        delete(sm_pair.second);
}

bool XMLManager::loadXMLFiles(string from_file){
    ifstream input( from_file );
    if(!input.is_open())
        return false;

    for( std::string line; getline( input, line ); )
    {
        tinyxml2::XMLDocument *tmp = new tinyxml2::XMLDocument();
        std::string key = line.substr(0, line.find(";"));
        line = line.substr(line.find_first_of(";") + 1);

        const char *cline = &line[0u];
        if(tmp->LoadFile(cline) == tinyxml2::XML_ERROR_FILE_NOT_FOUND) {
            std::cerr << "Was Unable to load the file " << key << " (" << line << ")" << std::endl;
            continue;
        }
        xmlFiles.insert({key, tmp});
        std::cout << "File " << key << " (" << cline <<") loaded" << std::endl;
    }

    return true;
}