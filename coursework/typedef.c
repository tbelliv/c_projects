#include<stdio.h>
#include<string.h>

//typedef char roles[25]; //basic typedef declaration

/*

//struct1 to displ;ay non-typedef struct format:

struct role{

    char name[25];
    char password[25];
    int id;
};

*/

typedef struct{
    char name[25];
    char password[25];
    int id;
} roles;

int main(){

    //typedef -- reserved word that gives an existing data type a nickname
    //let's give a char array of 25 bytes a nickname as we will resuse it

    //non-typedef declaration: char singer[25] = "wWitney";
    //typdef declaration: roles singer = "Whitney";

    //now let's see how we would use it with structs
    
    /*
    
    //corresponding code to non-typedef struct decalaration:
    
    struct role singer1 = {"Whitney", "mememe", 1};
    struct role singer2 = {"Celine", "momomo", 2};
    
    */

    roles singer1 = {"whitney","houston123",1};
    roles singer2 = {"celine","dion",2};

    printf("\n%s,%s,%d\n",singer1.name, singer1.password, singer1.id);
    
    printf("\n%s,%s,%d\n",singer2.name, singer2.password, singer2.id);

    return 0;
}