/*Write a program that calculates how many digits a number contains:

Enter a number: 374

The number 374 has 3 digits

You may assume that the number has no more than four digits. Hint: Use if statements to test the number. For example, if the number is between 0 and 7, it has one digit. If the number is between 10 and 99. it has two digits.*/

#include <stdio.h>

int main(void) {
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    while (i < 0 || i > 9999) {
        printf("Please enter a non-negative integer with no more than four digits: ");
        scanf("%d", &i);
    }

    if (i >= 0 && i <= 9) {
        printf("The number %d has 1 digit.\n", i);
    } else if (i >= 10 && i <= 99) {
        printf("The number %d has 2 digits.\n", i);
    } else if (i >= 100 && i <= 999) {
        printf("The number %d has 3 digits.\n", i);
    } else if (i >= 1000 && i <= 9999) {
        printf("The number %d has 4 digits.\n", i);
    }

    return 0;
}
