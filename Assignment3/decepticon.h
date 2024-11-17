/* Korovin Danil st128737@student.spbu.ru
   Assignment 3
*/

#ifndef DECEPTICON
#define DECEPTICON

#include <iostream>
#include "transformer.h"

class Decepticon: public Transformer
{
    public:
        Decepticon(std::string name, int power, int ammo, int level, int health, Weapons* weapon, int attack, std::string sound);
        
        int getAttack() const;
        void setAttack(int attack);
        
        void move() override;
        void jump() override;
        void transform() override;
        void sound();
 
    
    private:
    
        int powerAttack;
        std::string Sound;
};

#endif
