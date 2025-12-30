// Ex3 set A - Q3 //
#include <stdio.h>

void main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("It is a digit.\n");
    else
        printf("It is not a digit.\n");
}
