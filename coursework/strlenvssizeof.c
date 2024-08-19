#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main (){

    char str20[20];

    char *strptr = NULL;

    strcpy(str20, "Sora!");

    printf("\n%s\n", str20);

    printf("\nThe size of 'str20' using 'sizeof' is: %ld\n", sizeof(str20));

    printf("\nThe size of 'str20' using 'strlen' is: %ld\n", strlen(str20));

    strptr = malloc(strlen(str20)+1); //'+1' to leave room for end operator (\0)

    strcpy(strptr, str20);

    printf("\n%s\n", strptr);

    return 0;
}
















































