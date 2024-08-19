/* Converts a Fahrenheit temperature to Celsius */

#include<stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main (void){

    float faren, cels;

    printf("\nPlease enter a farenheight temperature:\n");
    scanf("%f", &faren);

    cels = (faren - FREEZING_PT) * SCALE_FACTOR;

    printf("The celsius equivalent of %.2f farenheight is: %.2f celsius", faren, cels);

    return 0;
}