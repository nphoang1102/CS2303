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
    char print, pause, **grid;

    // Prompt user input and check for errors
    char ui_check = ui_get_input(&x, &y, &gen, &print, &pause, grid);
    if (ui_check) {
        printf("Invalid input, terminate.\n");
        return 1;
    }
    printf("Inputs are %u %u %u %c %c.\n", x, y, gen, print, pause);
    printf("Our total grid size is %u.\n", (x*y));

    // Initialize our grid
    // printf("%3d ", grid[0][0]); 
    // for(int i = 0; i < x; i++){  
    //     for(int j = 0; j < y; j++){ 
    //         grid[i][j] = i * x + j;
    //         printf("%2d ", (i * x + j));
    //     }
    //     printf("\n");
    // }

    // Free up memory and terminate with no error indication
    free(grid);
    return 0;
}   
