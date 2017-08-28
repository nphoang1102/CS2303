#include "hello.h"
#include "name.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Process of creating a 2d array with dimension of 4x6
    char **arr = malloc(sizeof(*arr) * 4);
    if (arr) { // Error check if array is null here
        for (int i = 0; i < 4; i++) {
            arr[i]= malloc(sizeof(*arr) * 6);
        }

    }

    // Print out the elements stored in our 2d array
    for(int i = 0; i < 4; i++){  
        for(int j = 0; j < 6; j++){ 
            arr[i][j] = i * 6 + j; 
            printf("%3d ", arr[i][j]);  
        }
        printf("\n");
    }

    // const int char_length = 256;
    // char *name = malloc(char_length);
    // printf("What is your name? ");
    // scanf("%255[^\n]s", name);
    // printf("The size of name is %u.\n", strlen(name));
    // free(name);
    // print_hello();
    // input_name();
    return 0;
}