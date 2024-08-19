/*The value of the mathematical constant c can be expressed as an infinite series: e=\ + 1/1! + 1/2! +1/3! + ...

Write a program that approximates e by computing die value of 1 + 1/1!+ 1/2! + 1/3! + ... + 1/n! where n is an integer entered by the user.*/

#include <stdio.h>

int main(void) {
    int n;
    double e = 1.0;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        double factorial = 1.0;

        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }

        e += 1.0 / factorial;
    }

    printf("Approximation of e: %.10f\n", e);

    return 0;
}