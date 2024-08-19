#include <stdio.h>

int main(void) {
    char mm[3];
    char dd[3];
    char yyyy[5];

    printf("\nPlease enter a date in mm/dd/yyyy format. Please include '/'.\n");

    scanf("%2s/%2s/%4s", mm, dd, yyyy);

    printf("%s%s%s\n", mm, dd, yyyy);

    return 0;
}