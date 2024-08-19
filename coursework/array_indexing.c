#include<stdio.h>

int main(){

    double price_array[] = {2.00, 4.00, 8.00, 16.00, 32.00, 64.00, 128.00, 256.00};

    //printf("%d bytes\n", sizeof(prices));

    for(int i = 0; i < sizeof(price_array)/sizeof(price_array[0]); i++)
    {
        printf("$%.2lf\n", price_array[i]);
    }

    return 0;
}