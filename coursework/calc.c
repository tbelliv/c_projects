#include<stdio.h>
#include<math.h>

int main(){

    char operator;
    long double val1;
    long double val2;
    long double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("\nEnter number 1: ");
    scanf("%Lf", &val1);

    printf("\nEnter number 2: ");
    scanf("%Lf", &val2);

    switch(operator){

        default:
            printf("\n(%c)Operator is not valid.", operator);
            break;

        case '+':
            result = val1 + val2;
            printf("%Lf\n", result);
            break;

        case '-':
            result = val1 - val2;
            printf("%Lf\n", result);
            break;

        case '*':
            result = val1 * val2;
            printf("%Lf\n", result);
            break;

        case '/':
            result = val1 / val2;
            printf("%Lf\n", result);
            break;

    }


    return 0;

}