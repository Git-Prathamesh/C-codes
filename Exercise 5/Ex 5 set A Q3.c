#include <stdio.h>
void main() {
    int x, n, i;
    long long result = 1;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);
    for(i = 1; i <= n; i++) {
        result *= x;
    }
    printf("Result: %lld\n", result);
}
