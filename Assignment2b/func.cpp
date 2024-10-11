/* Korovin Danil st128737@student.spbu.ru
   Assignment 2b
*/
#include "myheader.h"

double func(const std::string &name) {
	size_t size = 10;
	double *sp = new double[size];
	size_t i = 0;
	std::istringstream iss(name);
	std::string st;
	while (iss >> st) 
	{
		if (st == "+")
		{
			double x = sp[--i];
			double y = sp[--i];
			sp[i++] = x + y;
		}
		else if (st == "-")
		{
			double x = sp[--i];
			double y = sp[--i];
			sp[i++] = y - x;
		}
		else if (st == "*")
		{
			double x = sp[--i];
			double y = sp[--i];
			sp[i++] = x * y;
		}
		else if (st == "/")
		{
			double x = sp[--i];
			double y = sp[--i];
			sp[i++] = y / x;
		}
		else
		{
			sp[i++] = std::stod(st);
		}
		if (i == size)
		{
			size += 1;
			double *sp2 = new double[size];
			for (size_t j = 0; j < i; ++j){
				sp2[j] = sp[j];
			}
			delete[] sp;
			sp = sp2;
		}
	}
	double ans = sp[0];
	delete[] sp;
	return ans;
}