#include<stdio.h>
#include<string.h> //needed for strcpy

int main(){

    char cars[][10] = {"Ford","Chevy","Honda"};

    //cars[0] = "Tesla"; //code not possible //cannot modify element in array of strings

    strcpy(cars[0], "Tesla"); //this works

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s",cars[i]);
        printf("\n");
    }
    return 0;

}