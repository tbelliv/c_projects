/*What output does the following program fragment produce?

i = 1;

while (i <= 128) { printf("%d ", i); i *= 2;

}*/

#include<stdio.h>

int main(void){

    int i = 1;

    while(i <= 128){

        printf("%d",i);
        i *= 2;

    }

    return 0;
}

//output = 1248163264128