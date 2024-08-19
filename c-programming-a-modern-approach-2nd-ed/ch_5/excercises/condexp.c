#include<stdio.h>

int main(void){

    int i = 1;
    int j = 2;
    int k;

    k = i > j ? i : j; //k is now 2

    k = (i >= 0 ? i : 0) + j; //k is now 3
    
    return 0;

}