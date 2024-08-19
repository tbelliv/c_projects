#include<stdio.h>
#include<stdlib.h>

int main(void) {

    int item_number;
    char month[3];
    char day[3];
    char year[5];
    float unit_price;

    printf("Enter an item number:\n");
    scanf("%d", &item_number);

    printf("Enter a purchase date. Please enter only whole numbers in mm/dd/yyyy format:\n");
    scanf("%2s/%2s/%4s", month, day, year);

    printf("Enter the item unit price:\n");
    scanf(" %f", &unit_price);

    printf("\nYour record is as follows:\n");

    printf("Item Number: %-8d\n", item_number);
    printf("Unit Price:  %8.2f\n", unit_price);
    printf("Date:        %s/%s/%s\n", month, day, year);

    return 0;
}
