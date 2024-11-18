/*      Write a program in C to find the second largest element in an array.
		Test Data :
		Input the size of array : 5
		Input 5 elements in the array :
		element - 0 : 2
		element - 1 : 9
		element - 2 : 1
		element - 3 : 4
		element - 4 : 6
		Expected Output :
		The Second largest element in the array is : 6      */


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

    printf("The Second largest element in the array is : ");
    printf("%d ",arr[1]);
}


/*Output:

Enter the size of the array: 6
The array elements are: 
Element 0: 4
Element 1: 8
Element 2: 3
Element 3: 5
Element 4: 0
Element 5: 1
The Second largest element in the array is : 5        */


