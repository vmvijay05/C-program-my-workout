/* Write a program in C to insert values in the array (unsorted list).
		Test Data :
		Input the size of array : 4
		Input 4 elements in the array in ascending order:
		element - 0 : 1
		element - 1 : 8
		element - 2 : 7
		element - 3 : 10
		Input the value to be inserted : 5
		Input the Position, where the value to be inserted :2
		Expected Output :
		The current list of the array :
		1 8 7 10
		After Insert the element the new list is : 1 5 8 7 10     */

#include <stdio.h>
void main()
{
	int i = 0, n, j = 0, a, temp, p;
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter the insert value: "); // insert value.
	scanf("%d", &a);

	printf("Input the Position, where the value to be inserted ");  //position
	scanf("%d", &p);

	printf("Enter the array elements: \n");
	for (i = 0; i < n; i++)
	{
		printf("Element %d: ", i);
		scanf("%d", &arr[i]);
	}

	for (j = n; j >= p; j--)
	{
		arr[j + 1] = arr[j];
	}
	arr[p] = a;

	printf("\nThe new list array elements are: ");
	for (i = 0; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
}


/*Output:  

Enter the size of the array: 5
Enter the insert value: 15
Input the Position, where the value to be inserted 2
Enter the array elements: 
Element 0: 2
Element 1: 5
Element 2: 3
Element 3: 8
Element 4: 5

The new list array elements are: 2 5 15 3 8 5                     */
