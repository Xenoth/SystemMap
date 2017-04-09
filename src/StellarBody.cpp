//
// Created by xenoth on 11/03/17.
//

#include "StellarBody.h"



const std::string &StellarBody::getName() const {
    return name;
}

const StellarBodyType &StellarBody::getStellarBodyType() const {
    return stellarBodyType;
}

StellarBody::StellarBody(Engine* engine,double mass, double radius, const sf::Vector2<double> &position,
                         const sf::Vector2<double> &velocity, const sf::Vector2<double> &acceleration,
                         const std::string &name, StellarBodyType stellarBodyType, StellarBody* orbited_body)
                                                                                                        : PhysicEntity(mass, radius,
                                                                                                                position, velocity,
                                                                                                                acceleration),
                                                                                                            name(name),
                                                                                                            stellarBodyType(stellarBodyType),
                                                                                                            orbited_body(orbited_body)
{
    this->engine = engine;
    if( orbited_body != nullptr )
        orbit = new Orbit(orbited_body,this);
    else
        orbit = nullptr;
}

void StellarBody::addOrbiter(StellarBody* orbiter)
{
    if(orbiter != nullptr)
    {
        orbitersList.insert({orbiter->getName(),orbiter});
    }
}

void StellarBody::orbitsCalculation(const double &T)
{
    double angle = 0.0;
    double distance = 0.0;

    for( auto& it : orbitersList )
    {
        if(it.second->getMass() < getMass())
        {
            angle = calculateAngle(this->position, it.second->getPosition());
            distance = calculateDistance(this->position, it.second->getPosition());

            it.second->setAcceleration(calculateAccelerationForce(this->getMass(), it.second->getMass(), distance, angle));
            it.second->setVelocity(accelerationOnVelocity(it.second->getAcceleration(),it.second->getVelocity(), T));
            it.second->setPosition(velocityOnPosition(it.second->getVelocity(), it.second->getPosition(), T));

            it.second->orbitsCalculation(T);
        }
    }
}

void StellarBody::initGraphics()
{
    loadTexture(engine->textureManager.getRessource(stellarBodyType2String(getStellarBodyType())));

    for( auto& it : orbitersList)
    {
        it.second->initGraphics();
    }
}

void StellarBody::draw(sf::RenderWindow& window)
{
    sprite.setPosition(convert_position_physic_to_graphic(getPosition()));
    window.draw(sprite);

    orbit->update();
    orbit->draw(window);

    for( auto& it : orbitersList )
    {
        it.second->draw(window);
    }
}
