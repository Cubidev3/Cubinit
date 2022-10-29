#include "defaultmain.h"
#include <cstring>
#include <cstdio>
#include "newfile.h"

void createDefaultMain(const FileStructure* fs)
{
  char filepath[strlen(fs->sourcePath) + 10];
  sprintf(filepath, "%s/main.cpp", fs->sourcePath);
  writeFile(filepath, defaultMain);
}
