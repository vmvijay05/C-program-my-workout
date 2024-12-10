/* Calculate the sum of all the elements in a 3D array  */

#include <stdio.h>

void main()
{
    int i, j, k, n, row, col, sum = 0;

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

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < row; j++)
        {
            for (k = 0; k < col; k++)
            {
                sum = sum + arr[i][j][k];
            }
        }
    }

    printf("Sum of all elements in the 3D array: %d\n", sum);
}

/*Output

Enter the no.of block: 
2
Enter the row size: 
3
Enter the column size:
2
Element - [0] [0] [0]: 9
Element - [0] [0] [1]: 8
Element - [0] [1] [0]: 7
Element - [0] [1] [1]: 6
Element - [0] [2] [0]: 5
Element - [0] [2] [1]: 4
Element - [1] [0] [0]: 3
Element - [1] [0] [1]: 2
Element - [1] [1] [0]: 1
Element - [1] [1] [1]: 1
Element - [1] [2] [0]: 2
Element - [1] [2] [1]: 3
Sum of all elements in the 3D array: 51          */
