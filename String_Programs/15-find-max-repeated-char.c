/*10. Write a program in C to find the maximum number of characters in a string.

        Test Data :
        Input the string : Welcome to w3resource.com.

        Expected Output :

        The Highest frequency of character 'e'
        appears number of times : 4    */

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], result;
    int i, length, max = -1, freq[256] = {0};

    printf("Enter the String :  ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        freq[str[i]]++;
    }

    for (i = 0; i < length; i++)
    {
        if (max < freq[str[i]])
        {
            max = freq[str[i]];
            result = str[i];
        }
    }
    printf("\n The highest frequency of Character in a Given String = %c ", result);
}