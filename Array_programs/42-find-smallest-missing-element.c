/*42. Write a program in C to find the smallest missing element in a sorted array.
		Expected Output :
		The given array is : 0 1 3 4 5 6 7 9
		The missing smallest element is: 2               */

#include <stdio.h>
void main()
{
    int i, j, k, n, max, min, flag;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the  array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("The missing number is : ");
    for (i = min; i <= max; i++)
    {
       flag = 0;
        for (j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
            break;
        }
    }
}

/*Output:
Enter the size of array:8
Enter the  array elements:
Element 0: 0
Element 1: 1
Element 2: 2
Element 3: 3
Element 4: 4
Element 5: 8
Element 6: 9
Element 7: 10
The missing number is : 5      */