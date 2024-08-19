/*Translate the program fragment of Exercise 1 into a single for statement.*/

    /*1. 
    
    What output does the following program fragment produce?

    i = 9384; 
    
    do{

        printf("%d ", i); 
        i /= 10;

    }while(i > 0);
    
    */

//ANSWER:

#include<stdio.h>

int main(void){

    int i = 9384;

    printf("%d",i);

    i = i/10;

    for(i; i > 0; i /= 10){

        printf("%d", i);

    }

    return 0;
}

//the first printf statement is outside the for loop because the original program used a do-while loop, ensuring that the program would run once.