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

    // Setup variables, screen and prompt user
    int input_year = 0;
    printf("Please enter year from 1-9999 for this calendar: ");
    int check = scanf("%d", &input_year);

    // Return user input value and check for errors in input
    if ((check) && (input_year > 0) && (input_year < 10000)) {
        printf("\n********************\n");
        printf("  CALENDAR OF %0004d\n\n", input_year);
        return (input_year) & 0xffff;
    }
    else return 0;
}

/* Function to print month name and days of week, return start day for next month */
int ui_display_month(int month, int start_day, int isLeap) {
    
    // Initialize days in a month
    int days = 0;

    // Print month based on the input integer
    switch(month) {
        case 1:
            printf("      January\n");
            days = 31;
            break;
        case 2:
            printf("      Febuary\n");
            if (isLeap) days = 29;
            else days = 28;
            break;
        case 3:
            printf("       March\n");
            days = 31;
            break;
        case 4:
            printf("       April\n");
            days = 30;
            break;
        case 5:
            printf("        May\n");
            days = 31;
            break;
        case 6:
            printf("        June\n");
            days = 30;
            break;
        case 7:
            printf("        July\n");
            days = 31;
            break;
        case 8:
            printf("       August\n");
            days = 31;
            break;
        case 9:
            printf("     September\n");
            days = 30;
            break;
        case 10:
            printf("      October\n");
            days = 31;
            break;
        case 11:
            printf("      November\n");
            days = 30;
            break;
        case 12:
            printf("      December\n");
            days = 31;
            break;
    }

    // Done with the month, now the week
    printf("Su Mo Tu We Th Fr Sa\n");

    // Now move on with the days, make space for the start day first
    for (int i = 0; i < start_day; i++) {
        printf("   ");
    }

    // Then start filling up weeks by weeks
    for (int i = 1; i <= days; i++) {
        printf("%2d ", i);
        start_day++;
        if (start_day > 6) {
            start_day -= 7;
            if (i != days) printf("\n");
        }
    }

    // Leave some space accordingly for some visual pleasing
    if (month != 12) printf("\n\n--------------------");
    else printf("\n");
    printf("\n");

    // Return the start day of the week for next month and terminate
    return start_day;
}

/* Function to print out the whole year */
void ui_display_year(int start_day, int isLeap) {
    
    // Print out month by month and update start day for next month
    for (int i = 1; i < 13; i++) {
        start_day = ui_display_month(i, start_day, isLeap);
    }
}
