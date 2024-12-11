/* Korovin Danil st128737@student.spbu.ru
   Assignment 5
*/

#include "transformer.h"

Transformer::Transformer(std::string name, int power, int ammo, int level):
    Name(name),
    Power(power),
    Ammo(ammo),
    Level(level) {}

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

void Transformer::move()
{
    std::cout<<"Transformer called move()"<<'\n';
}
void Transformer::jump()
{
    std::cout<<"Transformer called jump()"<<'\n';
    Level++;
}
void Transformer::transform()
{
    std::cout<<"Transformer called transform()"<<'\n';
}

