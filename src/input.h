#ifndef INIT_H_INCLUDED
#define INIT_H_INCLUDED

#include <cstdlib>

#ifdef _WIN32
  #include "console/window.h"
#else
  #include "console/linux.h"
#endif

namespace lablnet {
  void clear(void)
  {
  #ifdef _WIN32
      std::system("cls");
  #else
      std::system ("clear");
  #endif
  }
}

#endif //INIT_H_INCLUDED
