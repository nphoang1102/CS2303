#include <stdio.h>
#include "input.h"

/* Main function for execution */
int main() {

    /* First thing first, get user's input */
    unsigned int input_year = prompt_input();
    printf("Your input year is %u\n", input_year);

    /* Finished and terminate */
    return 0;
}