#include <stdio.h>
void main() {
    int n, i, t1 = 1, t2 = 1, nextTerm;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}
