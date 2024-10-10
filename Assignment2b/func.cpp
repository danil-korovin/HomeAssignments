/* Korovin Danil st128737@student.spbu.ru
   Assignment 2b
*/
#include "myheader.h"

int func(const std::string &name) {
    std::stack<int> stack;

    std::istringstream iss(name);
    std::string st;
    while (iss >> st) 
	{

        if (st == "+")
		{
			int x = stack.top();
			stack.pop();
			int y = stack.top();
			stack.pop();
			stack.push(y + x);
		}	
		else if (st == "-")
		{
			int x = stack.top();
			stack.pop();
			int y = stack.top();
			stack.pop();
			stack.push(y - x);
		}	
		else if (st == "*")
		{
			int x = stack.top();
			stack.pop();
			int y = stack.top();
			stack.pop();
			stack.push(y * x);
		}	
		else if (st == "/")
		{
			int x = stack.top();
			stack.pop();
			int y = stack.top();
			stack.pop();
			stack.push(y / x);
		}	
		else 
		{
            stack.push(std::stoi(st));
        }

    }

    return stack.top();
}