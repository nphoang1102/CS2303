/* Main module, self explanatory
 *
 * Author: Hoang Nguyen
 *
 */

#include <stdio.h>
#include "user_input.h"

/* Where the magic happens */
int main() {  
    // Storage variables
    unsigned int x, y, gen;
    char print, pause;

    // Prompt user input and check for errors
    char ui_check = ui_get_input(&x, &y, &gen, &print, &pause);
    if (ui_check) {
        printf("Invalid input, terminate.\n");
        return 1;
    }
    printf("Inputs are %u %u %u %c %c.\n", x, y, gen, print, pause);

    // Initialize our grid
    char grid[x][y];

    // Terminate with error indication
    return 0;
}   
