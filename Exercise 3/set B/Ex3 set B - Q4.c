// Ex3 set B - Q4 //
#include <stdio.h>

void main() {
    float s1, s2, s3;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1))
        printf("Valid Triangle\n");
    else
        printf("Invalid Triangle\n");
}
