/*Write a program that prompts the user to enter a number n, then prints all even squares between 1 and n. For example, if the user enters 100. the program should print the following:

4
16
36
64
100*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("\nEnter a positive whole number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("\n0\n\n");
        exit(0);
    }

    for (int i = 1; ; i++) {
        int z = 1;

        for (int j = 0; j < i; j++) {
            z *= 2;
        }

        if (z > n) {
            break;
        }

        printf("%d\n", z);
    }

    return 0;
}
