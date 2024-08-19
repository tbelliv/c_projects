/*Rewrite the following loop so that its body is empty:

for (n = 0; m > 0; n++) 
    m /= 2;*/

//ANSWER:

#include<stdio.h>

int main(void){

    for (int n = 0, m; m > 0; n++, m /= 2);

    return 0;
}