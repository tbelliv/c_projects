#include<stdio.h>

void printage(int *pAge){

printf("\nYou are %d years old.\n", *pAge); //deref

}

int main(){

    //*pointer -- a 'variable-like' reference that holds a memory address to another variable, array, etc. 
    //some tasks are performed more easily with pointers
    //* = indirection operation (value at address)

    int age = 21;
    int *pAge = NULL; //good practice to assign NULL if declaring a pointer
    pAge = &age;

    //printf("\naddress of age: %p", &age);
    //printf("\nvalue of pAge: %p", pAge);

    //printf("\nsize of age: %zu bytes\n", sizeof(age));
    //printf("\nsize of age pointer: %zu bytes\n", sizeof(pAge));
    
    //printf("\nvalue of age: %d", age);
    //printf("\nvalue of age: %d", *pAge); //dereferencing

    printage(pAge);

    return 0;
}