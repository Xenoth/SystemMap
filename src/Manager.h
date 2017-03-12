//
// Created by xenoth on 12/03/17.
//

#ifndef SYSTEMMAP_MANAGER_H
#define SYSTEMMAP_MANAGER_H

#include <iosfwd>
#include <map>
#include <fstream>

template <typename T>
class Manager {

    public:

    ~Manager() {
        for( const auto& sm_pair : ressources )
            delete(sm_pair.second);
    }

    bool loadRessources(std::string from_file){
            std::ifstream input( from_file );
            if(!input.is_open())
                return false;

            for( std::string line; getline( input, line ); )
            {
                T *tmp = new T;
                std::string key = line.substr(0, line.find(";"));
                line = line.substr(line.find_first_of(";") + 1);

                if(!tmp->loadFromFile(line))
                    continue;
                ressources.insert({key, tmp});
            }

            return true;
        }
        inline T* getRessource(std::string ressource_name) { return ressources.find(ressource_name)->second; };

    private:
        std::map<std::string, T*> ressources;

};

#endif //SYSTEMMAP_MANAGER_H