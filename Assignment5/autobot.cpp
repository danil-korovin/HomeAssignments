/* Korovin Danil st128737@student.spbu.ru
   Assignment 5
*/

#include "autobot.h"


Autobot::Autobot(std::string name, int power, int ammo, int level):
    Transformer(name, power, ammo, level) {}


void Autobot::move()
{
    std::cout<<"Autobot called move()"<<'\n';
}
void Autobot::jump()
{
    std::cout<<"Autobot called jump()"<<'\n';
}

void Autobot::transform()
{
    std::cout<<"Autobot called transform()"<<'\n';
}


