#include<stdio.h>

int main(){

    /*FILE *pF = fopen("test.txt", "a"); //a -- append w -- write r -- read

    fprintf(pF, "\nLily is a dog");
    
    fclose(pF);*/ // writing to a new file or appending a file

    if(remove("/home/timothy/Documents/c_programs/test.txt")==0) //if remove() exits with code == 0, it was del'd successfully

    {
        printf("That file was deleted.");
    }

    else {
        printf("Error.");
    }

    return 0;
}