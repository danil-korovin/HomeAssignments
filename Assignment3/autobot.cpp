/* Korovin Danil st128737@student.spbu.ru
   Assignment 3
*/

#include "autobot.h"

Autobot::Autobot(std::string name, int power, int ammo, int level, int health, Weapons* weapon, std::string sound, int shield):
    Transformer(name, power, ammo, level, health, weapon),
    shieldLevel(shield),
    Sound(sound) {}

int Autobot::getShield() const
{
    return shieldLevel;
}

void Autobot::setShield(int shield)
{
    shieldLevel = shield;
}

void Autobot::move()
{
    std::cout<<"Autobot is moving!"<<'\n';
    
}
void Autobot::jump()
{
    std::cout<<"Autobot is jumping!"<<'\n';

}

void Autobot::transform()
{
    std::cout<<"Autobot is transforming!"<<'\n';

}

void Autobot::sound()
{
    std::cout<<"Autobot says "<< Sound <<'\n';
}
