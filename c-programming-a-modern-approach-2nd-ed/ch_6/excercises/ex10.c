/*Show how to replace a continue statement by an equivalent goto statement.*/

//ANSWER:

#include<stdio.h>

int main(void) {
    int i;
    
    for (i = 0; i < 5; i++) {
        if (i == 2) {
            goto skip;
        }
        printf("%d ", i);
        continue;
    skip:
        ;
    }

    return 0;
}