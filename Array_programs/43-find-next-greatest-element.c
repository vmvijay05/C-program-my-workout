/*43. Write a program in C to print the next greatest elements in a given unsorted array. Elements for which no superior element exists, consider the next greatest element as -1.
		Expected Output :
		The given array is : 5 3 10 9 6 13
		Next Bigger Elements are:
		Next bigger element of 5 in the array is: 10
		Next bigger element of 3 in the array is: 10
		Next bigger element of 10 in the array is: 13
		Next bigger element of 9 in the array is: 13
		Next bigger element of 6 in the array is: 13
		Next bigger element of 13 in the array is: -1
		Next Bigger Elements Array:
		10 10 13 13 13 -1    */

#include <stdio.h>
void main()
{
	int i, j, n, temp = -1, k = 0, flag;

	printf("Enter the size of array:");
	scanf("%d", &n);

	int arr[n], arr2[n];

	printf("Enter the  array elements: \n");
	for (i = 0; i < n; i++)
	{
		printf("Element %d: ", i);
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		flag = 0;
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				printf("The Next Bigger element of %d in the array: %d\n", arr[i], arr[j]);
				arr2[k] = arr[j];
				k++;
				flag++;
				break;
			}
		}
		if (flag == 0)
		{
			printf("The Next Bigger element of %d in the array %d\n", arr[i], temp);
			arr2[k] = temp;
			k++;
		}
	}
	printf("\nNext Bigger elements array: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr2[i]);
	}
}

/*Output:
Enter the size of array:6
Enter the  array elements:
Element 0: 4
Element 1: 7
Element 2: 3
Element 3: 9
Element 4: 10
Element 5: 5
The Next Bigger element of 4 in the array: 7
The Next Bigger element of 7 in the array: 9
The Next Bigger element of 3 in the array: 9
The Next Bigger element of 9 in the array: 10
The Next Bigger element of 10 in the array -1
The Next Bigger element of 5 in the array -1

Next Bigger elements array:
7 9 9 10 -1 -1                     */