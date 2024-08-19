#include<stdio.h>

void sort(int numarray[], int size);
void printarray(int numarray[], int size);

int main(){


    int numarray[] = {2, 1, 6, 4, 8};

    int size = sizeof(numarray)/sizeof(numarray[0]);

    sort(numarray, size);
    printarray(numarray, size);
    

    return 0;
}

void sort(int numarray[], int size){

    for(int i = 0; i<size -1; i++){

        for(int j = 0; j<size -1; j++){

            if (numarray[j]>numarray[j+1]){

                int temp = numarray[j];
                numarray[j] = numarray[j+1];
                numarray[j+1] = temp;
            
            }

        }

    }

}

void printarray(int numarray[], int size){

    for(int i = 0; i < size; i++){
        printf("%d", numarray[i]);
    }

}