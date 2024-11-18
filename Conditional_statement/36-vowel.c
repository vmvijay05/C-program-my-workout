//36. Write a C program to check whether an alphabet is a vowel or a consonant. 
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the value: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
        || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
        || ch == 'u' || ch == 'U') {
        printf("The character is a vowel.");
    }
    else {
        printf("The character is a consonant");
    }
}
