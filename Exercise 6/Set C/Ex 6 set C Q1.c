#include <stdio.h>

void main() {
    int branch, month;
    float sales, total, avg;

    for(branch = 1; branch <= 4; branch++) {
        total = 0;
        printf("\nEnter sales for Branch %d (4 months):\n", branch);
        
        for(month = 1; month <= 4; month++) {
            printf("Month %d: ", month);
            scanf("%f", &sales);
            total += sales;
        }
        
        avg = total / 4.0;
        printf("Average sales for Branch %d: %.2f\n", branch, avg);
    }
}
