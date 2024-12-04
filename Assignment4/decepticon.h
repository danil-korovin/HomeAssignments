/* Korovin Danil st128737@student.spbu.ru
   Assignment 4
*/

#ifndef DECEPTICON
#define DECEPTICON

#include <iostream>
#include "transformer.h"

class Decepticon: public Transformer
{
    public:
        Decepticon(std::string name, int health, Weapons* weapon, int attack, std::string sound);
        Decepticon(std::string name, int power, int ammo, int level, int health, Weapons* weapon, int attack, std::string sound);
        int getAttack() const;
        void setAttack(int attack);
        void move() override;
        void jump() override;
        void transform() override;
        void sound();
        friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
        bool operator>(const Decepticon& other) const;
        bool operator<(const Decepticon& other) const;
        bool operator==(const Decepticon& other) const;
    
    private:
        int powerAttack;
        std::string Sound;
};

#endif
