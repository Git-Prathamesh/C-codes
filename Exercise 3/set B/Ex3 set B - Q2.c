// Ex3 set B - Q1 //
#include <stdio.h>

void main() {
    int h, m, s;
    printf("Enter time (HH MM SS): ");
    scanf("%d %d %d", &h, &m, &s);

    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
        printf("Valid Time\n");
    else
        printf("Invalid Time\n");
}
