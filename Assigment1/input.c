#include <stdio.h>
#include "input.h"

/* Function to prompt user input */
unsigned int prompt_input() {

    /* Setup variables, screen and prompt user */
    int input_year = 0;
    printf("              MONTHLY CALENDAR\n");
    printf("Please enter year from 1-65535 for this calendar: ");
    int check = scanf("%d", &input_year);

    /* Return user input value and check for errors in input */
    if ((check) && (input_year > 0)) return (input_year) & 0xffff;
    else return 0;
}