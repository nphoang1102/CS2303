#include <stdio.h>
#include "compute.h"

/* Function to get the starting day of the week of the user's input year */
int comp_start_day(int user_input) {

    // Storage variable
    int start_day = comp_ref_day;

    // Looping through the years
    for (int i = comp_ref_year; i < user_input; i++) {
        // For every non-leap year, the start day is increased by 1
        if (i % 4) start_day += 1;

        // Increased by 2 for leap year
        else start_day += 2;

        // Increased for 1 week, restart
        if (start_day > 6) start_day -= 7;
    }

    // Return and terminate
    return start_day;
}

/* Something wrong from 1700 to 1800 */