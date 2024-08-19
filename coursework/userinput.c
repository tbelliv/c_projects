#include <stdio.h>
#include <string.h> // Include for strlen() and strchr()

int main() {
    int age;
    char name[50];

    printf("\nWhat is your name?\n");
    fgets(name, 50, stdin); // Read up to 49 characters (plus null terminator)
    name[strlen(name)-1] = '\0';

    printf("\nHow old are you?\n");
    scanf("%d", &age);

    printf("\nHi, %s.\nYou are %d years old.\n", name, age);

    return 0;
}