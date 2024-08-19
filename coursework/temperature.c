#include<stdio.h>
#include<ctype.h>

int main(){

    char unit;
    float temp;
    float convert_temp;

    printf("\nIs the temperature in (f) or (c)? ");
    scanf("%c", &unit);

    unit = tolower(unit);

    if(unit == 'f'){

        printf("\nThe temperature is currently in farenheight.");
        printf("\nEnter the temperature in farenheight: ");
        scanf("%f", &temp);
        convert_temp = ((temp - 32) * 5) / 9;
        printf("\nFarenheight: %.1f, Celcius: %.1f", temp, convert_temp);

    }

    else if (unit == 'c'){

        printf("\nThe temperature is currently in celcius.");
        printf("\nEnter the temperature in celcius: ");
        scanf("%f", &temp);
        convert_temp = (temp * 9 / 5) + 32;
        printf("\nCelcius: %.1f, Farenheight: %.1f\n", temp, convert_temp);
    }

    else{

        printf("\nThe entered value is not a valid unit of measurement (%c).", unit);

    }


    return 0;
}