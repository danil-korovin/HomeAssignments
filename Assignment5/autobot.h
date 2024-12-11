/* Korovin Danil st128737@student.spbu.ru
   Assignment 5
*/

#ifndef AUTOBOT
#define AUTOBOT

#include <iostream>
#include "transformer.h"

class Autobot: public Transformer
{
    public:
        Autobot(std::string name, int power, int ammo, int level);
        void move() override;
        void jump() override;
        void transform() override;
};

#endif
