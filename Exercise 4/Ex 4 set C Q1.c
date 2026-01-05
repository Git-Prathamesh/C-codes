#include <stdio.h>

void main() {
    int d, m, y, is_leap = 0, valid = 1;

    printf("Enter Date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);

    // Check leap year
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        is_leap = 1;

    if (m < 1 || m > 12) {
        valid = 0;
    } else {
        switch(m) {
            case 4: case 6: case 9: case 11:
                if (d < 1 || d > 30) valid = 0;
                break;
            case 2:
                if (is_leap && (d < 1 || d > 29)) valid = 0;
                else if (!is_leap && (d < 1 || d > 28)) valid = 0;
                break;
            default: // Months with 31 days
                if (d < 1 || d > 31) valid = 0;
        }
    }

    if(valid) printf("Valid Date\n");
    else printf("Invalid Date\n");
}
