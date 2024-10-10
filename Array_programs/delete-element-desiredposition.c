/*      Write a program in C to delete an element at a desired position from an array.
        Test Data :
        Input the size of array : 5
        Input 5 elements in the array in ascending order:
        element - 0 : 1
        element - 1 : 2
        element - 2 : 3
        element - 3 : 4
        element - 4 : 5
        Input the position where to delete: 3
        Expected Output :
        The new list is : 1 2 4 5                  */

#include <stdio.h>
void main()
{
    int i = 0, n, j = 0, a, temp, del;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input the position where to delete: ");
    scanf("%d", &del);

    printf("Enter the array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (j = del; j < n; j++)
    {
        arr[j] = arr[j + 1];
    }

    printf("\nThe final array elements are: ");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}

/*Output:

Enter the size of the array: 5
Input the position where to delete: 4
Enter the array elements: 
Element 0: 2
Element 1: 4
Element 2: 6
Element 3: 8
Element 4: 10

The final array elements are: 2 4 6 8          */
