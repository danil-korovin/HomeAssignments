/* Korovin Danil st128737@student.spbu.ru
   Assignment 4
*/

#include "autobot.h"

Autobot::Autobot(std::string name, int health, Weapons* weapon, int shield, std::string sound):
    Transformer(name, health, weapon),
    shieldLevel(shield),
    Sound(sound) {}
Autobot::Autobot(std::string name, int power, int ammo, int level, int health, Weapons* weapon, int shield, std::string sound):
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
    std::cout<<"Autobot says: "<< Sound <<'\n';
}
std::ostream& operator<<(std::ostream& os, const Autobot& autobot)
{
    os << "Power: " << autobot.getPower()
       << ", Ammo: " << autobot.getAmmo()
       << ", Level: " << autobot.getLevel()
       << ", Health: " << autobot.getHealth();
    return os;
}

bool Autobot::operator>(const Autobot& other) const
{
    return shieldLevel > other.shieldLevel;
}

bool Autobot::operator<(const Autobot& other) const
{
    return shieldLevel< other.shieldLevel;
}

bool Autobot::operator==(const Autobot& other) const
{
    return shieldLevel == other.shieldLevel;
}
