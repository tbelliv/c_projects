#include<stdio.h>

int main(void){

    int grade = 3;

    if (grade == 4){

        printf("Excellent");

    }

    else if (grade == 3){

        printf("Good");

    }
    
    else if (grade == 2){

        printf("Average");

    }
    
    else if (grade == 1){

        printf("Poor");

    }
    
    else if (grade == 0){

        printf("Failing");

    }
    
    else{

        printf("Illegal grade");

    }
    
    return 0;
}