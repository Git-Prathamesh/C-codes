// set A - Q2 //
#include <stdio.h>

void main() {
    float f, c, k;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = 5.0 / 9.0 * (f - 32);
    k = c + 273.15;

    printf("Celsius: %.2f\n", c);
    printf("Kelvin: %.2f\n", k);
}
