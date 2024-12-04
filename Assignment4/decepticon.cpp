/* Korovin Danil st128737@student.spbu.ru
   Assignment 4
*/

#include "decepticon.h"

Decepticon::Decepticon(std::string name, int health, Weapons* weapon, int attack, std::string sound):
    Transformer(name, health, weapon),
    powerAttack(attack),
    Sound(sound){}
Decepticon::Decepticon(std::string name, int power, int ammo, int level, int health, Weapons* weapon, int attack, std::string sound):
    Transformer(name, power, ammo, level, health, weapon),
    powerAttack(attack),
    Sound(sound){}

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
std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon)
{
    os << "Power: " << decepticon.getPower()
       << ", Ammo: " << decepticon.getAmmo()
       << ", Level: " << decepticon.getLevel()
       << ", Health: " << decepticon.getHealth();
    return os;
}

bool Decepticon::operator>(const Decepticon& other) const
{
    return powerAttack > other.powerAttack;
}

bool Decepticon::operator<(const Decepticon& other) const
{
    return powerAttack < other.powerAttack;
}

bool Decepticon::operator==(const Decepticon& other) const
{
    return powerAttack == other.powerAttack;
}
