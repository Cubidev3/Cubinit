#pragma once
#include "files.h"

static const char* cmakeTemplate = R"(cmake_minimum_required(VERSION 3.5)

project(%s)

set (CMAKE_CXX_FILES "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (source_dir "src/")

file (GLOB source_files "${source_dir}/*.cpp" "${source_dir}/*.h")

add_executable(%s ${source_files})
)";

void createCMakeLists(FileStructure* const fs, const char* projectName);