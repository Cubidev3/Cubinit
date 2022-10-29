#pragma once
struct FileStructure
{
  char* projectPath;
  char* sourcePath;
};

int createProjectStructure(FileStructure* const fs, const char* projectName);
