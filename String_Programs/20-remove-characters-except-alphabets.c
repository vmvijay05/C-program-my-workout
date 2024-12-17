/*17. Write a program in C to remove characters from a string except alphabets.

        Test Data :
        Input the string : w3resource.com

        Expected Output :

        After removing the Output String : wresourcecom   */

#include <stdio.h>
void main()
{
    char str[100];
    int i, j = 0;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("Modified string: %s\n", str);
}

/*Output:
Enter a string: #Vetha3 Maharishi$
Modified string: VethaMaharishi      */