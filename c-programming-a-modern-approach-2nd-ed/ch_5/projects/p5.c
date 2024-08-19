/*
In one state, single residents are subject to die following income tax:

************************************************************
Income                          Amount of tax
************************************************************

Not over $750                   1% of income

$750-$2.250                     $7.50 plus 2% of amount over $750

$2,250-53.750                   $37.50 plus 3% of amount over $2,250

$3,750-55.250                   $82.50 plus 4% of amount over $3,750

$5,250-$7.000                   $142.50 plus 5% of amount over $5,250

Over $7,000                     $230.00 plus 6% of amount over $7,000

Write a program that asks the user to enter the amount of taxable income, then displays the tax due.
*/

//There is an error in this question. 
//The max income in one tax bracket is equal to the min income in the next tax bracket.
//I will be changing this answer to improve accuracy.

#include<stdio.h>

int main(void){

    float income;
    float taxes;

    printf("\nEnter the amount of taxable income: ");
    scanf("%f",&income);

    if(income <= 749.99){

        taxes = (income * 0.01);

    }

    else if(income >= 750 && income <= 53749.99){

        taxes = (7.50);
        taxes += (0.02*(income - 750));

    }

    else if(income >= 2250 && income <= 3749.99){

        taxes = (37.50);
        taxes += (0.03*(income - 2250));

    }

    else if(income >= 3750 && income <= 5249.99){

        taxes = (82.50);
        taxes += (0.04*(income - 3750));

    }

    else if(income >= 5250 && income <= 6999.99){

        taxes = (142.50);
        taxes += (0.05*(income - 5250));

    }

    else if(income > 7000){

        taxes = (230.00);
        taxes += (0.06*(income - 7000));

    }

    else{
        taxes = 0;
    }

    if(taxes > 0){

        printf("\nTaxes due: $%.2f",taxes);

    }

    else{

        printf("No taxes due.");

    }

    return 0;
}