#pragma once
#include "projectStructure.h"
int makeProjectDir(const ProjectStructure& ps);
int makeSourceDir(const ProjectStructure& ps);
int makeBuildDir(const ProjectStructure& ps);
int makeBinDir(const ProjectStructure& ps);
int makeReleaseBinDir(const ProjectStructure& ps);
int makeDebugBinDir(const ProjectStructure& ps);
