/*46. Write a program in C to find the smallest positive number missing from an unsorted array.
        Expected Output :
        The given array is : 3 1 4 10 -5 15 2 -10 -20
        The smallest positive number missed is: 5    */

#include <stdio.h>
void main()
{
    int i, j, k, n, flag;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the  array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            printf("The smallest missing number is: %d\n", i);
            break;
        }
    }
}

/*Output:
Enter the size of array:8
Enter the  array elements:
Element 0: 5
Element 1: 3
Element 2: 0
Element 3: -3
Element 4: -1
Element 5: 7
Element 6: 8
Element 7: -5
The smallest missing number is: 1               */