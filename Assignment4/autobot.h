/* Korovin Danil st128737@student.spbu.ru
   Assignment 4
*/

#ifndef AUTOBOT
#define AUTOBOT

#include <iostream>
#include "transformer.h"

class Autobot: public Transformer
{
    public:
        Autobot(std::string name, int health, Weapons* weapon, int shield, std::string sound);
        Autobot(std::string name, int power, int ammo, int level, int health, Weapons* weapon, int shield, std::string sound);
        int getShield() const;
        void setShield(int shield);
        void move() override;
        void jump() override;
        void transform() override;
        void sound();
        friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);
        bool operator>(const Autobot& other) const;
        bool operator<(const Autobot& other) const;
        bool operator==(const Autobot& other) const;
    
    private:
        int shieldLevel;
        std::string Sound;
        
};

#endif
