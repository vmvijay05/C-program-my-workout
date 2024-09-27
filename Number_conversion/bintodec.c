/* Write a C program to convert a binary number into a decimal number without using array, function and while loop.
		Test Data :
		Input a binary number :1010101
		Expected Output :
		The Binary Number : 1010101
		The equivalent Decimal Number : 85*/

#include <stdio.h>
void main()
{

	int num, n1, n, base = 1, sum = 0, i, j, mod;
	printf("Enter the binary number: ");
	scanf("%d", &num);

	j = 1;

	for (i = num; i > 0; i = i / 10)
	{
		mod = i % 10;

		if (j == 1)
		{
			base = base * 1;
		}
		else
			base = base * 2;

		sum = sum + (mod * base);
		j = j + 1;
	}
	printf("The decimal number is: %d\n", sum);
}

/*  Output:
Enter the binary number: 1111
The decimal number is: 15      */