/*   Write a program in C to find the sum of all elements of the array.
        Test Data :
        Input the number of elements to be stored in the array :3
        Input 3 elements in the array :
        element - 0 : 2
        element - 1 : 5
        element - 2 : 8
        Expected Output :
        Sum of all elements stored in the array is : 15                    */

#include <stdio.h>
void main()
{
    int i, n, sum = 0;

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
        sum = sum + arr[i];
    }

    printf("\nThe sum of array elements are: %d\n", sum);
}


/*Output:
Enter the size of array: 
3
Input no.of elements in the array: 
Element 0: 9  
Element 1: 8
Element 2: 7
The values store into the array are: 
9 8 7 
The sum of array elements are: 24    */