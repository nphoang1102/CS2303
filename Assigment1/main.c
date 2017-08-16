/* Main module, self explanatory
 *
 * Author: Hoang Nguyen
 *
 */

/* Libraries */
#include <stdio.h>
#include "user_interface.h"
#include "compute.h"

/* The reference year and the day of the week that year starts on
https://www.timeanddate.com/calendar/?year=2017&country=22 */
int ref_year = 1;
int ref_day = 1;

/* Sun: 0,
   Mon: 1,
   Tue: 2,
   Wed: 3,
   Thu: 4,
   Fri: 5,
   Sat: 6 */

/* Main function for execution */
int main() {

    // First thing first, get user's input, terminate if the user is stupid
    unsigned int input_year = ui_input();
    if (input_year == 0) {
        printf("Invalid input, terminate.\n");
        return 0;
    }

    // Input looks good, process here
    int start_day = comp_start_day(input_year, ref_day, ref_year);
    int is_leap = comp_is_year_leap(input_year);

    // Display calendar to screen
    ui_display_year(start_day, is_leap);

    // Finished and terminate with no error
    return 1;
}