// Ex3 set C - Q3 //
#include <stdio.h>

void main() {
    float rate1, qty1, rate2, qty2, rate3, qty3;
    float total, discount, final_amt;

    printf("Enter Rate and Qty for Item 1: "); scanf("%f %f", &rate1, &qty1);
    printf("Enter Rate and Qty for Item 2: "); scanf("%f %f", &rate2, &qty2);
    printf("Enter Rate and Qty for Item 3: "); scanf("%f %f", &rate3, &qty3);

    total = (rate1 * qty1) + (rate2 * qty2) + (rate3 * qty3);

    if (total >= 1000)
        discount = total * 0.20;
    else if (total >= 500 && total < 1000)
        discount = total * 0.15;
    else
        discount = total * 0.08;

    final_amt = total - discount;

    printf("Total: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount: %.2f\n", final_amt);
}
