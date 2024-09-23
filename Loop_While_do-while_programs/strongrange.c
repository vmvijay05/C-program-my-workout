/* Write a C program to find Strong Numbers within a range of numbers.
		Test Data :
		Input starting range of number : 1
		Input ending range of number: 200
		Expected Output :
		The Strong numbers are :
		1 2 145       */

#include <stdio.h>
void main()
{
	int i, j, mod, sum, given, fact, min, max;

	printf("Enter the starting and ending numbers: ");
	scanf("%d %d", &min, &max);

	for (i = min; i <= max; i++)
	{

		given = i;
		sum=0;
		while (given != 0)
		{
			mod = given % 10;
			fact = 1;
			for (j = 1; j <= mod; j++)
			{
				fact = fact * j;
			}
			sum = sum + fact;
			given = given / 10;
			// given++;
		}
		
	if (sum == i)
		{
			printf("The %d is strong number.\n", sum);
		}
		

	}
}


/* Output:  

Enter the starting and ending numbers: 1
500
The 1 is strong number.
The 2 is strong number.
The 145 is strong number.        */
