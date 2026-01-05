#include <stdio.h>

void main() {
    float r;
    int choice;
    const float PI = 3.14159;

    printf("Enter Radius: ");
    scanf("%f", &r);
    printf("1. Area of Circle\n2. Circumference\n3. Volume of Sphere\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Area: %.2f\n", PI * r * r); break;
        case 2: printf("Circumference: %.2f\n", 2 * PI * r); break;
        case 3: printf("Volume: %.2f\n", (4.0/3.0) * PI * r * r * r); break;
        default: printf("Invalid choice\n");
    }
}
