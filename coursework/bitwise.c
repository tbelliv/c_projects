#include<stdio.h>

int main(){

    //bitwise operators -- special operators used in bit level programming.

    // & = and
    // | = or
    // ^ = xor (exclusive or)
    // << = left shift
    // >> = right shift

    int x = 6; // 6 = 00000110
    int y = 12; //12 = 00001100
    int z = 0; //0 = 00000000

    //z = x & y; (AND)

    /*The code above declares that z will be stored with the binary values of x AND y where they share a '1' in their binary representations.
    
    'AND' EXAMPLE:
    
    00000*1*10 = 6 = x
    00001*1*00 = 12 = y
    00000100 = 4 = z because of the mutual '1' in the four place.*/

    //TEST: //printf("%d",z); //'z' indeed prints 4

    //z = x | y; (OR)

    /*The code above declares that z will store the binary values of x and y where at least one var has a '1' in their binary representations (OR).
    
    'OR' EXAMPLE:
    
    00000*1**1*0 = 6 = x
    0000*1**1*00 = 12 = y
    00001110 = 14 = z because of the '1' in the: two, four, and eight places.*/

    //TEST: //printf("%d",z); //'z' indeed prints 14

    //z = x ^ y; //(XOR)

    /*The code above declares that z will store the binary values of x AND y where ONE OF THE TWO (not both) has a '1' in their binary representations.
    
    'XOR' EXAMPLE:
    
    000001*1*0 = 6 = x
    0000*1*100 = 12 = y
    00001010 = 10 = z because of the '1' in the: eight and two places.*/

    //TEST: //printf("%d",z); //'z' indeed prints 4

    //z = x << 1; //(LEFT shift)

    /*This code shifts the bits one position to the left (<< 1) and adds '0' to the end of the octave.
    
    'LEFT shift' EXAMPLE:

    00000100 = 4 = original
    00001000 = 8 = left shifted*/

    //printf("%d",z);

    //z = x >> 1; //(RIGHT shift)

    /*This code shifts the bits one position to the right (>> 1) and adds '0' to the beginning of the octave.
    
    'RIGHT shift' EXAMPLE:

    00000100 = 4 = original
    00000020 = 2 = right shifted*/

    //printf("%d",z);

    //note that '1s' that are shifted off the end or beginning are trunc'd.

    return 0;
}