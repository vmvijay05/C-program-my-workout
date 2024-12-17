/* 29. Write a program in C to read a file and remove the spaces between two words of its content.

        Expected Output :

        The content of the file is :
        The quick brown fox jumps over the lazy dog
        After removing the spaces the content is :
        Thequickbrownfoxjumpsoverthelazydog  */

#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    int i = 0, j, count;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        if (str[i] == ' ')
        {
            j = i;
            while (str[j - 1] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
            count = 1;
        }
        // if (count == 0)
        //     i++;
    }
    printf("After removing the spaces the content is : %s", str);
}
