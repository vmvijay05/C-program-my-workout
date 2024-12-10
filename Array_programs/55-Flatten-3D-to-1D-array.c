/*Flatten a 3D array into a 1D array and print the 1D array  */

#include <stdio.h>
void main()
{
    int arr1[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

    int arr2[8], i, j, k, n = 0;

    printf("The given 3D Array is:\n");
    for (i = 0; i < 2; i++)
    {
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("%d ", arr1[i][j][k]);
            }
            printf("\n");
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                arr2[n] = arr1[i][j][k];
                n++;
            }
        }
    }

    printf("The 1D Array is:\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr2[i]);
    }
}

/*Output:

The given 3D Array is:
Layer 1:
1 2
3 4
Layer 2:
5 6
7 8
The 1D Array is:
1 2 3 4 5 6 7 8           */
