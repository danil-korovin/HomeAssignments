/* Korovin Danil st128737@student.spbu.ru
   Assignment 5
*/

#ifndef TRANSFORMER
#define TRANSFORMER
#include <iostream>


class Transformer
{
    public:
        Transformer(std::string name, int power, int ammo, int level);
        virtual ~Transformer();
        std::string getName();
        void setName(std::string name);
        int getPower() const;
        void setPower(int power);
        int getAmmo() const;
        void setAmmo(int ammo);
        int getLevel() const;
        void setLevel(int level);
      
        virtual void move();
        virtual void jump();
        virtual void transform();
        

    private:
        std::string Name;
        int Power;
        int Ammo;
        int Level;

};

#endif
