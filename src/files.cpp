#include "files.h"
#include <cstring>
#include <fstream>
#include <cstdio>
#include "log.h"

const char* cmakeTemplate = R"(cmake_minimum_required(VERSION 3.5)
project(%s)
set (CMAKE_CXX_FILES "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (source_dir "src/")
file (GLOB source_files "${source_dir}/*.cpp" "${source_dir}/*.h")
add_executable(%s ${source_files})";

const char* defaultMain = R"(#include<iostream>
  
int main()
{
  std::cout << "Hello World!" << std::endl;
  std::cin.get(); 
})";

void generateCMakeLists(const ProjectStructure& ps)
{
  char path[ps.nameLength + 16];
  sprintf(path, "%s/CMakeLists.txt", ps.projectName);
  
  char contents[2*ps.nameLength + strlen(cmakeTemplate) + 1];
  sprintf(contents, cmakeTemplate, ps.projectName, ps.projectName);
  
  generateFile(path, contents);
}

void generateMain(const ProjectStructure& ps)
{
  char path[ps.nameLength + 14];
  sprintf(path, "%s/src/main.cpp", ps.projectName);
  
  generateFile(path, defaultMain);
}

void generateFile(const char* path, const char* contents)
{
  std::ofstream file(path);
  file << contents << std::endl;
  file.close();
}
