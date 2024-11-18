/* Write a program in C to print all unique elements in an array.
        Test Data :
        Print all unique elements of an array:
        ------------------------------------------
        Input the number of elements to be stored in the array: 4
        Input 4 elements in the array :
        element - 0 : 3
        element - 1 : 2
        element - 2 : 2
        element - 3 : 5
        Expected Output :
        The unique elements found in the array are:
        3 5    */
#include <stdio.h>
void main()
{
    int i, n, j, k, count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Input no.of elements in the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
printf("\nThe unique elements found in the array are: ");
    for (k = 0; k < n; k++)
    {
        count=0;
        for (j = 0; j < n; j++)
        {
            if (arr1[k] == arr2[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%d ", arr1[k]);
        }
    }
}


/* Output:

Enter the size of array: 3
Input no.of elements in the array: 
Element 0: 1
Element 1: 3
Element 2: 3

The unique elements found in the array are: 1             */