/* Korovin Danil st128737@student.spbu.ru
   Assignment 5
*/

#include "decepticon.h"

Decepticon::Decepticon(std::string name, int power, int ammo, int level):
    Transformer(name, power, ammo, level) {}

void Decepticon::move()
{
    std::cout<<"Decepticon called move()"<<'\n';
}
void Decepticon::jump()
{
    std::cout<<"Decepticon called jump()"<<'\n';
}
void Decepticon::transform()
{
    std::cout<<"Decepticon called transform()"<<'\n';
}

