[![GNU GCC Build Matrix](https://github.com/zestframework/secret-input/actions/workflows/build.yml/badge.svg)](https://github.com/zestframework/secret-input/actions/workflows/build.yml)
[![Create Branch](https://github.com/zestframework/secret-input/actions/workflows/branch.yml/badge.svg)](https://github.com/zestframework/secret-input/actions/workflows/branch.yml)

# secret-input

This simple library enable to prompt users in interactive CLI apps for passwords without it being printed in the terminal.

Easily prompt your users for passwords on Windows, Linux or MacOS without having them revealed in the terminal


## Example
```cpp
// $main.cpp
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
```

### Build
Install GNU GCC on Ubuntu
```bash
sudo apt update && sudo apt install build-essential
```

Install GCC on MacOS
```bash
brew install gcc
```
Install MinGW GCC on Windows,
- For windows you need to install Chocolatey first
- Follow the link [https://chocolatey.org/install](https://chocolatey.org/install)
```bash
choco install mingw
```

Now finallly, Build
```bash
g++ main.cpp -o main
```
### Usage
Show asterisk when user typing.
```bash
./main -s
```
If you do not want to show asterisk do not pass `-s` flag.

## Contributing

Thank you for considering contributing to the Zest framework! Feel free to create a pull request.
###  Contrubuting guide
[Contribution Guidelines](https://github.com/zestframework/secret-input/blob/main/CONTRIBUTING.md)

### LICENSE
- MIT
