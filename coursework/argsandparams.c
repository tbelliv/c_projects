#include<stdio.h>

//pass the parameters to the function by defining their data types and names
void birthday(char name[], int age){
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!\n", age);
}

int main(){

    char name[50] = "Tim";
    int age = 28;

    birthday(name, age); //pass the vars name and age to tge birthday functiona as they were defined in main()

    return 0;
}