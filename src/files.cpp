#include "files.h"
#include<iostream>
#include<bits/stdc++.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<cstdio>
#include<cstring>

int createProjectStructure(FileStructure* const fs,const char* projectName)
{
  if (mkdir(projectName, 0777) == -1) 
  {
    std::cout << "Failed to Make Project Folder" << std::endl;
    return 1;
  }
  
  char* sourceFolder = new char[strlen(projectName) + 5];
  sprintf(sourceFolder, "%s/src", projectName);
  
  if (mkdir(sourceFolder, 0777) == -1)
  {
    std::cout << "Failed to Make Source Folder" << std::endl;
    return 1;
  }
  
  fs->projectPath = (char*)projectName;
  fs->sourcePath = sourceFolder;
  
  return 0;
}

