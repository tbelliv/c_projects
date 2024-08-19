#include<stdio.h>
#include<stdbool.h>

int main(){

    //logical operators = && (AND) checks if more than one conditions are true

    float temp = 25;
    bool sunny = false;

    if(temp >= 0 && temp <= 30 && sunny == 1){
        printf("\nThe weather is good.");
    }

    else {
        printf("The weather is poor.");
    }

    return 0;
}