/* Find string length using function (With Argument With Return) */

#include <stdio.h>
int strlength(char[]);

void main()
{
    char str[100];
    int length = 0;
    printf("Enter the word: ");
    scanf("%s", &str);
    length = strlength(str);
    printf("Length of the string is: %d", length);
}

int strlength(char str[])
{
    int i, length = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
