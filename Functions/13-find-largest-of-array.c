/*8. Write a program in C to get the largest element of an array using the function.
        Test Data :
        Input the number of elements to be stored in the array :5
        Input 5 elements in the array :
        element - 0 : 1
        element - 1 : 2
        element - 2 : 3
        element - 3 : 4
        element - 4 : 5
        Expected Output :

        The largest element in the array is : 5        */

// With Argument Without Return
#include <stdio.h>
void largest(int);

void main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    largest(n);
}

void largest(int n)
{
    int i, max;

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", max);
}

/*Output:

Enter 5 elements:
3
5
23
6
1
The largest element in the array is: 23          */