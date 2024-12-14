/*	7. Write a program in C to count the total number of alphabets, digits and special characters in a string.

		Test Data :
		Input the string : Welcome to w3resource.com

		Expected Output :

		Number of Alphabets in the string is : 21
		Number of Digits in the string is : 1
		Number of Special characters in the string is : 4   */

#include <stdio.h>
int main()
{
	char str[100];
	int alpha = 0, digit = 0, special = 0;
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			alpha++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			digit++;
		}
		else if (str[i] != ' ')
		{
			special++;
		}
	}
	printf("No.of Alphabets: %d\n", alpha);
	printf("No.of Digits: %d\n", digit);
	printf("No.of Special characters: %d\n", special);
}

/*Output:

Enter a string: You'll stop getting *emails&calls on Dec 27
No.of Alphabets: 32
No.of Digits: 2
No.of Special characters: 4         */
