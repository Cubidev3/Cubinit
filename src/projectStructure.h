#pragma once
#include <cstring>

struct ProjectStructure
{
  const char* projectName;
  int nameLength;
  
  ProjectStructure(const char* name) : projectName(name), nameLength(strlen(name)) {} 
};