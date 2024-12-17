/*  19. Write a program in C to combine two strings manually.

        Test Data :
        Input the first string : this is string one
        Input the second string : this is string two

        Expected Output :

        After concatenation the string is :
        this is string one this is string two  */

#include <stdio.h>
void main()
{
    char str1[100], str2[100];
    int i, j, count = 0;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] == '\n')
        {
            str2[i] = '\0';
            break;
        }
    }

    // Find the length of the first string
    for (i = 0; str1[i] != '\0'; i++)
    {
    }
    for (j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';

    printf("Combined string: %s\n", str1);
}

/*Output:
Enter the first string: C 
Enter the second string: Language
Combined string: C Language   */