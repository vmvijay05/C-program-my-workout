/* 89. Write a program in C to find the prime numbers within a range of numbers.
		Test Data :
		Input starting number of range: 1
		Input ending number of range : 50
		Expected Output :
		The prime number between 1 and 50 are :
		2 3 5 7 11 13 17 19 23 29 31 37 41 43 47    */

#include <stdio.h>
void main()
{

	int num, i, j, min, max;
	int flag;

	printf("Enter the numbers: ");
	scanf("%d %d", &min, &max);
	printf("The prime number between %d and %d are: \n", min, max);

	for (j = min; j <= max; j++)
	{
		flag = 1;
		for (i = 2; i < j; i++)
		{
			if (j % i == 0)
			{
				// printf("The given number is not a prime number\n");
				flag = 0;
				break;
			}
		}
		if (flag == 1 && j!=1)
			printf("%d ", j);
	}
}

/*Output:
Enter the numbers: 1
50
The prime number between 1 and 50 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47    */
