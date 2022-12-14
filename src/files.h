#pragma once
#include "projectStructure.h"
void generateCMakeLists(const ProjectStructure& ps);
void generateMain(const ProjectStructure& ps);
void generateFile(const char* path, const char* contents);
void generateBuildScript(const ProjectStructure& ps);
void generateRunScript(const ProjectStructure& ps);