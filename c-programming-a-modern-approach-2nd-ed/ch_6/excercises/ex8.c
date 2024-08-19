/* What output does the following for statement produce?

for (i =10; i >= 1; i /= 2) printf("%d ", i++);*/

#include<stdio.h>

int main(void){

    for(int i = 10; i >= 1; i /= 2){

        printf("%d",i++);

        //10 ( --> 11 )
        //5  ( --> 6  )
        //3  ( --> 4  )
        //2  ( --> 3  )
        //1  ( --> 2  )
        //1  ( --> 2  )
        //1  ( --> 2  )
        //...to infinity AND BEYOND

    }

    return 0;
}

//ANSWER: 10532111...1