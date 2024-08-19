/*Write a program that asks the user for a two-digit number, then prints the English word for the number:

Enter a two-digit number: 45 You entered the number forty-five.

Him: Break the number into two digits. Use one switch statement to print the word for the First digit ("twenty." "thirty,'' and so forth). Use a second switch statement to print the word for the second digit. Don't forget that the numbers between 11 and 19 require special treatment.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){

    int i;
    int first_i;
    int last_i;

    printf("\nEnter a two-digit number (10-99): ");
    scanf("%d",&i);

    first_i = i / 10;
    last_i = i % 10;

    printf("\nYou entered the number: ");

    switch(first_i){

        case 1:
            switch(last_i){

                case 0:
                    printf("Ten");
                    break;
                
                case 1:
                    printf("Eleven");
                    break;
                case 2:
                    printf("Twelve");
                    break;
                case 3:
                    printf("Thirteen");
                    break;
                case 4:
                    printf("Eleven");
                    break;
                case 5:
                    printf("Twelve");
                    break;
                case 6:
                    printf("Thirteen");
                    break;
                case 7:
                    printf("Seventeen");
                    break;
                case 8:
                    printf("Eighteen");
                    break;
                case 9:
                    printf("Nineteen");
                    break;
                default:
                    printf("Something went wrong.");
                    break;
            }

        case 2:
            printf("Twenty");
            break;
        case 3:
            printf("Thirty");
            break;
        case 4:
            printf("Forty");
            break;
        case 5:
            printf("Fifty");
            break;
        case 6:
            printf("Sixty");
            break;
        case 7:
            printf("Seventy");
            break;
        case 8:
            printf("Eighty");
            break;
        case 9:
            printf("Ninety");
            break;
        default:
            printf("Something went wrong");
            break;
    }

    switch(last_i){

        case 1:
            printf("-one");
            break;
        case 2:
            printf("-two");
            break;
        case 3:
            printf("-three");
            break;
        case 4:
            printf("-four");
            break;
        case 5:
            printf("-five");
            break;
        case 6:
            printf("-six");
            break;
        case 7:
            printf("-seven");
            break;
        case 8:
            printf("-eight");
            break;
        case 9:
            printf("-nine");
            break;

        default:
            exit(0);
            break;
    }

    return 0;

}