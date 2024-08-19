#include<stdio.h>

int main(){

    //while loop -- checks a condition, THEN execs a block if true
    //do while loop -- execs once THEN checks condition

    int number = 0;
    int sum = 0;

    do{
        printf("Enter a number greater than 0:");
        scanf("%d",&number);
        if(number > 0){
            sum+=number;
        printf("\n%d\n",sum);
        }
    }while(number > 0);

    return 0;
}