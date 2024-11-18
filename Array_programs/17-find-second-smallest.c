/*Write a program in C to find the second smallest element in an array.
        Test Data :
        Input the size of array : 5
        Input 5 elements in the array (value must be <9999) :
        element - 0 : 0
        element - 1 : 9
        element - 2 : 4
        element - 3 : 6
        element - 4 : 5
        Expected Output :
        The Second smallest element in the array is : 4                */

#include <stdio.h>
void main()
{
    int i, j, n, temp, small, min;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("The array elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    small = arr[0];

    for (i = 0; i < n; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }
    min = small;
    small = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min != arr[i])
        {
            if (small > arr[i])
            {
                small = arr[i];
            }
        }
    }

    printf("The Second largest element in the array is : ");
    printf("%d ", small);
}