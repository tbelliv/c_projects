Exercises

1. Create and run Kemighan and Ritchie's famous “hello, world" program:

#include <stdio.h>

int main(void)

{

printf("hello, world\n");

}

//1. 



#include<stdio.h>

int main(void){

printf("\nHello, world!\n\n");

return 0;
}



2. Consider the following program:

#include <stdio.h>

int main(void)

{

printf("Parkinson 1 s Law:\nWork expands so as to ");

printf("fill the time\n");

printf("available for its completion.\n");

return 0;

}

(a) Identify the directives and statements in this program.

(b) What output does the program produce?

//2. 



#include<stdio.h>

int main(void){

Parkinson 1 s Law:
Work expands so as to 
fill the time
available for its completion.

return 0;
}





3. Condense the dweight.c program by (1) replacing the assignments to height, length, and width with initializers and (2) removing the weight variable, instead cal¬ culating (volume + 165) / 166 within the last printf.



//3.



//Computes the dimensional weight of a 12" x 10" x 8" box

#include<stdio.h>

int main(void){

    int height = 8, length = 12, width = 10, volume;

    height = 8;
    length = 12;
    width = 10;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
    
    return 0;
}



4. Write a program that declares several int and float variables—without initializing them—and then prints their values. Is there any pattern to the values? (Usually there isn’t.)

//4.



#include<stdio.h>

int main(void){

int a;
int b;

float x;
float y;

printf("\nints: %d%d\n\nfloats: %f%f\n\n", a,b,x,y);

return 0;
}



5. Which of the following are not legal C identifiers?

(a) 100_bottles

(b) _100_bottles

(c) one_hundred_bottles

(d) bottles_by_the_hundred_

//5.



a and d



