#include <iostream>
#include "projectStructure.h"
#include "log.h"
#include "directories.h"
#include "files.h"
  
int main(int argc, const char** argv)
{
  //Check Argument Count
  if (argc != 2) 
  {
    logError("Invalid Argument Count.");
    logError("Usage: ./Cubinit [Project Name]");
    return 1;
  }
  //Create Folders
  const ProjectStructure ps(argv[1]);
  if (makeProjectDir(ps)) return 2;
  if (makeSourceDir(ps)) return 3;
  if (makeBuildDir(ps)) return 4;
  if (makeBinDir(ps)) return 5;
  //Generate CMakeLists.txt
  generateCMakeLists(ps);
  //Generate main.cpp
  generateMain(ps);
  
  //Generate Build.sh and Run.sh
  generateBuildScript(ps);
  generateRunScript(ps);
  logMessage("Succesifully Created Project.");
}

