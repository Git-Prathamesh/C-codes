// Ex3 set A - Q1 
#include <stdio.h>

void main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is Even.\n", n);
    else
        printf("%d is Odd.\n", n);
}
