/* Module for user interface
 *
 * Author: Hoang Nguyen
 *
 */

#include <stdio.h>
#include "user_input.h"

/* Function to prompt and get input from the user */
char ui_get_input(unsigned int *x, unsigned int *y, unsigned int *gen, char *print, char *pause) {
    // Storage variables
    char input[MAX_SIZE];

    // Prompt for input
    printf("Please input your grid size and generations: ");
    fgets(input, MAX_SIZE - 1, stdin);

    // Getting params from input
    char check = sscanf(input, "%d %d %d %c %c", x, y, gen, print, pause);

    // Now check for errors
    if ((check < 3) || (*x == 0) || (*y == 0) || (*gen == 0)) return 1;
    if ((*print != 'n') && (*print != 'y')) *print = 'n';
    if ((*pause != 'n') && (*pause != 'y')) *pause = 'n';

    // Return error indicator and terminate
    return 0;
}

/* Function to graph the field */
