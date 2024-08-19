/*Modify Programming Project 11 so that the program continues adding terms until the cur¬ rent term becomes less than e, where e is a small (floating-point) number entered by the user.*/

#include <stdio.h>

int main(void) {
    double epsilon;
    double term;
    double e = 1.0;
    int i = 1;

    printf("Enter a small floating-point number (epsilon): ");
    scanf("%lf", &epsilon);

    do {
        double factorial = 1.0;

        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }

        term = 1.0 / factorial;
        e += term;
        ++i;
    } while (term >= epsilon);

    printf("Approximation of e: %.10f\n", e);

    return 0;
}