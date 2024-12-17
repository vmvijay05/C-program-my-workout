/*33. Write a C program to count each character in a given string.
	
		Test Data :
		Input a string: w3resource
		
		Expected Output:
		
		Enter a str1ing: The count of each character in the string w3resource is 
		w	1
		3	1
		r	2
		e	2
		s	1
		o	1
		u	1
		c	1  */
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
