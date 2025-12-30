// set B - Q3 //
#include <stdio.h>

void main() {
    int amount, n10, n5, n1;

    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    n10 = amount / 10;
    amount = amount % 10;

    n5 = amount / 5;
    amount = amount % 5;

    n1 = amount; // Remaining amount is in 1s

    printf("Notes of 10: %d\n", n10);
    printf("Notes of 5: %d\n", n5);
    printf("Notes of 1: %d\n", n1);
}
