// set A - Q7 //
#include <stdio.h>

void main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c handles newline issues

    printf("Previous character: %c\n", ch - 1);
    printf("Next character: %c\n", ch + 1);
}
