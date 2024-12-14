/* 8. Write a program in C to copy one string to another string.

        Test Data :
        Input the string : This is a string to be copied.

        Expected Output :

        The First string is : This is a string to be copied.
        The Second string is : This is a string to be copied.
        Number of characters copied : 31          */

#include <stdio.h>
void copystring(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
}
int main()
{
    char str1[100], str2[100];
    printf("Enter the string to copy: ");
    fgets(str1, sizeof(str1), stdin);
    copystring(str1, str2);
    printf("The copied string is: %s", str2);
}
