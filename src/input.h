#ifndef INIT_H_INCLUDED
#define INIT_H_INCLUDED

#include <cstdlib>

#if defined(_WIN32) || defined(_WIN64)
  #include "console/window.h"
#else
  #include "console/linux.h"
#endif

namespace lablnet {
  void clear(void)
  {
  #if defined(_WIN32) || defined(_WIN64)
      std::system("clear");
  #else
      std::system ("cls");
  #endif
  }
}

#endif //INIT_H_INCLUDED
