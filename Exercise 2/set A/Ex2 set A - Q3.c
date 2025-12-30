// set A - Q3 //
#include <stdio.h>

void main() {
    float u, a, t, v, s;

    printf("Enter initial velocity (u), acceleration (a), and time (t): ");
    scanf("%f %f %f", &u, &a, &t);

    v = u + (a * t);
    s = (u * t) + (0.5 * a * t * t);

    printf("Final Velocity (v): %.2f\n", v);
    printf("Distance travelled (s): %.2f\n", s);
}
