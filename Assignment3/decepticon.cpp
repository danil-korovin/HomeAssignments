/* Korovin Danil st128737@student.spbu.ru
   Assignment 3
*/

#include "decepticon.h"

Decepticon::Decepticon(std::string name, int power, int ammo, int level, int health, Weapons* weapon, int attack, std::string sound):
    Transformer(name, power, ammo, level, health, weapon),
    Sound(sound),
    powerAttack(attack) {}

int Decepticon::getAttack() const
{
    return powerAttack;
}

void Decepticon::setAttack(int attack)
{
    powerAttack = attack;
}

void Decepticon::move()
{
    std::cout<<"Decepticon is moving!"<<'\n';
    
}
void Decepticon::jump()
{
    std::cout<<"Decepticon is jumping!"<<'\n';

}
void Decepticon::transform()
{
    std::cout<<"Decepticon is transforming!"<<'\n';

}

void Decepticon::sound()
{
    std::cout<<"Decepticon says: "<< Sound <<'\n';
}
