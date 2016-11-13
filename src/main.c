#include <stdio.h>

int main_c(int argc, char *argv[])
{
    printf("Found %d args:\n", argc);
    for (int i = 0; i < argc; ++i) {
        printf("\t- %s\n", argv[i]);
    }
    return 0;
}
