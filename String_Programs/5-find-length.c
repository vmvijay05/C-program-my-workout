/*Write a program in C to find the length of a string without using library functions.

		Test Data :
		Input the string : w3resource.com

		Expected Output :

		Length of the string is : 15          */

#include <stdio.h>
void main()
{
	int length = 0, i;
	char str_name[15];
	printf("Enter the string: ");
	scanf("%s", &str_name);
	// fgets(str_name,sizeof(str_name),stdin);
	// gets(str_name);

	for (i = 0; str_name[i] != '\0'; i++)
	{
		length++;
	}

	printf("Length of the string is: %d", length);
}

/*Output:
Enter the string: asdf
Length of the string is: 4        */