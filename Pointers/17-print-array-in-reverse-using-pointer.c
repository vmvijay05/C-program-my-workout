/*  17. Write a program in C to print the elements of an array in reverse order.
        Test Data :
        Input the number of elements to store in the array (max 15) : 5
        Input 5 number of elements in the array :
        element - 1 : 2
        element - 2 : 3
        element - 3 : 4
        element - 4 : 5
        element - 5 : 6

        Expected Output :
        The elements of array in reverse order are :
        element - 5 : 6
        element - 4 : 5
        element - 3 : 4
        element - 2 : 3
        element - 1 : 2  */

#include <stdio.h>
void main()
{
    int i, j, n;

    printf("Enter the size of array: \n");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Input no.of elements in the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
        ptr = &arr[i];
    }
    printf("The elements of array in reverse order are:\n");
    j = 0;
    for (i = n; i > 0; i--)
    {
        printf("Element-%d: %d\n", j, *ptr);
        ptr--;
        j++;
    }
}

/*   Output:

   Enter the size of array: 
5
Input no.of elements in the array:
Element 0: 1
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
The elements of array in reverse order are:
Element-0: 5
Element-1: 4
Element-2: 3
Element-3: 2
Element-4: 1         */
