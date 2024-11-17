/* Korovin Danil st128737@student.spbu.ru
   Assignment 3
*/

#ifndef WEAPONS
#define WEAPONS

class Weapons
{
    public:
        Weapons(int harm);
        int getDamage() const;
        void setDamage(int harm);
    
    private:
        int Damage;
};

#endif
