/*23. Write a program in C to check whether a character is a Hexadecimal Digit or not.

        Test Data :
        Input a character : 7

        Expected Output :

        The entered character is a hexadecimal digit  */

#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'F') || (ch >= 'a' && ch <= 'f'))
    {
        printf("%c is a Hexadecimal Digit.\n", ch);
    }
    else
    {
        printf("%c is not a Hexadecimal Digit.\n", ch);
    }
}
