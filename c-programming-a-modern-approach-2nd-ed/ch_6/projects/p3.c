/*Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:

Enter a fraction: 6/12 In lowest terms: 1/2

Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and denominator. Then divide both the numerator and denominator by the GCD.*/

#include <stdio.h>

typedef struct {
    int a;
    int b;
} fraction;

fraction simplify(int a, int b);

int main(void) {
    int a, b;
    fraction result;

    printf("Enter a fraction for the program to output the lowest terms: ");
    scanf("%d/%d", &a, &b);
    
    result = simplify(a, b);

    printf("In lowest terms: %d/%d\n", result.a, result.b);

    return 0;
}

fraction simplify(int a, int b) {
    int n = 1;
    int gc = 1;

    while (n <= a && n <= b) {
        if (a % n == 0 && b % n == 0) {
            gc = n;
        }
        ++n;
    }

    fraction result;
    result.a = a / gc;
    result.b = b / gc;

    return result;
}