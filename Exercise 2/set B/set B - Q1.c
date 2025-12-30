// set B - Q1 //
#include <stdio.h>
#include <math.h> 

void main() {
    float x1, y1, x2, y2, distance;

    printf("Enter coordinates for point 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates for point 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("Distance: %.2f\n", distance);
}
