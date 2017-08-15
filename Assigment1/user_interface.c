/* Handle communicating with user
 *
 * Author: Hoang Nguyen
 *
 */

/* Libraries */
#include <stdio.h>
#include "user_interface.h"

/* Function to prompt user input */
unsigned int ui_input() {

    /* Setup variables, screen and prompt user */
    int input_year = 0;
    printf("              MONTHLY CALENDAR\n");
    printf("Please enter year from 1-65535 for this calendar: ");
    int check = scanf("%d", &input_year);

    /* Return user input value and check for errors in input */
    if ((check) && (input_year > 0)) return (input_year) & 0xffff;
    else return 0;
}

/* Function to print month name and days of week */
void ui_display_month(int month) {

    // Print month based on the input integer
    switch(month) {
        case 1:
            printf("      January\n");
            break;
        case 2:
            printf("      Febuary\n");
            break;
        case 3:
            printf("       March\n");
            break;
        case 4:
            printf("       April\n");
            break;
        case 5:
            printf("        May\n");
            break;
        case 6:
            printf("        June\n");
            break;
        case 7:
            printf("        July\n");
            break;
        case 8:
            printf("       August\n");
            break;
        case 9:
            printf("     September\n");
            break;
        case 10:
            printf("      October\n");
            break;
        case 11:
            printf("      November\n");
            break;
        case 12:
            printf("      December\n");
            break;
    }

    // Done with the month, now the week
    printf("Su Mo Tu We Th Fr Sa\n");
}