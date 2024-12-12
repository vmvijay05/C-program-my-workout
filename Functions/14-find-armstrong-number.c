/*  9. Write a program in C to check Armstrong and Perfect numbers using the function.
		Test Data :
		Input any number: 371
		Expected Output :

		The 371 is an Armstrong number.
		The 371 is not a Perfect number.      */

// With Argument With Return
#include <stdio.h>
int armstrong(int num)
{
	int n2, n3, i = 0, j, sum = 0, given;
	given = num;
	// find given number count:
	while (given != 0)
	{
		given = given / 10;
		i++;
	}
	// find armstrong number:
	given = num;
	while (num != 0)
	{
		n2 = num % 10;
		n3 = 1;
		for (j = 1; j <= i; j++)
		{
			n3 = n3 * n2;
		}
		//	printf("count=%d\n", n3);
		num = num / 10;
		sum = sum + n3;
	}
	// printf("sum=%d\n",sum);
	return sum;
}

void main()
{
	int result, num;
	printf("Enter the number: ");
	scanf("%d", &num);
	result = armstrong(num);
	if (num == result)
	{
		printf("It is a armstrong number.\n");
	}
	else
		printf("It is not armstrong number.\n");
}

/*Output:

Enter the number: 407
It is a armstrong number.    */