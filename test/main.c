#include "hello.h"
#include "name.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const int char_length = 256;
    char *name = malloc(char_length);
    printf("What is your name? ");
    scanf("%255[^\n]s", name);
    printf("The size of name is %u.\n", strlen(name));
    free(name);
    // print_hello();
    // input_name();
    return 0;
}