/* Korovin Danil st128737@student.spbu.ru
   Assignment 6
*/

#ifndef TESTS_H
#define TESTS_H

class Class1
{
public:
    bool bar(int num, std::vector<float>&)
    {
        if (num > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int c_1_1()
    {
        return 0;
    }
    float c_1_2()
    {
        return 0.0f;
    }
    void c_1_3() {  }
};

class Class2
{
public:
    bool bar(int, std::vector<float>& vec)
    {
        if (vec.empty())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    int c_2_1()
    {
        return 0;
    }
    float c_2_2()
    {
        return 0.0f;
    }
    void c_2_3() {  }
};

class Class3
{
public:
    bool bar(int num, std::vector<float>& vec)
    {
        if (num == static_cast<int>(vec.size()) * -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int c_3_1()
    {
        return 0;
    }
    float c_3_2()
    {
        return 0.0f;
    }
    void c_3_3() {  }
};
#endif
