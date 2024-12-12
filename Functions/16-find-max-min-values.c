/*	11. Write a C program to find the maximum and minimum of some values using a function that returns an array.
        Test Data :
        Input 5 values
        25
        11
        35
        65
        20
        Expected Output :
        Number of values you want to input: Input 5 values
        Minimum value is: 11
        Maximum value is: 65          */

// With Argument Without Return
#include <stdio.h>
void minmax(int n, int arr1[])
{
    int i, j, a;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr1[i] > arr1[j])
            {
                a = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = a;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("The minimum element is: %d\n", arr1[i]);
        }
        else if (i == n - 1)
        {
            printf("The maximum element is: %d\n", arr1[i]);
        }
    }
}

void main()
{
    int n, a, i, j, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the array1 elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d: ", i);
        scanf("%d", &arr1[i]);
    }
    minmax(n, arr1);
}

/*Output:
Enter the size of the array: 5
Enter the array1 elements are:
Elements 0: 2
Elements 1: 4
Elements 2: 14
Elements 3: 5
Elements 4: 1
The minimum element is: 1
The maximum element is: 14         */
