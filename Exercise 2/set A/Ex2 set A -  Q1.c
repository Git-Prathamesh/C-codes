// Set A - Q 1 //
#include <stdio.h>

void main() {
    float r, h, surface_area, volume;
    const float PI = 3.14159;

    printf("Enter radius and height of the cylinder: ");
    scanf("%f %f", &r, &h);

    surface_area = (2 * PI * r * r) + (2 * PI * r * h);
    volume = PI * r * r * h;

    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume);
}
