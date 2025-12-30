// Ex3 set B - Q5 //
#include <stdio.h>

void main() {
    float cp, sp, amount;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        amount = sp - cp;
        printf("Profit of %.2f\n", amount);
    } else if (cp > sp) {
        amount = cp - sp;
        printf("Loss of %.2f\n", amount);
    } else {
        printf("No Profit, No Loss.\n");
    }
}
