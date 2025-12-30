// Ex3 set A - Q7 //
#include <stdio.h>

void main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 48 && ch <= 58) // ASCII for 0-9
        printf("Digit\n");
    else if (ch >= 97 && ch <= 122) // ASCII for a-z
        printf("Lowercase Alphabet\n");
    else if (ch >= 65 && ch <= 90) // ASCII for A-Z
        printf("Uppercase Alphabet\n");
    else
        printf("Other symbol\n");
}
