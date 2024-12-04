/* Korovin Danil st128737@student.spbu.ru
   Assignment 4
*/

#include "otherbots.h"

Otherbots::Otherbots(std::string name, int health, Weapons* weapon, int bonus, std::string sound):
    Transformer(name, health, weapon),
    Bonus(bonus),
    Sound(sound) {}
Otherbots::Otherbots(std::string name, int power, int ammo, int level, int health, Weapons* weapon, int bonus, std::string sound):
    Transformer(name, power, ammo, level, health, weapon),
    Bonus(bonus),
    Sound(sound) {}

int Otherbots::getBonus() const
{
    return Bonus;
}

void Otherbots::setBonus(int bonus)
{
    Bonus = bonus;
}

void Otherbots::move()
{
    std::cout<<"Otherbot is moving!"<<'\n';
}
void Otherbots::jump()
{
    std::cout<<"Otherbot is jumping!"<<'\n';
}
void Otherbots::transform()
{
    std::cout<<"Otherbot is transforming!"<<'\n';
}
void Otherbots::sound()
{
    std::cout<<"Otherbot says: "<< Sound << '\n';
}
std::ostream& operator<<(std::ostream& os, const Otherbots& otherbots)
{
    os << "Power: " << otherbots.getPower()
       << ", Ammo: " << otherbots.getAmmo()
       << ", Level: " << otherbots.getLevel()
       << ", Health: " << otherbots.getHealth();
    return os;
}

bool Otherbots::operator>(const Otherbots& other) const
{
    return Bonus > other.Bonus;
}

bool Otherbots::operator<(const Otherbots& other) const
{
    return Bonus < other.Bonus;
}

bool Otherbots::operator==(const Otherbots& other) const
{
    return Bonus == other.Bonus;
}
