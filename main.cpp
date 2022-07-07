/**
    main.cpp
    Purpose: Main entry point.

    @author Muhammad Umer Farooq
    @profile https://lablnet.github.io
    @license MIT
    @version 1.0.0
*/

#include <string>
#include <cstring>
#include "src/input.h"

int main(int argc, char *argv[]) {
    bool show_asterisk = false;
    if (argc > 1) {
        if (strcmp(argv[1], "-s") == 0) {
            show_asterisk = true;
        }

    }
    std::string inp;
    inp = lablnet::getpass(show_asterisk);

    std::cout << inp;
    return 0;
}
