/* Korovin Danil st128737@student.spbu.ru
   Assignment 4
*/

#include "weapons.h"
#include "transformer.h"

Transformer::Transformer(std::string name, int health, Weapons* weapon) :
    Name(name),
    Power(0),
    Ammo(0),
    Level(1),
    heal(health),
    Weapon(weapon) {}

Transformer::Transformer(std::string name, int power, int ammo, int level, int health, Weapons* weapon):
    Name(name),
    Power(power),
    Ammo(ammo),
    Level(level),
    heal(health),
    Weapon(weapon) {}

Transformer::~Transformer() {}

void Transformer::setName(std::string name)
{
    Name = name;
}

std::string Transformer::getName()
{
    return Name;
}

void Transformer::setPower(int power)
{
    Power = power;
}
int Transformer::getPower() const
{
    return Power;
}
void Transformer::setAmmo(int ammo)
{
    Ammo = ammo;
}
int Transformer::getAmmo() const
{
    return Ammo;
}
void Transformer::setLevel(int level)
{
    Level = level;
}
int Transformer::getLevel() const
{
    return Level;
}
int Transformer::getHealth() const
{
    return heal.gethp();
}



void Transformer::shoot()
{
    Ammo--;
    heal.Injury();
}
void Transformer::recovery()
{
    Ammo++;
    heal.Healing();
}
void Transformer::move()
{
    std::cout<<"Transformer is moving!"<<'\n';
}
void Transformer::jump()
{
    std::cout<<"Transformer is jumping!"<<'\n';
    Level++;
}
void Transformer::transform()
{
    std::cout<<"Transformer is transforming!"<<'\n';
    if (Level % 2 == 0 && Power > 15)
    {
        Power -= 10;
    }
    else
    {
        Power += 10;
    }
}
std::ostream& operator<<(std::ostream& os, const Transformer& transformer)
{
    os << "Name: " << transformer.Name << ", Power: " << transformer.Power
       << ", Ammo: " << transformer.Ammo << ", Level: " << transformer.Level
       << ", Health: " << transformer.heal.gethp();
    return os;
}


bool Transformer::operator>(const Transformer& other) const
{
    return Power > other.Power;
}


bool Transformer::operator<(const Transformer& other) const
{
    return Power < other.Power;
}

bool Transformer::operator==(const Transformer& other) const
{
    return Power == other.Power;
}
