#include <stdio.h>

void main() {
    int x, y, choice, num, temp;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    printf("\n1. Check Equality\n2. Check Less Than\n3. Quotient and Remainder");
    printf("\n4. Range Check\n5. Swap\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Equality
            if(x == y) printf("x is equal to y\n");
            else printf("x is not equal to y\n");
            break;
        case 2: // Less Than
            if(x < y) printf("x is less than y\n");
            else printf("x is not less than y\n");
            break;
        case 3: // Quotient and Remainder
            printf("Quotient: %d\n", x / y);
            printf("Remainder: %d\n", x % y);
            break;
        case 4: // Range
            printf("Enter a number to check: ");
            scanf("%d", &num);
            if(num >= x && num <= y) printf("%d is in range.\n", num);
            else printf("%d is not in range.\n", num);
            break;
        case 5: // Swap
            temp = x; x = y; y = temp;
            printf("Swapped: x = %d, y = %d\n", x, y);
            break;
        default: printf("Invalid choice\n");
    }
}
