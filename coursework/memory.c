#include<stdio.h>

int main(){

    /*
    * memory -- an array of bytes within RAM
    * memory block -- a single unit (byte) within memory used to hold some value (person)
    * memory address -- the address of where a memory block is located 
    */

   char a = 'x'; 

   char b = 'y';

   char c = 'z';

   printf("%zu bytes\n", sizeof(a)); 
   printf("%zu bytes\n", sizeof(b));
   printf("%zu bytes\n", sizeof(c));

    //%zu -- unsigned long integer type
    //output indicates that each of the char vars are using 1 block of memory or 1 byte of memory
    //addresses are outputted in hexideciaml format
    //decimal -- 0-9
    //hexidecimal -- 0-9 AND a-f (16 different values for each digit)
    
    printf("\n%p",&a);
    printf("\n%p",&b);
    printf("\n%p",&c);
    
    //p is the format specifier for memory address
    //',&a' is the address for the var 'a'

    short aa = 'a';
    short bb = 'b';
    short cc = 'c';

   printf("\n%zu bytes\n", sizeof(aa)); 
   printf("\n%zu bytes\n", sizeof(bb));
   printf("\n%zu bytes\n", sizeof(cc));
    
    printf("\n%p",&aa);
    printf("\n%p",&bb);
    printf("\n%p",&cc);

    return 0;
}