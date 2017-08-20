/* Main module, self explanatory
 *
 * Author: Hoang Nguyen
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user_input.h"

/* Where the magic happens */
int main() {  
    // Storage variables
    int x, y, gen;
    char print, pause;

    // Prompt user input and check for errors
    char ui_check = ui_get_input(x, y, gen, print, pause);
    if (ui_check) {
        printf("Invalid input, terminate.\n");
        return 1;
    }


    return 0;
}   
