/*Write a program that finds the largest in a series of numbers entered by the user. 
The program must prompt the user to enter numbers one by one. 
When the user enters 0 or a negative number, the program must display the largest nonnegative number entered:

Enter a number: 60
Enter a number: 38.3 
Enter a number: 4.89 
Enter a number: 100.62 
Enter a number: 75.2295 
Enter a number: 0

The largest number entered was 100.62 Notice that the numbers aren’t necessarily integers.*/

#include<stdio.h>

int main(void) {
    double arr[6];
    double largest_num;

    printf("\nPlease enter 6 numbers, separated by commas: ");
    scanf("%lf,%lf,%lf,%lf,%lf,%lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);

    largest_num = arr[0];

    for(int i = 1; i < 6; i++) {
        if(arr[i] > largest_num) {
            largest_num = arr[i];
        }
    }

    printf("\nThe largest number entered was: %.2lf\n\n", largest_num);

    return 0;
}
