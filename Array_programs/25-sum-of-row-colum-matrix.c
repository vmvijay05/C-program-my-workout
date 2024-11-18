/*25. Write a program in C to find the sum of rows and columns of a matrix.
        Test Data :
        Input the size of the square matrix : 2
        Input elements in the first matrix :
        element - [0],[0] : 5
        element - [0],[1] : 6
        element - [1],[0] : 7
        element - [1],[1] : 8
        Expected Output :
        The First matrix is :
        The matrix is :
        5 6
        7 8
        The sum or rows and columns of the matrix is :
        5 6  11
        7 8  15

        12 14                */

#include <stdio.h>
void main()
{
    int i, j, row, col, k, sum = 0, sum1 = 0, total;

    printf("Input the size of the square matrix: \n");
    scanf("%d %d", &row, &col);

    int arr[row + 1][col + 1];

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

    for (i = 0; i < row; i++)
    {
        sum = 0;
        for (j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        arr[i][j] = sum;
    }

    for (i = 0; i < col; i++)
    {
        sum1 = 0;
        for (j = 0; j < row; j++)
        {
            sum1 = sum1 + arr[j][i];
        }
        arr[j][i] = sum1;
    }
    total = 0;
    for (i = 0; i < row; i++)
    {

        for (j = col; j >= 0; j--)
        {
            total = total + arr[i][j];
            break;
        }
    }

    for (i = 0; i < col; i++)
    {
        for (j = row; j >= 0; j--)
        {
            total = total + arr[j][i];
            break;
        }
    }
    arr[row][col] = total;

    printf("The sum or rows and columns of the matrix is : \n");

    for (i = 0; i <= row; i++)
    {

        for (j = 0; j <= col; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}

/*Output:

Input the size of the square matrix:
2
3

Enter the array elements:

Elements-[0][0]: 1

Elements-[0][1]: 2

Elements-[0][2]: 3

Elements-[1][0]: 4

Elements-[1][1]: 5

Elements-[1][2]: 6

The matrix is:
1 2 3
4 5 6
The sum or rows and columns of the matrix is :
1  2  3  6
4  5  6  15
5  7  9  42                   */