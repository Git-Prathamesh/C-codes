// set A - Q4 //
#include <stdio.h>

void main() {
    float inner_r, outer_r, perimeter, area;
    const float PI = 3.14159;

    printf("Enter inner radius and outer radius: ");
    scanf("%f %f", &inner_r, &outer_r);

    perimeter = 2 * PI * (outer_r + inner_r);
    area = PI * ((outer_r * outer_r) - (inner_r * inner_r));

    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);
}
