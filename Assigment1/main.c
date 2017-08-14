#include <stdio.h>

/* Main function for execution */
int main() {

    /* Prompt the user to input the year, then
    store the user input value to a variable */
    unsigned int input_month = 0;
    printf("                      MONTHLY CALENDAR\n");
    printf("Please enter year for this calender: ");
    scanf("%d", &input_month);
    printf("Your input month is %d\n", input_month);
    return 0;

}