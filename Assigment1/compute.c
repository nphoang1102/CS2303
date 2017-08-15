/* Module for computation
 *
 * Author: Hoang Nguyen
 *
 */

/* Libraries */
#include <stdio.h>
#include "compute.h"

/* Function to get the starting day of the week of the user's input year */
int comp_start_day(int user_input) {

    // Storage variable
    int start_day = comp_ref_day;

    // Looping through the years
    for (int i = comp_ref_year; i < user_input; i++) {

        // For every non-leap year, the start day is increased by 1, 2 for leap year
        if ((i % 400) == 0) start_day += 2;
        else if ((i % 100) == 0) start_day += 1;
        else if ((i % 4) == 0) start_day += 2;
        else start_day += 1;

        // Passed 1 week, restart
        if (start_day > 6) start_day -= 7;
    }

    // Return and terminate
    return start_day;
}

/* Verify for work by back reference here 
https://www.timeanddate.com/calendar/?year=2017&country=22 */