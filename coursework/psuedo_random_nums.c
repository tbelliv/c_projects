#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //psuedo random numbers

    srand(time(0)); //current time

    //the current time is needed as these numbers are psuedo-random and require a 'seed' for which to base the number generation

    int num1 = rand() % 6; 
    /*this will give us a random number between 1 and 5 (computers start with 0 and '% 6' indicated the max number to be 6 '5 if the first number is 0')*/

    printf("\n%d\n",num1);


    
    return 0;
}