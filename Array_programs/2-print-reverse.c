/*   Write a program in C to read n number of values in an array and display them in reverse order.
        Test Data :
        Input the number of elements to store in the array :3
        Input 3 number of elements in the array :
        element - 0 : 2
        element - 1 : 5
        element - 2 : 7
        Expected Output :
        The values store into the array are :
        2 5 7
        The values store into the array in reverse are :
        7 5 2                                                                       */

#include <stdio.h>
void main()
{
    int i, n;

    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Input no.of elements in the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The values store into the array are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe values store into the array in reverse are: \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

/*  Output:

Enter the size of array:
4
Input no.of elements in the array:
Element 0: 2
Element 1: 3
Element 2: 4
Element 3: 5
The values store into the array are:
2 3 4 5
The values store into the array in reverse are:
5 4 3 2
                             */
