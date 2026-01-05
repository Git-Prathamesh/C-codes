#include <stdio.h>
void main() {
    char ch;
    int n, i;
    printf("Enter character and n: ");
    scanf(" %c %d", &ch, &n);
    for(i = 1; i <= n; i++) {
        printf("%c ", ch + i);
    }
}
