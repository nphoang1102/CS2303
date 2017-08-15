#include <stdio.h>

/* Function to prompt user input */
unsigned int prompt_input() {

    /* Setup variables, screen and prompt user */
    unsigned int input_year = 0;
    printf("              MONTHLY CALENDAR\n");
    printf("Please enter year for this calender: ");
    scanf("%d", &input_year);

    /* Nagging for correct input and bound */
    while (input_year == 0) {
        printf("Invalid input. Please try again: ");
        scanf("%d", &input_year);
        input_year &= 0xfff;
    }

    /* Return user input value */
    return input_year;
}