/* 16. Write a program in C to compute the sum of all elements in an array using pointers.
        Test Data :
        Input the number of elements to store in the array (max 10) : 5
        Input 5 number of elements in the array :
        element - 1 : 2
        element - 2 : 3
        element - 3 : 4
        element - 4 : 5
        element - 5 : 6
        Expected Output :
        The sum of array is : 20   */

#include <stdio.h>
void main()
{
    int i, n, sum = 0;

    printf("Enter the size of array: \n");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Input no.of elements in the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    i = 0;
    while (i < n)
    {
        sum = sum + *ptr;
        *ptr++;
        i++;
    }
    printf("The sum of array elements are: %d\n", sum);
}

/* Output:

Enter the size of array: 
5
Input no.of elements in the array:
Element 0: 9
Element 1: 8
Element 2: 7
Element 3: 6
Element 4: 5
The sum of array elements are: 35    */