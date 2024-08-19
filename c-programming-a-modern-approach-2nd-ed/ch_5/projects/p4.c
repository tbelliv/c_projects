/*Here's a simplified version of the Beaufort scale, which is used to estimate wind force:

Speed (knots)       Description

Less than 1         Calm

1-3                 Light air

4-27                Breeze

28-47               Gale

48-63               Storm

Above 63            Hurricane

Write a program that asks the user to enter a w ind speed (in knots), then displays the corresponding description.*/

#include<stdio.h>

int main(void){

    int wind_speed;

    printf("\nEnter a w ind speed (in knots): ");
    scanf("%d", &wind_speed);

    if(wind_speed < 1){

        printf("Calm");

    }

    else if(wind_speed == 1 || wind_speed <= 3){

        printf("Light air");

    }

    else if(wind_speed == 4 || wind_speed <= 27){

        printf("Breeze");

    }

    else if(wind_speed == 28 || wind_speed <= 47){

        printf("Gale");

    }

    else if(wind_speed == 48 || wind_speed <= 63){

        printf("Storm");

    }

    else if(wind_speed > 63){

        printf("Hurricane");

    }

    else{

        printf("Wind speed invalid");

    }

    return 0;
}