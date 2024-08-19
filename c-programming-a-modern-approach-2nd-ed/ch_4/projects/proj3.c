/*Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit number without using arithmetic to split the number into digits. Him: See the upc. c pro¬ gram of Section 4.1.*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char number[4];

    printf("Enter a three-digit number:\n");

    scanf("%3s", number);

    for (int i = 0; i < 3 / 2; ++i) {
        char temp = number[i];
        number[i] = number[2 - i];
        number[2 - i] = temp;
    }

    printf("The reversal is: %s\n", number);

    return 0;
}