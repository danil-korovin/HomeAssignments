/* Korovin Danil st128737@student.spbu.ru
   Assignment 4
*/

#include "weapons.h"

Weapons::Weapons(int harm):
    Damage(harm) {}

int Weapons::getDamage() const
{
    return Damage;
}
void Weapons::setDamage(int harm)
{
    Damage = harm;
}
