// Ex3 set A - Q6 //
#include <stdio.h>

void main() {
    char ch;
    printf("Enter a lowercase character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("It is a vowel.\n");
    else
        printf("It is a consonant.\n");
}
