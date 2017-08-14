#include <stdio.h>

/* Function to prompt user input */
unsigned int prompt_input() {

    /* Setup variables, screen and prompt user */
    unsigned int input_month = 0;
    printf("                      MONTHLY CALENDAR\n");
    printf("Please enter year for this calender: ");
    scanf("%d", &input_month);

    /* Nagging for correct input */
    while (input_month == 0) {
        printf("Invalid input. Please try again: ");
        scanf("%d", &input_month);
    }

    /* Bound and return user input value */
    input_month &= 0xfff;
    return input_month;
}