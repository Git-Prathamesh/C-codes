// set B - Q2 //
#include <stdio.h>

void main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swap: a = %d, b = %d\n", a, b);
}
