#include "newfile.h"
#include<fstream>

void writeFile(char* fileName, const char* contents)
{
  std::ofstream file(fileName);
  file << contents << std::endl;
  file.close();
}

