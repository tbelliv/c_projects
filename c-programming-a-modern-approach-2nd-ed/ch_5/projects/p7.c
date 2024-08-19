/*Write a program that finds the largest and smallest of four integers entered by the user:

Enter four integers: 21 43 10 35 Largest: 43 Smallest: 10

Use as few if statements as possible. Hint: Four if statements are sufficient.*/

#include <stdio.h>

int main(void) {
    int nums[4];
    int largest, smallest;

    printf("\nPlease enter four numbers, separated by commas (1,2,3,4): ");
    scanf("%d,%d,%d,%d", &nums[0], &nums[1], &nums[2], &nums[3]);

    largest = smallest = nums[0];

    if (nums[1] > largest) largest = nums[1];
    if (nums[2] > largest) largest = nums[2];
    if (nums[3] > largest) largest = nums[3];

    if (nums[1] < smallest) smallest = nums[1];
    if (nums[2] < smallest) smallest = nums[2];
    if (nums[3] < smallest) smallest = nums[3];

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
