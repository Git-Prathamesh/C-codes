#include <stdio.h>

void main() {
    int n1, n2;
    char op;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    switch(op) {
        case '+': printf("Result: %d\n", n1 + n2); break;
        case '-': printf("Result: %d\n", n1 - n2); break;
        case '*': printf("Result: %d\n", n1 * n2); break;
        case '/':
            if(n2 != 0)
                printf("Result: %d\n", n1 / n2);
            else
                printf("Error: Division by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
}
