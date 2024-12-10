/*34. Write a program in C to find the number occurring odd number of times in an array.
        All numbers occur even number of times except one number which occurs odd number of times.
        Expected Output :
        The given array is : 8 3 8 5 4 3 4 3 5
        The element odd number of times is : 3            */

#include <stdio.h>
void main()
{
    int i, j, k, n, flag, count;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the  array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements in array are: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (i == 0)
            {

                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
            else
            {
                flag = 1;
                for (k = i - 1; k >= 0; k--)
                {
                    if (arr[i] == arr[k])
                    {
                        flag++;
                    }
                }
                if (flag == 1)
                {
                    if (arr[i] == arr[j])
                    {
                        count++;
                    }
                }
            }
        }
        // printf("\ncount=%d",count);
       
    }
     if (count % 2 != 0)
        {
            printf("\nThe element odd number of times is : %d\n", arr[i]);
        }
}