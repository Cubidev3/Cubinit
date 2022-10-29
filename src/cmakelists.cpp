#include "newfile.h"
#include <cstring>
#include <cstdio>
#include "cmakelists.h"
#include <iostream>

void createCMakeLists(FileStructure* const fs, const char* projectName)
{
  char contents[2*strlen(projectName) + strlen(cmakeTemplate) + 1];
  sprintf(contents, cmakeTemplate, projectName, projectName);
 
  char filepath[strlen(fs->projectPath) + 16];
  sprintf(filepath, "%s/CMakeLists.txt", fs->projectPath);
  
  writeFile(filepath, contents);
}



