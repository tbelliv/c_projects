/*Write a program that asks the user to enter two integers, then calculates and displays their greatest common divisor (GCD):

Enter two integers: 12 28 Greatest common divisor: 4

Hint: The classic algorithm for computing the GCD. known as Euclid’s algorithm, goes as follows: Let m and n be variables containing the two numbers. If n is 0, then stop: m con¬ tains the GCD. Otherwise, compute the remainder when m is divided by n. Copy n into m and copy the remainder into n. Then repeat the process, starting with testing whether n is 0.*/

#include<stdio.h>

int main(void){

    int i;
    int j;
    int n = 1;

    int i_prod;
    int j_prod;

    int gcd;

    printf("\nEnter the first integer: ");
    scanf("%d", &i);

    printf("\nEnter the second integer: ");
    scanf("%d", &j);

    while(n <= i && n <= j){

        i_prod = i % n;
        j_prod = j % n;
        
        if(i_prod == 0 && j_prod == 0){

            gcd = n;

        }

        ++n;

    }

    printf("\nThe greatest common denominator between %d and %d is: %d\n\n",i,j,gcd);

    return 0;
}