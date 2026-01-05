#include <stdio.h>

void main() {
    int n, i, j;
    printf("Enter n (tables from 1 to n): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("\nMultiplication Table of %d:\n", i);
        for(j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }
}
