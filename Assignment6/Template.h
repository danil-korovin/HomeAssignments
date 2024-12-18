/* Korovin Danil st128737@student.spbu.ru
   Assignment 6
*/

#ifndef TEMPLATE_H
#define TEMPLATE_H
#include <vector>
#include <iostream>

template <typename Type>
class Template
{
public:
    Template(Type obj, int n, std::vector<float>vec) : init(obj), num(n), vec(vec) {}

    bool foo()
    {
        return init.bar(num, vec);
    }

private:
    Type init;
    int num = 0;
    std::vector<float> vec;
};

template <>
class Template<int>
{
public:
    Template(int, int, std::vector<float>) {}

    bool foo()
    {
        return true;
    }
};

template <>
class Template<double>
{
public:
    Template(double, int, std::vector<float>) {}

    bool foo()
    {
        return false;
    }
};
#endif
