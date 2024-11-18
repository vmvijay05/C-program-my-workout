/*      Write a program in C to separate odd and even integers into separate arrays.
		Test Data :
		Input the number of elements to be stored in the array :5
		Input 5 elements in the array :
		element - 0 : 25
		element - 1 : 47
		element - 2 : 42
		element - 3 : 56
		element - 4 : 32
		Expected Output :
		The Even elements are :
		42 56 32
		The Odd elements are :
		25 47                              */

#include <stdio.h>
void main()
{
	int i, n, j = 0, k = 0;
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int a1[n], a2[n], a3[n];

	printf("Enter the array elements: \n");
	for (i = 0; i < n; i++)
	{
		printf("Element %d: ", i);
		scanf("%d", &a1[i]);
		if (a1[i] % 2 == 0)
		{
			a2[j] = a1[i];
			j++;
		}
		else
		{
			a3[k] = a1[i];
			k++;
		}
	}

	printf("The even array is: ");
	for (i = 0; i < j; i++)
	{
		printf("%d ", a2[i]);
	}

	printf("\nThe odd array is: ");
	for (i = 0; i < k; i++)
	{
		printf("%d ", a3[i]);
	}
}

/*  Output:

Enter the size of the array: 5
Enter the array elements: 
Element 0: 2
Element 1: 6
Element 2: 4
Element 3: 87
Element 4: 23
The even array is: 2 6 4 
The odd array is: 87 23              */
