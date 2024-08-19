#include<stdio.h>
#include<string.h>

typedef struct {
    
    char first_name[20];
    char last_name[20];
    float gpa;
    int id;

} students;

int main(){

    students student1 = {"Harry", "Potter", 3.00, 1};
    students student2 = {"Hermoine", "Granger", 4.00, 2};
    students student3 = {"Ron", "Weasley", 2.50, 3};
    students student4 = {"Neville", "Longbottom", 3.75, 4};

    students students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("\n%s %s: %.2f\n",students[i].first_name,students[i].last_name, students[i].gpa);
    }


    return 0;
}