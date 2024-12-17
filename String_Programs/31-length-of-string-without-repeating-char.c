/* 35. Write a C program to find the length of the longest substring of a given string without repeating characters.

        Test Data :
        Input a string: “abcddefffd”

        Expected Output:

        Input a string: Length of the longest substring without repeating characters: 4       */

#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, j, count = 0, length = 0,start=0,currentLength=0,maxLength=0;
    printf("Enter a string: ");
    scanf("%s", str);
    length=strlen(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = start; j<i; j++)
        {
            if (str[j] == str[i])
            {
                start=j+1;
                break;
            }
        }
        currentLength = i - start + 1;
        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }
    printf("The length of the longest substring without repeating characters is: %d\n", maxLength);
}
