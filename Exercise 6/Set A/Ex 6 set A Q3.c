#include <stdio.h>

void main() {
    int n, i, j;
    char ch = 'A';
    printf("Enter number of lines (e.g., 4): ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
}
