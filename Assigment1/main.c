#include <stdio.h>
#include "input.h"

/* Main function for execution */
int main() {

    /* First thing first, get user's input */
    unsigned int input_month = prompt_input();
    printf("Your input month is %u\n", input_month);

    /* Finished and terminate */
    return 0;
}