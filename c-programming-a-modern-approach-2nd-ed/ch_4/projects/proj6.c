/* European countries use a 13-digit code, known as a European Article Number (EAN) instead of the 12-digit Universal Product Code (UPC) found in North America. Each EAN ends with a check digit, just as a UPC does. The technique for calculating the check digit is also similar:

Add the second, fourth, sixth, eighth, tenth, and twelfth digits.

Add the first, third, fifth, seventh, ninth, and eleventh digits.

Multiply the first sum by 3 and add it to the second sum.

Subtract 1 from the total.

Compute the remainder when the adjusted total is divided by 10.

Subtract the remainder from 9.

For example, consider Giilluoglu Turkish Delight Pistachio & Coconut, which has an EAN of 86914X4260008. The first sum is 6 + 1 +8+2+0+0= 17. and the second sum is 8 + 9 + 4 + 4 + 6 + 0 = 31. Multiplying the first sum by 3 and adding the second yields 82. Subtract¬ ing 1 gives 81. The remainder upon dividing by 10 is 1. When the remainder is subtracted from 9. the result is 8, which matches the last digit of the original code. Your job is to mod¬ ify the upc . c program of Section 4.1 so that it calculates the check digit for an EAN. The user will enter the first 12 digits of the EAN as a single number:

Enter the first 12 digits of an EAN: 869148426000 Check digit: 8*/

#include<stdio.h>

int main(void){

    typedef struct{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
    }EAN;

    EAN ean;
    long long ean_input;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%lld", &ean_input);

    ean.d12 = ean_input % 10;
    ean.d11 = (ean_input / 10) % 10;
    ean.d10 = (ean_input / 100) % 10;
    ean.d9  = (ean_input / 1000) % 10;
    ean.d8  = (ean_input / 10000) % 10;
    ean.d7  = (ean_input / 100000) % 10;
    ean.d6  = (ean_input / 1000000) % 10;
    ean.d5  = (ean_input / 10000000) % 10;
    ean.d4  = (ean_input / 100000000) % 10;
    ean.d3  = (ean_input / 1000000000) % 10;
    ean.d2  = (ean_input / 10000000000) % 10;
    ean.d1  = (ean_input / 100000000000) % 10;

    int sum1 = ean.d2 + ean.d4 + ean.d6 + ean.d8 + ean.d10 + ean.d12;
    int sum2 = ean.d1 + ean.d3 + ean.d5 + ean.d7 + ean.d9 + ean.d11;

    int total = 3 * sum1 + sum2;
    int check_digit = 9 - (total - 1) % 10;

    printf("Check digit: %d\n", check_digit);

    return 0;
}