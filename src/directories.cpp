#include "directories.h"
#include "projectStructure.h"
#include "log.h"
#include <cstdio>
#include <sys/stat.h>

int makeProjectDir(const ProjectStructure& ps)
{
  if (mkdir(ps.projectName, 0777))
  {
    logError(R"(Could Not Make Project Directory.
      Please Check if:
      - Cubinit has permission to make folders
      - There is already a project with this name)"
    );
    return 1;
  }
  return 0;
}

int makeSourceDir(const ProjectStructure& ps)
{
  char path[ps.nameLength + 5];
  sprintf(path, "%s/src", ps.projectName);
  
  if (mkdir(path, 0777))
  {
    logError(R"(Could Not Make Source Directory.
      Please Check if:
      - Cubinit has permission to make folders)"
    ); 
    return 1;
   }
  
  return 0;
}

int makeBuildDir(const ProjectStructure& ps)
{
  char path[ps.nameLength + 7];
  sprintf(path, "%s/build", ps.projectName);
  
  if (mkdir(path, 0777))
  {
    logError(R"(Could Not Make Build Directory.
      Please Check if:
      - Cubinit has permission to make folders)"
    ); 
    return 1;
   }
  
  return 0;
}

int makeBinDir(const ProjectStructure& ps)
{
  char path[ps.nameLength + 5];
  sprintf(path, "%s/bin", ps.projectName);
  
  if (mkdir(path, 0777))
  {
    logError(R"(Could Not Make Bin Directory.
      Please Check if:
      - Cubinit has permission to make folders)"
    ); 
    return 1;
   }
  
  return 0;
}

int makeReleaseBinDir(const ProjectStructure& ps)
{
  char path[ps.nameLength + 13];
  sprintf(path, "%s/bin/release", ps.projectName);
  
  if (mkdir(path, 0777))
  {
    logError(R"(Could Not Make Release Directory.
      Please Check if:
      - Cubinit has permission to make folders)"
    ); 
    return 1;
   }
  
  return 0;  
}

int makeDebugBinDir(const ProjectStructure& ps)
{
  char path[ps.nameLength + 11];
  sprintf(path, "%s/bin/debug", ps.projectName);
  
  if (mkdir(path, 0777))
  {
    logError(R"(Could Not Make Debug Directory.
      Please Check if:
      - Cubinit has permission to make folders)"
    ); 
    return 1;
   }
  
  return 0;   
}
