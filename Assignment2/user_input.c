/* Module for user interface
 *
 * Author: Hoang Nguyen
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "user_input.h"

/* Function to prompt and get input from the user */
char ui_get_input(unsigned int *x, unsigned int *y, unsigned int *gen, char *print, char *pause, char **grid) {
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

    // Proceed to allocate memory for our 2d x-by-y array
    printf("We have a %d-by-%d matrix.\n", *x, *y);
    malloc(sizeof(*grid) * (*x));
    if (grid) {
        for (int i = 0; i < (*x); i++) {
            grid[i]= malloc(sizeof(**grid) * (*y));
        }
        grid[0][0] = 0;
    }
    printf("%d", grid[0][0]);

    // Return no error indicator
    return 0;
}

/* Prompt user for initial configuration */
void ui_init_config(char *init, unsigned int x, unsigned int y) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("o ");
        }
        printf("\n");
    }
}


/* Function to graph the field */
void ui_grid_plot(char *grid, unsigned int x, unsigned int y) {
    unsigned int row = x;
    unsigned int column = y;
    printf("The we have a %ux%u grid.\n", row, column);
}