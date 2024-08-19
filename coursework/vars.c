#include<stdio.h>
#include<stdbool.h>

int main(){

    //this is an intro to vars

    int student_id;
    student_id = 123;

    int validictorian_id;
    validictorian_id= 1;

    int age;
    age = 21;

    float gpa;
    gpa = 3.99;

    char grade;
    grade = 'A';

    char name[] = "Timothy";

    printf("Hello, %s\n", name);
    printf("You are are %d years old\n", age);
    printf("You graduated with an overall gpa of: %f\n", gpa);
    printf("Your overall gpa translates to a letter grade of: %c", grade);
}