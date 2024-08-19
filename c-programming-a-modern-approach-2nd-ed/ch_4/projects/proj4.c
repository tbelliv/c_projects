/* Write a program that reads an integer entered by the user and displays it in octal (base 8):

Enter a number between 0 and 32767: 1953 In octal, your number is: 03641

The output should be displayed using five digits, even if fewer digits are sufficient. Hint: To convert the number to octal, first divide it by 8; the remainder is the last digit of the octal number (1, in this case). Then divide the original number by 8 and repeat the process to arrive at the next-to-last digit, (printf is capable of displaying numbers in base 8. as we’ll see in Chapter 7. so there’s actually an easier way to write this program.)*/

#include <stdio.h>

void octal(int ognum) {
    int fifth = ognum % 8;

    int fourtht = ognum / 8;
    int fourth = fourtht % 8;

    int thirdt = fourtht / 8;
    int third = thirdt % 8;

    int secondt = thirdt / 8;
    int second = secondt % 8;

    int firstt = secondt / 8;
    int first = firstt % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", first, second, third, fourth, fifth);
}

int init_ognum(void) {
    int ognum;

    printf("Enter a number between 0 and 32767:\n");
    scanf("%d", &ognum);

    return ognum;
}

int main(void) {
    int ognum = init_ognum();

    if (ognum >= 0 && ognum <= 32767) {
        octal(ognum);
    } else {
        printf("Invalid input. Please enter a number between 0 and 32767.\n");
    }

    return 0;
}
