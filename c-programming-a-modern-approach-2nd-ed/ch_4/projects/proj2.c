/*Extend the program in Programming Project I to handle three -digit numbers*/

#include <stdio.h>

int main(void) {
    int number;
    int hundreds_digit, tens_digit, units_digit;

    printf("Enter a three-digit number:\n");

    scanf("%d", &number);

    hundreds_digit = number / 100;
    tens_digit = (number / 10) % 10;
    units_digit = number % 10;

    printf("The reversal is: %d%d%d\n", units_digit, tens_digit, hundreds_digit);

    return 0;
}