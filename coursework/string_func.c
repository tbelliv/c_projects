#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string1[50] = "Lily";
    char string2[50] = "Dragon";
    char stringcat[50];

    // strlwr -- makes string lowercase -- NOT FOUND!
    // custom_strlwr(string1);
    // printf("%s\n", string1);

    // strcat -- concats two strings
    //strcpy(stringcat, string1); // Copy string1 to stringcat
    //strcat(stringcat, string2); // Concatenate string2 to stringcat
    //printf("%s\n", stringcat);

    //strncat -- concats two strings with option to denote how many chars to concat
    //strcpy(stringcat, string1); // Copy string1 to stringcat
    //strncat(stringcat, string2, 2); // Concat 2 chars from string2 to stringcat
    //printf("%s", stringcat);

    //int str_len = strlen(string1); //returns string length as int
    //printf("%d",str_len);

    //int str_cmp = strcmp(string1, string2); //compares all chars in strings // if same, 0. if different, not 0
    //printf("%d", str_cmp);

    return 0;
}