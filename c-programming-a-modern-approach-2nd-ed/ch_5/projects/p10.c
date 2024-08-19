/*Using the switch statement, write a program that converts a numerical grade into a letter grade:

Enter numerical grade: 84 Letter grade: B

Use the following grading scale: A = 90-100. B = 80-89, C = 70-79, D = 60-69. F = 0-59. Print an error message if the grade is larger than 100 or less than 0. Him: Break the grade into two digits, then use a switch statement to test the ten’s digit.*/

#include<stdio.h>

int main(void){

    int num_grade;

    printf("\nEnter numerical grade: ");
    scanf("%d",&num_grade);

    num_grade = num_grade / 10;

    switch(num_grade){

        case 10: case 9:
            printf("\nLetter grade: A\n\n");
            break;

        case 8:
            printf("\nLetter grade: B\n\n");
            break;

        case 7:
            printf("\nLetter grade: C\n\n");
            break;

        case 6:
            printf("\nLetter grade: D\n\n");
            break;

        case 5: case 4: case 3: case 2: case 0:
            printf("\nLetter grade: F\n\n");
            break;

        default:
            printf("\nSomething went wrong.\n\n");

    }



    return 0;
}