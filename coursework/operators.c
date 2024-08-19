#include<stdio.h>

int main() {
    printf("First, let's look at division and how it works when we input two integers to get an integer quotient vs when we input two floats to get a float quotient.\n");

    // Integer division
    int ieleven = 11;
    int itwo = 2;
    int i_quotient = ieleven / itwo;

    printf("The integer quotient of 11 / 2 is: %d. Note that it is truncated.\n", i_quotient);

    // Float division
    float feleven = 11.0;
    float ftwo = 2.0;
    float f_quotient = feleven / ftwo;

    printf("The float quotient of 11.0 / 2.0 is: %f. Note that it is not truncated.\n", f_quotient);

    printf("\nNow, let's look at multiplication and how it works. Let's create two floats and store their products in an int and a float, respectively.\n");

    // Float multiplication
    float ffive_two = 5.2;
    float fsix_four = 6.4;
    int iprod = (int)(ffive_two * fsix_four);  // Cast to int for integer product
    float fprod = ffive_two * fsix_four;

    printf("The integer product of 5.2 and 6.4 is: %d \nThe float product of the values is: %f. Note that even though we multiplied floats, we declared its product to be an int. Therefore, the product was truncated in its output.\n", iprod, fprod);

    printf("\nLet's say I have four boxes and 5 products to ship. I am quite bad at mental math but quite good at C, so I want to find out how many products do not have a box in which to ship. Let's write a program to figure it out. \nHint: modulus\n");

    // Modulus operation
    int boxes = 4;
    int products = 5;
    int orphan = products % boxes;

    printf("%d product(s) are marked to be shipped but do not have a box.\n", orphan);

    printf("\nDrat! Another hydra got into the warehouse!\nQuick! How many heads should you slay?\n");

    int slain;

    scanf("%d", &slain);

    // Input validation loop
    while (slain < 0 || slain == 0 || slain > 9) {
        if (slain < 0) {
            printf("Are you crazy?! You want to give it more heads?! Enter a new number:");
        } else if (slain == 0) {
            printf("Come on! Show your courage! Enter a new number:");
        } else if (slain > 9) {
            printf("This hydra doesn't have that many heads. Enter a number less than 10:");
        }
        scanf("%d", &slain);  // Prompt for input again
    }

    // Multiply heads slain by 2
    slain *= 2;

    printf("\nOh boy! The hydra's heads multiplied...\nNow there are %d.\nAt least you know how to use the mathematical assignment operators now...\n", slain);

    return 0;

}
