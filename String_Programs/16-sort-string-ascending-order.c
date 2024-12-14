/*11. Write a C program to sort a string array in ascending order.

        Test Data :
        Input the string : w3resource

        Expected Output :

        After sorting the string appears like :
        3ceeorrsuw   */

#include <stdio.h>
void main()
{
    char str[100],temp;
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Sorted string: %s\n", str);
}

/*Output:

Enter a string: dcbaefhgkjilmnptsrvuqzyx
Sorted string: abcdefghijklmnpqrstuvxyz     */
