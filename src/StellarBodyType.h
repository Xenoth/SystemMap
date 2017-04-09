//
// Created by xenoth on 12/03/17.
//

#ifndef SYSTEMMAP_STELLARBODYTYPE_H
#define SYSTEMMAP_STELLARBODYTYPE_H


static enum StellarBodyType {
    STAR_O=1,
    STAR_M=2,
    STAR_G=3,
    PLANET_EARTH_LIKE=11,
    PLANET_GAZ=12,
    PLANET_ROCK=13,
    PLANET_DEAD=14,
    ASTEROID_ROCK=21,
    ASTEROID_ICE=22
}Astre_type;

std::string stellarBodyType2String(StellarBodyType stellarBodyType)
{
    switch (stellarBodyType){
        case 1 :
            return "STAR_O";
        break;
        case 2 :
            return "STAR_M";
            break;
        case 3 :
            return "STAR_G";
            break;
        case 11 :
            return "PLANET_EARTH_LIKE";
            break;
        case 12 :
            return "PLANET_GAZ";
            break;
        case 13 :
            return "PLANET_ROCK";
            break;
        case 14 :
            return "PLANET_DEAD";
            break;
        case 21 :
            return "ASTEROID_ROCK";
            break;
        case 22 :
            return "ASTEROID_ICE";
            break;
        default:
            return "DEFAULT";
    }
}



#endif //SYSTEMMAP_STELLARBODYTYPE_H
