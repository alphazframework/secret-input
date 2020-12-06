/**
    main.cpp
    Purpose: Main entry point.

    @author Muhammad Umer Farooq
    @profile https://lablnet.github.io
    @license MIT
    @version 1.0.0
*/

#include <string>
#include "src/input.h"

int main(int argc, char *argv[]) {
    // ...
    std::string inp;
    inp = lablnet::getpass("Prompt: ", true);

    std::cout << inp;
    return 0;
}
