#include<stdio.h>
#include<stdbool.h>

int main(){
    float temp = 25;

    if(temp <= 0 || temp >=30){
        printf("\nThe weather is bad.");
    }
    else{
        printf ("The weather is good.");
    }

    return 0;

}