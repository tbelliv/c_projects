/*The following "prime-testing” loop appeared in Section 6.4 as an example:

for (d = 2; d < n; d++) if (n % d == 0) break;

This loop isn’t very efficient. 
It’s not necessary to divide n by all numbers between 2 and n - 1 to determine whether it’s prime. 
In fact, we need only check divisors up to the square root of n. 
Modify the loop to take advantage of this fact. 

Hint: Don’t try to compute the square root of n; instead, compare d * d with n.*/

#include<stdio.h>
#include<math.h>

int main(void) {
    int n, d;
    int is_prime;

    printf("Prime numbers list: ");

    for (n = 2; n <= 100; n++) {
        is_prime = 1;
        for (d = 2; d * d <= n; d++) {
            if (n % d == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", n);
        }
    }

    return 0;
}
