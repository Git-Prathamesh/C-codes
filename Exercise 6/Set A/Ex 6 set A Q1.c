//Prime Numbers in a Range Problem: Display all prime numbers between two user-specified limits. //
#include <stdio.h>

void main() {
    int start, end, i, j, is_prime;
    printf("Enter range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for(i = start; i <= end; i++) {
        if(i <= 1) continue; // 1 is not prime
        is_prime = 1;
        
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        
        if(is_prime)
            printf("%d ", i);
    }
    printf("\n");
}
