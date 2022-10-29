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
