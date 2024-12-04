/* Korovin Danil st128737@student.spbu.ru
   Assignment 4
*/

#ifndef OTHERBOTS
#define OTHERBOTS

#include <iostream>
#include "transformer.h"

class Otherbots: public Transformer
{
    public:
        Otherbots(std::string name, int health, Weapons* weapon, int bonus, std::string sound);
        Otherbots(std::string name, int power, int ammo, int level, int health, Weapons* weapon, int bonus, std::string sound);
        int getBonus() const;
        void setBonus(int protection);
        void move() override;
        void jump() override;
        void transform() override;
        void sound();
        friend std::ostream& operator<<(std::ostream& os, const Otherbots& otherbots);
        bool operator>(const Otherbots& other) const;
        bool operator<(const Otherbots& other) const;
        bool operator==(const Otherbots& other) const;
    
    private:
        int Bonus;
        std::string Sound;
};

#endif
