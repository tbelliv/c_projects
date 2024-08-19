#include<stdio.h>

int main(){

    char grade;

    printf("\nEnter a letter grade: ");

    scanf("%c", &grade);
    
    switch(grade){
        case 'a':
            printf("Perfect!\n");
            break;
        case 'b':
            printf("You did good, but can do better!\n");
            break;
        case 'c':
            printf("You passed, but can improve!\n");
            break;
        case 'd':
            printf("You barely passed, please see me.\n");
            break;
        case 'f':
            printf("Fail. Please see me.");
            break;
        default:
            printf("You did not enter a valid letter grade.");
            break;

    }

    return 0;
}