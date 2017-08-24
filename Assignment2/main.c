/* Main module, self explanatory
 *
 * Author: Hoang Nguyen
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "user_input.h"

/* Where the magic happens */
int main() {  
    // Storage variables
    unsigned int x, y, gen;
    char print, pause, *grid;

    // Prompt user input and check for errors
    char ui_check = ui_get_input(&x, &y, &gen, &print, &pause, grid);
    if (ui_check) {
        printf("Invalid input, terminate.\n");
        return 1;
    }
    printf("Inputs are %u %u %u %c %c.\n", x, y, gen, print, pause);
    printf("Our total grid size is %u.\n", sizeof(grid));

    // Initialize our grid
    // char grid[x][y], init[x][y];
    // ui_init_config(*init, x, y);
    // ui_grid_plot(*grid, x, y);

    // Free up memory and terminate with no error indication
    free(grid);
    return 0;
}   
