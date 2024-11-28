/*45. Write a program in C to find two elements whose sum is closest to zero.
        Expected Output :
        The given array is : 38 44 63 -51 -35 19 84 -69 4 -46
        The Pair of elements whose sum is minimum are:
        [44, -46]                */

#include <stdio.h>
void main()
{
    int i, n, count, j, sum1 = 0, sum2 = 0, Nearest1 = 0, Nearest2 = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input no.of elements in the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    Nearest1 = 0;
    Nearest2 = 1;
    sum2 = arr[0] + arr[1];

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            sum2 = arr[i] + arr[j];

            if (sum1 > sum2)
            {
                sum1 = sum2;
                Nearest1 = i;
                Nearest2 = j;
            }
        }
    }
    printf("The Pair of elements whose sum is minimum are: %d, %d\n", arr[Nearest1], arr[Nearest2]);
}