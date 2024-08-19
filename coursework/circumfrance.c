#include<stdio.h>

int main(){
    const long double pi = 3.141592653589793238462643383279502884197;
    double radius;
    long double circumfrance;
    long double area;

    printf("\nEnter the radius of a circle:\n");
    scanf("%lf", &radius);

    circumfrance = 2 * pi * radius;
    area = pi * radius * radius;

    printf("\nCircumfrance of Radius: %lf is: %Lf\n", radius, circumfrance);
    printf("\nArea is: %Lf\n", area);

    return 0;

}