// https://sourceforge.net/p/predef/wiki/OperatingSystems/

#include <stdio.h>

int main(int argc, char *argv[]) {
#ifdef _WIN32
    printf("Windows (32-bit or 64-bit)\n");
#endif

#ifdef __APPLE__
    printf("macOS\n");
#endif

#ifdef __linux__
    printf("Linux\n");
#endif

#ifdef __unix__
    printf("Unix-like (maybe Linux or macOS)\n");
#endif
    return 0;
}
