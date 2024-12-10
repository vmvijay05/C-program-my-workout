/* Find the maximum value in a 3D array and print its position */

#include <stdio.h>
void main()
{
    int i, j, k, n, row, col;

    printf("Enter the no.of block: \n");
    scanf("%d", &n);

    printf("Enter the row size: \n");
    scanf("%d", &row);

    printf("Enter the column size: \n");
    scanf("%d", &col);

    int arr[n][row][col];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                printf("Element - [%d] [%d] [%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    int index_x = 0, index_y = 0, index_z = 0, max = arr[0][0][0];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < row; j++)
        {
            for (k = 0; k < col; k++)
            {
                if (arr[i][j][k] > max)
                {
                    max = arr[i][j][k];
                    index_x = i;
                    index_y = j;
                    index_z = k;
                }
            }
        }
    }
    printf("Maximum value: %d\n", max);
    printf("Position of maximum value: (%d, %d, %d)\n", index_x, index_y, index_z);
}


/*Output:

Enter the no.of block: 
3
Enter the row size: 
2
Enter the column size: 
2
Element - [0] [0] [0]: 3
Element - [0] [0] [1]: 2
Element - [0] [1] [0]: 4
Element - [0] [1] [1]: 5
Element - [1] [0] [0]: 4
Element - [1] [0] [1]: 23
Element - [1] [1] [0]: 54
Element - [1] [1] [1]: 56
Element - [2] [0] [0]: 23
Element - [2] [0] [1]: 65
Element - [2] [1] [0]: 34
Element - [2] [1] [1]: 98
Maximum value: 98
Position of maximum value: (2, 1, 1)            */