#include<stdio.h>
#include<string.h>

struct players{

    char name[20];
    int score;


}; //struct name definition

int main(){

    //structs are collections of related members ("vars").
    //they can ve of different data types listed under one name in a block of memory.
    // they are VERY similair to classes in other languages (but no methods).

    struct players player1;
    struct players player2;

    strcpy(player1.name, "Timothy");
    player1.score = 15;

    strcpy(player2.name, "Sam");
    player2.score = 40;

    printf("\n%s: %d\n",player1.name,player1.score);
    printf("\n%s: %d\n",player2.name,player2.score);

    return 0;
}