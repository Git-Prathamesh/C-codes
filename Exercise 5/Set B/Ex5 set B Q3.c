// Sum of first n terms: //
#include <stdio.h>
#include <math.h>

void main() {
    int n, i;
    float x, sum = 0;
    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);

    for(i = 1; i <= n; i++) {
        sum += (float)i / pow(x, i);
    }
    printf("Sum: %.2f\n", sum);
}
