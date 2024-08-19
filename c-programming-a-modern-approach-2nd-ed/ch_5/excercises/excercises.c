/*

1. The following program fragments illustrate the relational and equality operators. 
Show the output produced by each, assuming that i, j. and k are int variables.

(a) i = 2; j = 3;

k = i * j == 6; printf("%d", k);

(b) i = 5; j =10; k = 1 ; printf("%d", k > i < j);

(c) i = 3; j = 2; k = 1;

printf("%d", i < j == j < k);

(d) i = 3; j = 4; k = 5; printf("%d", i % j + i < k);

*/

//a ouput = 0

/*#include<stdio.h>

int main(void){

    int i = 2;
    int j = 3;

    int k = ((1 * j) == 6);

    printf("%d",k);

    return 0;
}*/

//b output = 1

/*#include<stdio.h>

int main(void){

    int i = 5;
    int j = 10;
    int k = 1;

    printf("%d", k > i < j);

    return 0;
}*/

//c output = 1

/*#include<stdio.h>

int main(void){

    int i = 3;
    int j = 2;
    int k = 1;

    printf("%d", i < j == j < k); //i(3) < j(2) = 0; 0 == j(2) = 0; 0 < k(1) = 1; 

    return 0;
}*/

//d output = 0

/*#include<stdio.h>

int main(void){

    int i = 3;
    int j = 4;
    int k = 5;

    printf("%d", i % j + i < k); //i%j=3+3=6<5=0;

    return 0;
}*/

/*

2. The following program fragments illustrate the logical operators. Show the output produced by each, assuming that i, j, and k are int variables.

(a) 
i - 10; j - 5; 
printf("%d", 1i < j );

(b) i = 2; j = 1;

printf("%d", !!i + !j);

(c) i = 5; j = 0; k = - 5 ; printf("%d", i && j | | k) ;

(d) i = 1; j = 2; k = 3; printf("%d", i < j || k) ;*/

//a output = 1

/*#include<stdio.h>

int main(void){

    int i = 10;
    int j = 5;

    printf("%d",!i < j); //!i(10)=0<5=1

    return 0;
}*/

//b output = 1

/*#include<stdio.h>

int main(void){

    int i = 2;
    int j = 1;

    printf("%d", !!i + !j); //!i(2)=!i(0)=1+!j(1-->0)=1

    return 0;
}*/

//c output = 1

/*#include<stdio.h>

int main(void){

    int i = 5;
    int j = 0;
    int k = -5;

    printf("%d", i && j || k);

    return 0;
}*/

//d

/*#include<stdio.h>

int main(void){

    int i = 1;
    int j = 2;
    int k = 3;

    printf("%d", i < j || k); //1<2=1 or 3 = 1

    return 0;
}*/

/*

3.

The following program fragments illustrate the short-circuit behavior of logical expressions. Show the output produced by each, assuming that i, j. and k are int variables.

(a) i = 3; j = 4; k = 5;
printf("%d", i < j || ++j < k); 
printf("%d%d%d", i,j,k);

(b)

i = 7; j = 8; k = 9;

printf("%d", i - 7 && j++ < k);
printf("%d%d%d", i,j,k);

(C)

i = 7; j = 8; k = 9;
printf("%d",(i = j) || (j = k));
printf("%d%d%d", i,j,k);

(d)

i = 1; j = 1; k = 1;
printf("%d",++i || ++j && ++k);
printf("%d%d%d", i,j,k);

*/

//a output = 1345

/*#include<stdio.h>

int main(void){

    int i = 3;
    int j = 4;
    int k = 5;

    printf("%d", i < j || ++j < k); //i(3)<j(4)= 1 OR NULL(j(5) < k(5) = 0 = 1 OR 0) 
    printf("%d%d%d", i,j,k); //i(3)j(4(due to short circut of ||))k(5)
    
    return 0;
}*/

//b output = 0789

/*#include<stdio.h>

int main(void){

    int i = 7;
    int j = 8;
    int k = 9;

    printf("%d", i - 7 && j++ < k); //((7 - 7) && ((j++) < k)) = 0 && -1 == 0
    printf("%d%d%d", i,j,k); //789 j remains 8 as short circuting of && takes precedence over the normal order of precedence

    return 0;

}*/

//c output = 1889

/*#include<stdio.h>

int main(void){

    int i = 7;
    int j = 8;
    int k = 9;

    printf("%d",(i = j) || (j = k)); //8 || NULL(9) = 1 //j = 8
    printf("%d%d%d", i,j,k); //889

return 0;

}*/

//d output = 1211

/*#include<stdio.h>

int main(void){

    int i = 1;
    int j = 1;
    int k = 1;

    printf("%d",++i || ++j && ++k); 
    //i(2)||NULL(j(2)&&(2)=2||1=1)
    //and higher order of precedence than ||
    printf("%d%d%d", i,j,k);//211

    return 0;
}*/

/*

4.

Write a single expression whose value is either -1.0, or +1. depending on whether i is less than, equal to, or greater than j. respectively.

*/

/*#include<stdio.h>

float result = (i < j) ? -1.0 : (i > j) ? 1.0 : 0.0;

    return 0;
}*/

/*

5.

Is the following if statement legal? 

if (n >= 1 <= 10 )

printf("n is between 1 and 10\n");

If so, what does it do when n is equal to 0?

*/

/*

It is legal but does not function properly.
n >= 1 is eval'd first, resulting in a 1 or 0, then 1 or 0 is eval'd against <=10.

*/

/*

6.

Is the following if statement legal? 

if (n == 1-10)

printf("n is between 1 and 10\n");

If so, what does it do when n is equal to 5?

*/

/*

It is legal but it is poorly written as 1-10 is eval'd first.

*/

/*

7.

What does the following statement print if i has the value 17? 
What does it print if i has the value -17?

printf("%d\n", i >= 0 ? i : -i);

output = 17
output = -17

*/

/*

8.

The following if statement is unnecessarily complicated. 
Simplify it as much as possible. 
(Hint: The entire statement can be replaced by a single assignment.)

if (age >= 13) 
    if (age <= 19) 
        teenager = true; 
    else
        teenager = false;
else if (age < 13)
    teenager = false;

*/

/*#include<stdio.h>

int main(void){

    int age;

    printf("\nEnter your age:\n");

    scanf("%d",&age);

    printf("%d",age < 13 ? 0 : age <= 19 ? 1 : 0);

    return 0;
}
*/

/*

9.

Are the following if statements equivalent? If not. why not?

if (score >= 90) 
    printf("A"); 
else if (score >= 80) 
    printf("B"); 
else if (score >= 70) 
    printf("C"); 
else if (score >= 60 ) 
    printf("D"); 
else
    printf("F") ;

if (score < 60) 
    printf( "F"); 
else if (score < 70) 
    printf( "D" ); 
else if (score < 80) 
    printf( "C"); 
else if (score < 90) 
    printf( "B" ); 
else
    printf("A");

*/

/*
These statements will produce the same output. However, the top example is clearer and in an order that is intuitive to a human.
*/

/*

10.

What output does the following program fragment produce? (Assume that i is an integer variable.)

i = 1;

switch (i % 3){
case 0: printf("zero"); 
case 1 : printf("one"); 
case 2: printf("two");
}

*/

/*

output = onetwo // no break statements

*/

/*

The following table shows telephone area codes in the state of Georgia along with the largest city in each area:

Area code   Major city

229         Albany

404         Atlanta

470         Atlanta

478         Macon

678         Atlanta

706         Columbus

762         Columbus

770         Atlanta

912         Savannah

Write a switch statement whose controlling expression is the variable area code. If the value of area_code is in the table, the switch statement will print the corresponding city name. Otherwise, the switch statement will display the message "Area code not recognized". Use the techniques discussed in Section 5.3 to make the switch statement as simple as possible.

*/

/*#include<stdio.h>

int main(void){

    int areacode;

    printf("\nEnter the area code: ");
    scanf("%d",&areacode);

    switch(areacode){

        case 229:
            printf("Albany");
            break;
        case 404:
            printf("Atlanta");
            break;
        case 470:
            printf("Atlanta");
            break;
        case 678:
            printf("Macon");
            break;
        case 706:
            printf("Atlanta");
            break;
        case 762:
            printf("Columbus");
            break;
        case 770:
            printf("Columbus");
            break;
        case 912:
            printf("Savannah");
            break;
        default:
            printf("Area code not recognized");
            break;

    }

    return 0;
}*/