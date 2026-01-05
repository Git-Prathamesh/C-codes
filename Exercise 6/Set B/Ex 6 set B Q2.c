#include <stdio.h>

void main() {
    int i, j, sum;

    printf("Perfect numbers below 500:\n");
    for(i = 1; i < 500; i++) {
        sum = 0;
        for(j = 1; j <= i/2; j++) {
            if(i % j == 0)
                sum += j;
        }
        
        if(sum == i)
            printf("%d ", i);
    }
    printf("\n");
}
