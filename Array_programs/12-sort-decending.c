/* Write a program in C to sort the elements of the array in descending order. 
		Test Data :
		Input the size of array : 3
		Input 3 elements in the array :
		element - 0 : 5
		element - 1 : 9
		element - 2 : 1
		Expected Output :
		Elements of the array in sorted descending order:
		9 5 1  */

#include <stdio.h>
void main()
{
    int i, j, n, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("The array elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The decending order array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

/* Output:

Enter the size of the array: 6
The array elements are: 
Element 0: 3
Element 1: 8
Element 2: 2
Element 3: 1
Element 4: 4
Element 5: 4
The decending order array is: 8 4 4 3 2 1              */