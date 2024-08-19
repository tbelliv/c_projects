#include<stdio.h>

int find_max(int num1, int num2){
    
    return (num1>num2) ? num1 : num2; //ternary is doing this: 
                                      //eval whether num1 > num2 using the '?' operator
                                      //if yes (true): return num1
                                      // if no (false): return num2
}

int main(){

    //ternary operator = shortcut to if/else when assigning/returning a value
    //(condition) ? value if true: value if false

    int max = find_max(5, 4);

    printf("\n%d\n", max);

    return 0;
}