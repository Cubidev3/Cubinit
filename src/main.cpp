#include<iostream>
#include "newfile.h"
#include "files.h"
#include "cmakelists.h"
#include "defaultmain.h"

int main(int argc, char *argv[])
{
  if (argc != 2) 
  {
    std::cout << "Invalid Argument Count" << std::endl;
    return 1;
  }
  
  FileStructure fs;
  if (createProjectStructure(&fs, argv[1]))
    return 2;
  
  createCMakeLists(&fs, argv[1]);
  createDefaultMain(&fs);  
  
  std::cout << "Successfully created project " << argv[1] << std::endl;
  return 0;
}
