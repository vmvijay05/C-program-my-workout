/*	39. Write a C program to find the longest palindromic substring from a given string.

        Expected Output:

        Original string: abcdcsdfabbccb
        Longest Palindromic Substring from the said string? bccb   */

#include <stdio.h>
#include <string.h>
void main()
{
    char string[100];
    int i, j, k = 0, m, n, temp, start = 0, end = 0, start = 0, end = 0, diff = 0, l;
    printf("Input a String: ");
    fgets(string, sizeof(string), stdin);
    l = 0;
    while (string[l] != '\0')
    {
        l++;
    }

    if (l == 0)
    {
        printf("No String Found\n");
        return 0;
    }

    printf("Given string is: %s\n", string);

    for (i = k; i < l; i++)
    {
        for (j = l - 1; i < j; j--)
        {
            if (string[i] == string[j])
            {
                temp = 1;
                start = i;
                end = j;
                for (m = i + 1, n = j - 1; m < n; m++, n--)
                {
                    if (string[m] != string[n])
                    {
                        start = end = 0;
                        temp = 0;
                        break;
                    }
                }
            }
            if (diff < (end - start) && temp == 1)
            {
                diff = end - start;
                start = i;
                end = j;
                temp = 0;
            }
        }
    }

    printf("Longest Palindromic substring is: ");
    for (i = start; i <= end; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}
