/*Write a program in C to check whether a given matrix is an identity matrix.
        Test Data :
        Input number of Rows for the matrix :3
        Input number of Columns for the matrix :3
        Input elements in the first matrix :
        element - [0],[0] : 1
        element - [0],[1] : 0
        element - [0],[2] : 0
        element - [1],[0] : 0
        element - [1],[1] : 1
        element - [1],[2] : 0
        element - [2],[0] : 0
        element - [2],[1] : 0
        element - [2],[2] : 1
        Expected Output :
        The matrix is :
        1 0 0
        0 1 0
        0 0 1
        The matrix is an identity matrix.       */

#include <stdio.h>
void main()
{
    int i, j, row, col, count;

    printf("Input the size of  matrix: \n");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    
    printf("\nEnter the array elements: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\nElements-[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe matrix is: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
count=0;
    for(i=0;i<row;i++)
    {
        for(j=i;j<i;j++)
        {
            if(arr[i][i]==1)
            {
                count++;
            }
        }
    }
    if(count==row)
    {
        printf("The matrix is an identity matrix.");
    }
}
