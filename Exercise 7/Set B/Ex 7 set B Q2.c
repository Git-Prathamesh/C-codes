#include <stdio.h>
#include <stdlib.h>

void main() {
    int choice;
    float quantity, price, total = 0, item_total;

    while(1) {
        printf("\n1. Pen (Rs 10)\n2. Notebook (Rs 50)\n3. Eraser (Rs 5)\n4. Exit & Print Bill\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 4) break;

        printf("Enter Quantity: ");
        scanf("%f", &quantity);

        switch(choice) {
            case 1: price = 10; break;
            case 2: price = 50; break;
            case 3: price = 5; break;
            default: printf("Invalid Item\n"); continue;
        }

        item_total = price * quantity;
        
        // Discount logic
        if(quantity > 10) {
            printf("Discount Applied (10%%)!\n");
            item_total *= 0.90;
        }

        total += item_total;
        printf("Item Cost: %.2f | Current Total: %.2f\n", item_total, total);
    }
    printf("Final Total Bill: %.2f\n", total);
}
