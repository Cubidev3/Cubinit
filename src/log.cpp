#include "log.h"
#include <iostream>
#include <stdlib.h>

void logError(const char* error)
{
  std::cout << error << std::endl;
}

void logMessage(const char* message)
{
  std::cout << message << std::endl;
}
