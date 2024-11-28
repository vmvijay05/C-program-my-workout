/*39. Write a program in C to rotate an array by N positions.
		Expected Output :
		The given array is : 0 3 6 9 12 14 18 20 22 25 27
		From 4th position the values of the array are : 12 14 18 20 22 25 27
		Before 4th position the values of the array are : 0 3 6 9
		After rotating from 4th position the array is:
		12 14 18 20 22 25 27 0 3 6 9           */

#include <stdio.h>
void main()
{
	int i, j, n, temp, p,num;

	printf("Enter the size of array:");
	scanf("%d", &n);

	int arr[n];

	printf("Enter the  array elements: \n");
	for (i = 0; i < n; i++)
	{
		printf("Element %d: ", i);
		scanf("%d", &arr[i]);
	}

	printf("Enter the rotate position: ");
	scanf("%d", &p);
	if (p < n)
	{

		printf("From %d position the values of the array: ", p);
		for (i = p + 1; i < n; i++)
		{
			printf("%d ", i);
		}

		printf("Before %d position the values of the array are: ",p);
		for(i=0;i<=p-1;i++)
		{
			printf("%d",i);
		}

		// To rotate the array
		num=n;
		for (i = 0; i < n; i++)
		{
			temp = arr[i];
			arr[i] = arr[num];
			arr[num] = temp;
			num=num-1;
		}

		for(i=n;i<=p-1;i++)
		{

		}
	}
}
