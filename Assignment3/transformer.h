/* Korovin Danil st128737@student.spbu.ru
   Assignment 3
*/
#ifndef TRANSFORMER
#define TRANSFORMER
#include <iostream>
#include "heal.h"
#include "weapons.h"

class Transformer
{
    public:
        Transformer(std::string name, int power, int ammo, int level, int health, Weapons* weapon);
        ~Transformer();
        std::string getName();
        void setName(std::string name);
        int getPower() const;
        void setPower(int power);
        int getAmmo() const;
        void setAmmo(int ammo);
        int getLevel() const;
        void setLevel(int level);
        int getHealth() const;
        void shoot();
        void recovery();
        virtual void move();
        virtual void jump();
        virtual void transform();

    private:
        std::string Name;
        int Power;
        int Ammo;
        int Level;
        Weapons* Weapon;
        Heal heal;
};

#endif
