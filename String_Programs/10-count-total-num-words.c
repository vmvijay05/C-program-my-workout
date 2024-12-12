/*5. Write a program in C to count the total number of words in a string.

        Test Data :
        Input the string : This is w3resource.com

        Expected Output :

        Total number of words in the string is : 3   */

#include <stdio.h>
#include <string.h>
void main()
{
    int i, length, count;
    char string[100];
    printf("Enter the string: ");
    gets(string);
    length = strlen(string);
    for (i = 1; i <= length; i++)
    {
        if (' ' == string[i])
        {
            count++;
        }
    }
    printf("Total no.of words in the string: %d", count + 1);
}

/*Output:
Enter the string: Learn c char array
Total no.of words in the string: 4       */