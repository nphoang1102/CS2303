#include <stdio.h>
#include "input.h"

/* Main function for execution */
int main() {

    /* First thing first, get user's input, terminate if the user is stupid */
    unsigned int input_year = prompt_input();
    if (input_year == 0) {
        printf("Invalid input, terminate.\n");
        return 0;
    }

    /* Input looks good, proceed here */
    printf("Your input year is %u\n", input_year);

    /* Finished and terminate with no error */
    return 1;
}