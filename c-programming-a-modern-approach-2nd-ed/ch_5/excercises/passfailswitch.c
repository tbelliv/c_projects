/*
Grades:
4 = excellent
3 = good
2 = average
1 = poor
0 = failing
*/

#include<stdio.h>

int main(void){

    int grade;
    grade = 4;

    switch (grade){
        
        case 4: case 3: case 2: case 1: printf("You passed.");
        break;
        case 0: printf("You failed.");
        break;
        
    }
    
    return 0;
}