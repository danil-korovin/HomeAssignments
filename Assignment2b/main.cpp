/* Korovin Danil st128737@student.spbu.ru
   Assignment 2b
*/
#include "myheader.h"

int main() {
	
    std::string in;
    std::getline(std::cin, in);
	double ans = func(in);
    std::cout << ans << std::endl;

    return 0;
}