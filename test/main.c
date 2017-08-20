#include "hello.h"
#include "name.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    const int char_length = 256;
    char *name = malloc(char_length);
    printf("What is your name? ");
    scanf("%255[^\n]s", name);
    printf("F*ck you %s!\n", name);
    free(name);
    // print_hello();
    // input_name();
    return 0;
}