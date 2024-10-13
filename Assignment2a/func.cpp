/* Korovin Danil st128737@student.spbu.ru
   Assignment 2a
*/
#include "myheader.h"
void func()
{
	std::ifstream infile;
	infile.open("source",std::ios::binary|std::ios::in);
	
	std::size_t fileSize = std::filesystem::file_size("source");
	
	char* buffer = new char[fileSize];
	
	std::ofstream outfile;
	outfile.open("temppdf",std::ios::binary|std::ios::out);
	infile.read(buffer, fileSize);
	
	for (int i = 0; i < fileSize /  2; ++i){
		int a = buffer[i];
		buffer[i] = buffer[fileSize - i - 1];
		buffer[fileSize - i - 1] = a;
	}
	
	outfile.write(buffer, fileSize);
	
	infile.close();
	outfile.close();
	
	delete[] buffer;
}
