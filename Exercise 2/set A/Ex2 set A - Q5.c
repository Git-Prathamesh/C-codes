// set A - Q5 //
#include <stdio.h>

void main() {
    float a, b, am, hm;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    am = (a + b) / 2.0;
    hm = (a * b) / (a + b); // Using book's formula

    printf("Arithmetic Mean: %.2f\n", am);
    printf("Harmonic Mean: %.2f\n", hm);
}
