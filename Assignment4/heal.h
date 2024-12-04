/* Korovin Danil st128737@student.spbu.ru
   Assignment 4
*/

#ifndef HEAL
#define HEAL

class Heal
{
    public:
        Heal(int size):
            hp(size) {}
        void Healing()
        {
            hp++;
        }
        void Injury()
        {
            hp--;
        }
        int gethp() const
        {
            return hp;
        }
        
    private:
        int hp;
};

#endif
