/* Korovin Danil st128737@student.spbu.ru
   Assignment 5
*/

#ifndef DECEPTICON
#define DECEPTICON

#include <iostream>
#include "transformer.h"

class Decepticon: public Transformer
{
    public:
        Decepticon(std::string name, int power, int ammo, int level);
        void move() override;
        void jump() override;
        void transform() override;
        
};

#endif
