/* Korovin Danil st128737@student.spbu.ru
   Assignment 3
*/

#ifndef AUTOBOT
#define AUTOBOT

#include <iostream>
#include "transformer.h"

class Autobot: public Transformer
{
    public:
        Autobot(std::string name, int power, int ammo, int level, int health, Weapons* weapon, std::string sound, int shield);
        int getShield() const;
        void setShield(int shield);
        void move() override;
        void jump() override;
        void transform() override;
        void sound();

    
    private:
    
        std::string Sound;
        int shieldLevel;
};

#endif
