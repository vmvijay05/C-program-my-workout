/*  Write a program in C to sort elements of an array in ascending order.
        Test Data :
        Input the size of array : 5
        Input 5 elements in the array :
        element - 0 : 2
        element - 1 : 7
        element - 2 : 4
        element - 3 : 5
        element - 4 : 9
        Expected Output :
        Elements of array in sorted ascending order: 2 4 5 7 9    */

#include <stdio.h>
void main()
{
    int i, j, n, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("The array elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The ascending order array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

/*  Output:

Enter the size of the array: 7
The array elements are: 
Element 0: 8
Element 1: 9
Element 2: 5
Element 3: 6
Element 4: 3
Element 5: 2
Element 6: 4
The ascending order array is: 2 3 4 5 6 8 9             */
