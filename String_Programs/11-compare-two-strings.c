/*	6. Write a program in C to compare two strings without using string library functions.

        Test Data :
        Check the length of two strings:
        --------------------------------
        Input the 1st string : aabbcc
        Input the 2nd string : abcdef
        String1: aabbcc
        String2: abcdef
        Expected Output : Strings are not equal.

        Check the length of two strings:
        --------------------------------
        Input the 1st string : aabbcc
        Input the 2nd string : aabbcc
        String1: aabbcc
        String2: aabbcc
        Expected Output : Strings are equal.   */

#include <stdio.h>
void main()
{
    int i, j, length1 = 0, length2 = 0, flag = 0;
    char str1[100], str2[100];
    printf("Enter the string1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the string2: ");
    fgets(str2, sizeof(str2), stdin);

    // Find the string length of two strings:
    for (i = 0; str1[i] != '\0'; i++)
    {
        length1++;
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        length2++;
    }

    if (length1 == length2)
    {
        for (i = 0; i < length1; i++)
        {
            if (str1[i] != str2[i])
            {
                flag++;
                break;
            }
        }
    }
    else
    {
        flag = 1;
    }
    if (flag == 0)
    {
        printf("Strings are equal");
    }
    else if (flag != 0)
        printf("The given strings are not equal");
}
