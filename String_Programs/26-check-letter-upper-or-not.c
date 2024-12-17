/* 24. Write a program in C to check whether a letter is uppercase or not.

        Test Data :
        Input a character : p

        Expected Output :

        The entered letter is not an UPPERCASE letter.	  */

#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is Upper case letter\n", ch);
    }
    else if ((ch >= 'a' && ch <= 'z'))
    {
        printf("%c is Small case letter\n", ch);
    }
    else
        printf("Enter valid input.");
}