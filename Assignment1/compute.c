/* Module for computation
 *
 * Author: Hoang Nguyen
 *
 */

/* Libraries */
#include <stdio.h>
#include "compute.h"

/* Function to get the starting day of the week of the user's 
input year, from a reference point */
int comp_start_day(int user_input, int ref_day, int ref_year) {

    // Looping through the years
    for (int i = ref_year; i < user_input; i++) {

        // For every non-leap year, the start day is increased by 1
        // Increased by 2 for leap year
        if ((i % 400) == 0) ref_day += 2;
        else if ((i % 100) == 0) ref_day += 1;
        else if ((i % 4) == 0) ref_day += 2;
        else ref_day += 1;

        // Passed 1 week, restart
        if (ref_day > 6) ref_day -= 7;
    }

    // Return and terminate
    return ref_day;
}

/* Verify for work by back reference here 
https://www.timeanddate.com/calendar/?year=2017&country=22 */

/* Function to check whether user input year is leap or not,
return 0 for non-leap, 1 for leap year */
int comp_is_year_leap(int year) {

    // Storage variable, default is not leap year
    int isLeap = 0;

    // Cases for leap year
    if ((year % 400) == 0) isLeap = 1;
    if (((year % 4) == 0) && (year % 100)) isLeap = 1;

    // Return and terminate
    return isLeap;
}