#include <stdio.h>

int main() {
    int integer = 0;
    float floating_p = 0;
    double double_p = 0;
    char word = 0;

    printf("The size of 1 integer is %d.\n", sizeof(integer));
    printf("The size of 1 flotaing point is %d.\n", sizeof(floating_p));
    printf("The size of 1 double precision number is %d.\n", sizeof(double_p));
    printf("The size of 1 character is %d.\n", sizeof(word));
    return 0;
}