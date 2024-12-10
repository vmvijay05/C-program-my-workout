/*	41. Write a program in C to find the Floor and Ceiling of the number 0 to 10 from a sorted array.
		Expected Output :
		The given array is : 1 3 5 7 8 9
		Number: 0 ceiling is: 1 floor is: -1
		Number: 1 ceiling is: 1 floor is: 1
		Number: 2 ceiling is: 3 floor is: 1
		Number: 3 ceiling is: 3 floor is: 3
		Number: 4 ceiling is: 5 floor is: 3
		Number: 5 ceiling is: 5 floor is: 5
		Number: 6 ceiling is: 7 floor is: 5
		Number: 7 ceiling is: 7 floor is: 7
		Number: 8 ceiling is: 8 floor is: 8
		Number: 9 ceiling is: 9 floor is: 9
		Number: 10 ceiling is: -1 floor is: 9    */

#include <stdio.h>
void main()
{
	int i, j, n, N, ceil, floor, temp, temp1;

	printf("Enter the size of array:");
	scanf("%d", &n);

	int arr[n];

	printf("Enter the  sorted array elements: \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d \t", &arr[i]);
	}
	for (i = 0; i <= 10; i++)
	{
		temp = 0, temp1 = 0;
		for (j = 0; j < n; j++)
		{

			if (i <= arr[j] && temp != 1)
			{
				ceil = arr[j];
				temp = 1;
			}
			if (i >= arr[(n - 1) - j] && temp1 != 1)
			{
				floor = arr[(n - 1) - j];
				temp1 = 1;
			}
		}
		if (temp == 1)
		{
			printf("Number %d ceiling is: %d\n", i, ceil);
		}
		else
		{
			printf("Number %d ceiling is: %d\n", i, -1);
		}
		if (temp1 == 1)
		{
			printf(" floor is: %d\n", floor);
		}
		else
		{
			printf(" floor is: %d\n", -1);
		}
	}
}

/*Output

					 */