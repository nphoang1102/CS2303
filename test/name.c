#include <stdio.h>
#include "name.h"

void input_name() {
    char *first[10];
    char *last[10];
    printf("Please enter you name: ");
    int scan_return = scanf("%s %s", first, last);
    printf("Hello %s %s\n", first, last);
}