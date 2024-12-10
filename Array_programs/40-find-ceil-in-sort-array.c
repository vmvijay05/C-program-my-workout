/*40. Write a program in C to find the ceiling in a sorted array.
		N.B.: Given a sorted array in ascending order and a value x, the ceiling of x is the smallest element in array greater than or equal to x, and the floor is the 	greatest element smaller than or equal to x.
		Expected Output :
		The given array is : 1 3 4 7 8 9 9 10
		The ceiling of 5 is: 7   */

#include <stdio.h>
void main()
{
	int i, j, n,min,ceil;

	printf("Enter the size of array:");
	scanf("%d", &n);

	int arr[n];

    printf("Enter the value of find ceil: ");
    scanf("%d",&ceil);

	printf("Enter the  sorted array elements: \n");
	for (i = 0; i < n; i++)
	{
		printf("Element %d: ", i);
		scanf("%d", &arr[i]);
	}

    for(i=0;i<n;i++)
    {
        if(ceil<=arr[i])
        {
        min=arr[i];
        break;
        }
    }
    printf("The ceiling of %d is: %d",ceil,min);

}

/*Output:
Enter the size of array:8
Enter the value of find ceil: 4
Enter the  sorted array elements:
Element 0: 0
Element 1: 1
Element 2: 1
Element 3: 2
Element 4: 3
Element 5: 4
Element 6: 5
Element 7: 6
The ceiling of 4 is: 4         */