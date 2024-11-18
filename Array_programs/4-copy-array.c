/*   Write a program in C to copy the elements of one array into another array.
        Test Data :
        Input the number of elements to be stored in the array :3
        Input 3 elements in the array :
        element - 0 : 15
        element - 1 : 10
        element - 2 : 12
        Expected Output :
        The elements stored in the first array are :
        15 10 12
        The elements copied into the second array are :
        15 10 12            */

#include <stdio.h>
void main()
{
    int i, n;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr1[n] , arr2[n];
    printf("Input no.of elements in the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("The values store into the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nThe elements copied into the second array are : ");
    for(i=0;i<n;i++)
    {
        arr2[i] = arr1[i];
        printf("%d ",arr2[i]);
    }
}


/*  Output:
Enter the size of array: 3
Input no.of elements in the array: 
Element 0: 6 
Element 1: 7
Element 2: 8
The values store into the array are: 6 7 8 
The elements copied into the second array are : 6 7 8              */