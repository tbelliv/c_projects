#include<stdio.h>

//'double' in 'double square' is used instead of void because the code is returning a double to the main function.
//Void returns exit status (0).

double square(double x){

    return x * x; //multiplying 3.14 and 3.14 then returns the product back to the the main func where it was called.

}

int main(){

    double x = square(3.14); //calling the function 'square' with the passed var 'x' (3.14).
    printf("\n%lf\n", x); //prints the returned result of x * x.

    return 0;
}