#include<stdio.h>

enum day{

sun, mon, tues, wed, thurs, fri, sat

}; 

// each element has an assoc int // sun = 0, sat = 6 
// the user can set custom assocs
// EXAMPLE: sun = 1, mon = 2, etc.


int main(){

    //enum -- a user defined type of named int identifiers
    //enums help with readability

    enum day today = sun;

    if (today == sun || today == sat){
        printf("It's the weekend!");
    }

    else{
        printf("I have to work today :(");
    }

    return 0;
}