/*29. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
        Test Data :
        Input the number of rows of the matrix : 2
        Input the number of columns of the matrix : 2
        Input elements in the first matrix :
        element - [0],[0] : 0
        element - [0],[1] : 0
        element - [1],[0] : 1
        element - [1],[1] : 0
        Expected Output :
        The given matrix is sparse matrix.
        There are 3 number of zeros in the matrix   */

#include <stdio.h>
void main()
{
    int i, j, row, col, count;

    printf("Input the size of matrix: \n");
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

    count = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count > ((row*col) / 2))
    {
        printf("It is a sparse matrix\n");
        printf("There are %d number of zeros in the matrix\n",count);  
    }
    else
        printf("It is a non-sparse matrix\n");
}

/*Output:

Input the size of matrix: 
3
3

Enter the array elements: 

Elements-[0][0]: 0

Elements-[0][1]: 6

Elements-[0][2]: 3

Elements-[1][0]: 0

Elements-[1][1]: 5

Elements-[1][2]: 0

Elements-[2][0]: 0

Elements-[2][1]: 0

Elements-[2][2]: 0
It is a sparse matrix
There are 6 number of zeros in the matrix

         (or)

Input the size of matrix: 
2
2

Enter the array elements: 

Elements-[0][0]: 0

Elements-[0][1]: 7

Elements-[1][0]: 0

Elements-[1][1]: 5
It is a non-sparse matrix             */
