//important notes:
//many c compilers do not check for param matching
//missing args will result in unexpected behavior
//a function prototype causes the compiler to flag an error if args are absent

#include<stdio.h>

void hello(char name[50], int age); //Here is the func prototype.
                                    //It is defining the func with its expects params.

int main(){

//function prototypes are function declarations without bodies before their main() funcs.
//They ensure that calls to a function are made with thge correct args.

char name[50] = "Tim";
int age = 28;

hello(name, age);

return 0;

}

void hello(char name[50], int age){

    printf("\nHello, %s\n", name);
    printf("\nYou are %d year old\n", age);

}