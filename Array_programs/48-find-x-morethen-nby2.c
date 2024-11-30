/*48. Write a program in C to find out if a given integer x appears more than n/2 times in a sorted array of n integers.
        Expected Output :
        The given array is : 1 3 3 5 4 3 2 3 3
        The given value is : 3
        3 appears more than 4 times in the given array[]    */

#include <stdio.h>
void main()
{
    int i, x, n, count = 0;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the  array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The given value is: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        printf("%d appears more than %d times in the given array\n", x, n / 2);
    }
    else
    {
        printf("%d does not appears more than %d times in the given array\n", x, n / 2);
    }
}