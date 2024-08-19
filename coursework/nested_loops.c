#include <stdio.h>

int main() {

    // Nested loops -- a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows:\n");
    scanf("%d", &rows);

    printf("\nEnter # of columns:\n");
    scanf("%d", &columns);

    printf("\nEnter a symbol: ");
    scanf(" %c", &symbol);  // Note the space before %c

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= columns; j++) {
            printf("%c", symbol);  // Use %c to print the character
        }
        printf("\n");
    }

    return 0;
}
