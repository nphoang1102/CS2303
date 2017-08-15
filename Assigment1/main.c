/* Main module, self explanatory
 *
 * Author: Hoang Nguyen
 *
 */

/* Libraries */
#include <stdio.h>
#include "input.h"
#include "compute.h"

/* Setup some global variables here, reference from
https://www.timeanddate.com/calendar/?year=2017&country=22 */
comp_ref_year = 1;
comp_ref_day = 1;


/* Main function for execution */
int main() {

    /* First thing first, get user's input, terminate if the user is stupid */
    unsigned int input_year = prompt_input();
    if (input_year == 0) {
        printf("Invalid input, terminate.\n");
        return 0;
    }

    /* Input looks good, proceed here */
    printf("Your input year is %u\n", input_year);
    int start_day = comp_start_day(input_year);
    printf("Calculated start day is %u\n", start_day);

    /* Finished and terminate with no error */
    return 1;
}