// Ex3 set A - Q2 //
#include <stdio.h>

void main() {
    int n1, n2, n3;
    printf("Enter three numbers (n1 n2 n3): ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Check if n1 is between n2 and n3 OR between n3 and n2
    if ((n1 > n2 && n1 < n3) || (n1 > n3 && n1 < n2))
        printf("%d is between %d and %d.\n", n1, n2, n3);
    else
        printf("%d is NOT between %d and %d.\n", n1, n2, n3);
}
