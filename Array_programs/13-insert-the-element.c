/* Write a program in C to insert the values in the array (sorted list).
        Test Data :
        Insert New value in the sorted array :
        -----------------------------------------
        Input the size of array : 5
        Input 5 elements in the array in ascending order:
        element - 0 : 2
        element - 1 : 5
        element - 2 : 7
        element - 3 : 9
        element - 4 : 11
        Input the value to be inserted : 8
        The exist array list is :
        2 5 7 9 11
        After Insert the list is :
        2 5 7 8 9 11   */

#include <stdio.h>
void main()
{
    int i = 0, n, j = 0, a, temp, b;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter the input value to be inserted: "); // insert value.
    scanf("%d", &a);

    printf("Enter the array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > a)
        {
            b = i;
            break;
        }
        // else
        // b=i+1;
    }

    for (j = n; j >= b; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[b] = a;

    printf("\nThe new list array elements are: ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}

/* Output:
Enter the size of the array: 5
Enter the array elements:
Element 0: 2
Element 1: 5
Element 2: 6
Element 3: 8
Element 4: 9

The new list array elements are: 2 5 6 7 8 9            */
