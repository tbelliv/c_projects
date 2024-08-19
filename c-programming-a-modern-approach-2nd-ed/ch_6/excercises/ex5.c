/*Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?

(a) while (i < 10) {}...}

(b) for (; i < 10;) {...}

(c) do {...} while (i < 10) ;*/

#include<stdio.h>

int main(void){

    int i;

    //a

    while(i < 10){

        break;

    }

    //b

    for(; i < 10;){

        break;

    }

    //c

    do{

        printf("blah blah blah");

    }while(i < 10);

    return 0;
}

//ANSWER: C. Even if i is greater than or equal to 10, C will complete a first iteration.