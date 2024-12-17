/*  34. Write a C program to convert vowels into uppercase characters in a string.

        Test Data :
        Input a string : w3resource

        Expected Output:

        Input a sentence: The original string:
        w3resource
        After converting vowels into upper case the sentence becomes:
        w3rEsOUrcE       */

#include <stdio.h>
void main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'))
        {
            str[i] = str[i] - 32;
        }
    }
    printf("After Case changed the string  is: %s", str);
}
