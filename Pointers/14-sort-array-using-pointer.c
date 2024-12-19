/*  14. Write a program in C to sort an array using a pointer.
		Test Data :
		testdata
		Expected Output :
		Test Data :
		Input the number of elements to store in the array : 5
		Input 5 number of elements in the array :
		element - 1 : 25
		element - 2 : 45
		element - 3 : 89
		element - 4 : 15
		element - 5 : 82
		Expected Output :
		The elements in the array after sorting :
		element - 1 : 15
		element - 2 : 25
		element - 3 : 45
		element - 4 : 82
		element - 5 : 89   */

#include <stdio.h>
void main()
{
	int n, i, j, temp;
	int arr[100];
	int *ptr1, *ptr2;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	printf("Enter %d elements:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			ptr1 = &arr[i];
			ptr2 = &arr[j];
			if (*ptr1 > *ptr2)
			{
				temp = *ptr1;
				*ptr1 = *ptr2;
				*ptr2 = temp;
			}
		}
	}
	printf("Sorted array:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

/*Output:
Enter the number of elements: 5
Enter 5 elements:
2
5
765
23
14
Sorted array:
2 5 14 23 765     */