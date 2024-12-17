/*18. Write a program in C to find the frequency of characters.

        Test Data :
        Input the string : This is a test string
        Input the character to find frequency: i

        Expected Output :

        The frequency of 'i' is : 3   */

#include <stdio.h>
void main()
{
    char str[100];
    int i, j, count;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("The frequency of:\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        // Skip the character if it has already been counted
        if (str[i] == ' ' || str[i] == '\n') // Skip space and newline characters
            continue;
        count = 1;
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = '0'; // Mark this character as counted (replace with '0')
            }
        }
        if (str[i] != '0')
        {
            printf("'%c' = %d\n", str[i], count);
        }
    }
}

/*Output:

The frequency of:
'V' = 1
'i' = 4
'j' = 1
'a' = 4
'y' = 1
'k' = 1
'u' = 1
'm' = 1
'r' = 2
's' = 1
'n' = 2
't' = 2
'e' = 2
'l' = 1
'g' = 1     */