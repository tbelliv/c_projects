/*Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?

(a) for (i = 0; i < 10; i++) ...

(h) for (i = 0; i < 10 ; ++i) ...

(c) for (i = 0; i++ <10; ) ...*/

#include<stdio.h>

int main(void){

    //a
    
    for(int i = 0; i < 10; i++){
        
        break;

    }

    //b
    
    for(int i = 0; i < 10; ++i){
        
        break;
        
    }

    //c
    
    for(int i = 0; i++ <10;){
        
        break;
        
    }

    return 0;
}

//ANSWER: C. i is incrementing BEFORE execution, so the first iteration of the for loop in scenario C, i will be 1. The other scenarios will us i = 0 in the first iteration of the for loop.