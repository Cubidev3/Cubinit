#pragma once
#include "files.h"

static const char* defaultMain = R"(#include<iostream>
  
int main()
{
  std::cout << "Hello World!" << std::endl;
  std::cin.get(); 
})";

void createDefaultMain(const FileStructure* fs);
