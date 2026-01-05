#include <stdio.h>

void main() {
    int i, num, digit, sum;
    
    printf("Armstrong numbers between 1 and 500:\n");
    for(i = 1; i <= 500; i++) {
        num = i;
        sum = 0;
        
        while(num > 0) {
            digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        
        if(sum == i)
            printf("%d ", i);
    }
    printf("\n");
}
