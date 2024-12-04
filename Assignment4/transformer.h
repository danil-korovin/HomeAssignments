/* Korovin Danil st128737@student.spbu.ru
   Assignment 4
*/

#ifndef TRANSFORMER
#define TRANSFORMER
#include <iostream>
#include "heal.h"
#include "weapons.h"

class Transformer
{
    public:
        Transformer(std::string name, int health, Weapons* weapon);
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
        friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);
        bool operator>(const Transformer& other) const;
        bool operator<(const Transformer& other) const;
        bool operator==(const Transformer& other) const;

    private:
        std::string Name;
        int Power;
        int Ammo;
        int Level;
        Heal heal;
        Weapons* Weapon;
};

#endif
