/* Module for user interface
 *
 * Author: Hoang Nguyen
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "user_input.h"

/* Function to prompt and get input from the user */
char ui_get_input(int x, int y, int gen, char print, char pause) {
    // Storage variables
    char input[MAX_SIZE];

    // Prompt for input
    printf("Please input your grid size and generations: ");
    fgets(input, MAX_SIZE - 1, stdin);
    printf("The input is %s.\n", input);

    // Getting params from input
    char check = sscanf(input, "%d %d %d % %", &x, &y, &gen, &print, &pause);
    printf("Amount of input is %u.\n", check);
    printf("Inputs are %d %d %d % %.\n", x, y, gen, print, pause);

    // Now check for errors
    if (check < 3)  {
        printf("Not enough inputs\n");
        return 1;
    }
    switch(check) {
        case 3:
            print = 'n';
            pause = 'n';
            printf("New print value is %c, new pause value is %c.\n", print, pause);
            break;
        case 4:
            pause = 'n';
            break;
        case 5:
            if ( ((print == 'n') || (print == 'y')) && 
                            ((pause == 'n') || (pause == 'y')) )
                break;
            else {
                printf("Invalid inputs\n");
                return 1;
            } 
    }
    // for (int i = 0; i < MAX_SIZE; i++) {
    //     if (input[i] == '\n') {
    //         input[i] = '\0';
    //         break;
    //     }
    // }
    printf("Inputs are %d %d %d %c %c.\n", x, y, gen, print, pause);
    // printf("The input is %s.\n", input);

    // Return error indicator and terminate
    return 0;
}