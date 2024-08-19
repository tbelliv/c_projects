#include<stdio.h>
#include<string.h>

int main(){

    //while loops repeat a section of code while some code evaluates to true

    char name[25];

    printf("\nWhat is your name? ");
    fgets(name, 25, stdin);

    name[strlen(name) -1] = '\0'; //remove the new line and replace it with a null char

    while(strlen(name) == 0){

        printf("You did not enter a name.");
        printf("\nWhat is your name? ");
        fgets(name, 25, stdin);
        name[strlen(name) -1] = '\0'; //remove the new line and replace it with a null char

    }

    printf("\nHello %s\n",name);

    return 0;
}