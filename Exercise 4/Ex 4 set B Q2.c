#include <stdio.h>

void main() {
    int choice;
    float s, l, b, base, h;

    printf("1. Area of Square\n2. Area of Rectangle\n3. Area of Triangle\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter side: "); scanf("%f", &s);
            printf("Area: %.2f\n", s * s);
            break;
        case 2:
            printf("Enter length and breadth: "); scanf("%f %f", &l, &b);
            printf("Area: %.2f\n", l * b);
            break;
        case 3:
            printf("Enter base and height: "); scanf("%f %f", &base, &h);
            printf("Area: %.2f\n", 0.5 * base * h);
            break;
        default: printf("Invalid choice\n");
    }
}
