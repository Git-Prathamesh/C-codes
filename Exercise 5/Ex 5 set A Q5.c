#include <stdio.h>
void main() {
    int n, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    do {
        count++;
        n /= 10;
    } while(n != 0);
    printf("Digits: %d\n", count);
}
