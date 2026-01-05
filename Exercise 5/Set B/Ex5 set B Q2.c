// Problem: Sum of first n terms: $x + 3x + 5x \dots$20.C //
#include <stdio.h>
void main() {
    int n, i;
    float x, sum = 0;
    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);
    for(i = 0; i < n; i++) {
        sum += (2 * i + 1) * x;
    }
    printf("Sum: %.2f\n", sum);
}
