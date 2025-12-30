// Ex3 set C - Q2 //
#include <stdio.h>

void main() {
    float m1, m2, m3, total, avg;
    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("Total: %.2f, Average: %.2f\n", total, avg);

    if (avg >= 70)
        printf("Class: Distinction/Class I\n");
    else if (avg >= 60)
        printf("Class: Class II\n");
    else if (avg >= 40)
        printf("Class: Pass Class\n");
    else
        printf("Class: Fail\n");
}
