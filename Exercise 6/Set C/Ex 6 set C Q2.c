#include <stdio.h>
#include <math.h>
#include <stdlib.h> // for exit(0)

void main() {
    int choice;
    double val;

    while(1) { // Infinite loop till exit
        printf("\n1. Sine\n2. Cosine\n3. Log (Natural)\n4. Exp (e^x)\n5. Square Root\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 6) exit(0);

        printf("Enter value: ");
        scanf("%lf", &val);

        switch(choice) {
            case 1: printf("Result: %lf\n", sin(val)); break;
            case 2: printf("Result: %lf\n", cos(val)); break;
            case 3: printf("Result: %lf\n", log(val)); break;
            case 4: printf("Result: %lf\n", exp(val)); break;
            case 5: printf("Result: %lf\n", sqrt(val)); break;
            default: printf("Invalid Choice\n");
        }
    }
}
