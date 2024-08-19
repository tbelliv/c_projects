#include<stdio.h>

int main(){

    //array -- data structure that can store many values of the same data type

    double prices[] = {5.00, 10.00, 15.00, 20.00, 25.00, 30.00};
    /*
    This array can also be formatted like this if maybe we don't know our values yet.
    double prices[6];
    prices[0] = 5.00;
    prices[1] = 10.00;
    prices[2] = 15.00;
    prices[3] = 20.00;
    prices[4] = 25.00;
    prices[5] = 30.00;
    
    NOTE: this array could be init'd with a larger size and have blank entries
    
    */
    char name[] = "somechars"; //wow they're similair, huh

    printf("$%.2lf",prices[0]); //'.2' indicates 2 decimal places
    
    return 0;
}