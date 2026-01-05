#include <stdio.h>
int main() {
    int x, y, i, sum = 0;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    for(i = x; i <= y; i++) {
        sum += i;
    }
    printf("Sum: %d\n", sum);
}
