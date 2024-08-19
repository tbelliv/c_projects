/* Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit number with its digits reversed. Generalize the program so that the number can have one. two. three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10. stopping when it reaches 0.*/

#include <stdio.h>

int main(void) {
    int num;
    int digits[10];
    int size = 0;

    printf("Enter a non-negative number to reverse its digits: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Reversed digits: 0\n");
        return 0;
    }

    do {
        digits[size] = num % 10;
        ++size;
        num /= 10;
    } while (num > 0);

    printf("Reversed digits: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}
