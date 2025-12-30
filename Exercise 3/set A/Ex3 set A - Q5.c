// Ex3 set A - Q5 //
#include <stdio.h>

int main() {
    float salary, tax = 0;
    printf("Enter annual basic salary: ");
    scanf("%f", &salary);

    if (salary < 150000) {
        tax = 0;
    } else if (salary >= 150000 && salary <= 300000) {
        tax = salary * 0.20;
    } else {
        tax = salary * 0.30;
    }

    printf("Income Tax: %.2f\n", tax);
}
