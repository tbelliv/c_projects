#include<stdio.h>

int main(){

    FILE *pF = fopen("/home/timothy/Documents/c_programs/riddle.txt", "r");

    char buffer[255]; //container to hold one line of t he txt document

    if(pF == NULL){

        printf("\nError: Unable to open file.\n"); //if cannot find file, print error

    }

    else{

    //fgets(buffer, 255, pF); //buffer --the insertion container for text //255 --max input size //pF --pointer to file

    //printf("%s", buffer); //should print a single line of text (first only)

    //the code above is commented out so this code can be used within a while loop to print the full file

        while(fgets(buffer, 255, pF) != NULL){

            printf("%s", buffer);

            //when fgets reaches the end of the file, it returns NULL

            //the conditional arg in the while loop states for the code to continue printing while fgets != NULL
        }

    }
    
    fclose(pF);

    return 0;

}