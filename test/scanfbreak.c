#include<stdio.h>

int main(void){

    int i;

    printf("The following scanf func wants an int but enter a word and see what happens.");

    scanf("%d", &i);

    printf("\nLet's see the output: %d\n\n", i);

    return 0;
}