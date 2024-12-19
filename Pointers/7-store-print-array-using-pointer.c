/*	7. Write a program in C to store n elements in an array and print the elements using a pointer.
        Test Data :
        Input the number of elements to store in the array :5
        Input 5 number of elements in the array :
        element - 0 : 5
        element - 1 : 7
        element - 2 : 2
        element - 3 : 9
        element - 4 : 8
        Expected Output :
        The elements you entered are :
        element - 0 : 5
        element - 1 : 7
        element - 2 : 2
        element - 3 : 9
        element - 4 : 8  */

#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;
    printf("Enter the array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element-%d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d is %d\n", i, ptr[i]);
    }
}

/*
Output:
Enter the size of array: 5
Enter the array elements:
Element-0: 3
Element-1: 1
Element-2: 5
Element-3: 7
Element-4: 9
The elements are:
Element 0 is 3
Element 1 is 1
Element 2 is 5
Element 3 is 7
Element 4 is 9
*/