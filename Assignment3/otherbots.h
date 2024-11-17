/* Korovin Danil st128737@student.spbu.ru
   Assignment 3
*/

#ifndef OTHERBOTS
#define OTHERBOTS

#include <iostream>
#include "transformer.h"

class Otherbots: public Transformer
{
    public:
        Otherbots(std::string name, int power, int ammo, int level, int health, Weapons* weapon, int bonus, std::string sound);
        
        int getBonus() const;
        void setBonus(int protection);
        
        void move() override;
        void jump() override;
        void transform() override;
        void sound();

    
    private:
        int Bonus;
        std::string Sound;
};

#endif
