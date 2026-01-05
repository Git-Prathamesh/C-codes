#include <stdio.h>
#include <ctype.h> // Required for isalpha, isdigit, ispunct, etc.

void main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        printf("It is an alphabet. ");
        if (isupper(ch)) {
            printf("It is Uppercase. Converted: %c\n", tolower(ch));
        } else {
            printf("It is Lowercase. Converted: %c\n", toupper(ch));
        }
    } 
    else if (isdigit(ch)) {
        printf("It is a digit.\n");
    } 
    else if (ispunct(ch)) {
        printf("It is a punctuation symbol.\n");
    } 
    else {
        printf("Other character.\n");
    }
}
