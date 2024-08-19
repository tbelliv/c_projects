//WRONG_ANSWER

/*What output does the following for statement produce?

for (i = 5, j = i - 1; i > 0, j >0; --i, j=i-l) printf("%d ", i);*/

#include<stdio.h>

int main(void){

    for (int i = 5, j = i - 1; i > 0, j >0; --i, j=i-1){

        //i(5), j(4); i(5) > 0 && j(4) > 0;     TRUE     execution { i(4), j(3) }
        //**********; i(4) > 0 && j(3) > 0;     TRUE     execution { i(3), j(2) }
        //**********; i(3) > 0 && j(2) > 0;     TRUE     execution { i(2), j(1) }
        //**********; i(2) > 0 && j(1) > 0;     TRUE     execution { i(1), j(0) }

        printf("%d ", i);

    } 

    return 0;
}

//4 //3 //2 //1

//output = 4321 <-- WRONG

//WRONG_ANSWER_EXPLANATION

/*

I misinterpreted the order of execution in this code.
"--i, j=i-1" happens after execution. Therefore the decrement happens after the first iteration of the for loop.

The correct answer is: 5432

*/