/* Korovin Danil st128737@student.spbu.ru
   Assignment 2a
*/
#include "myheader.h"
void func()
{
    std::ifstream infile;
	infile.open("source.pdf",std::ios::binary|std::ios::in);
	
	std::uintmax_t fileSize = std::filesystem::file_size("source.pdf");
	
	char* buffer = new char[fileSize];	
		
	std::ofstream outfile;
	outfile.open("temppdf.pdf",std::ios::binary|std::ios::out);
	infile.read((char *)&buffer,sizeof(buffer));
	std::reverse(buffer, buffer + fileSize);
	outfile.write((char *)&buffer,sizeof(buffer));
		 
	
	infile.close();
	outfile.close();

	delete[] buffer;
}