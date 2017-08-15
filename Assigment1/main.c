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

    /* First thing first, get user's input, terminate if the user is stupid */
    unsigned int input_year = ui_input();
    if (input_year == 0) {
        printf("Invalid input, terminate.\n");
        return 0;
    }

    /* Input looks good, proceed here */
    printf("Your input year is %u\n", input_year);
    int start_day = comp_start_day(input_year, ref_day, ref_year);
    int is_leap = comp_is_year_leap(input_year);
    printf("Calculated start day is %u\n", start_day);
    if (is_leap) printf("Is a leap year\n");
    else printf("Not a leap year\n");
    for (int i = 1; i < 12; i++) {
        ui_display_month(i);
        printf("\n");        
    }

    /* Finished and terminate with no error */
    return 1;
}