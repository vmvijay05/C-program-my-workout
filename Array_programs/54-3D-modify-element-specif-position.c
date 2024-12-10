/*Modify an element in the 3D array at a specific position and print the updated array  */

#include <stdio.h>
void main()
{
    int arr[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}}, {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}};

    int i, j, k;
    printf("The given 3D Array is:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }

    // arr[2][1][2] = 99;

    printf("Enter the block index number: ");
    scanf("%d", &i);

    printf("Enter the row index number: ");
    scanf("%d", &j);

    printf("Enter the column index number: ");
    scanf("%d", &k);

    printf("Enter the inserted value: ");
    scanf("%d", &arr[i][j][k]);

    printf("Updated 3D Array is:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }
}

/*Output:
The given 3D Array is:
Layer 1:
1 2 3
4 5 6
7 8 9
Layer 2:
10 11 12
13 14 15
16 17 18
Layer 3:
19 20 21
22 23 24
25 26 27
Enter the block index number: 0
Enter the row index number: 2
Enter the column index number: 1
Enter the inserted value: 888
Updated 3D Array is:
Layer 1:
1 2 3
4 5 6
7 888 9
Layer 2:
10 11 12
13 14 15
16 17 18
Layer 3:
19 20 21
22 23 24
25 26 27   */
